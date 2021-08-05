#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

static void* thread_even(void *arg);
static void* thread_odd(void *arg);

int data = 1;
pthread_mutex_t data_lock;

int main()
{
    void *ret;
    pthread_t tid_even;
    pthread_t tid_odd;

    if (pthread_mutex_init(&data_lock, NULL) != 0) {
        printf("\n mutex init has failed\n");
        return 1;
    }

    pthread_create(&tid_odd, NULL, &thread_odd, NULL);
    pthread_create(&tid_even, NULL, &thread_even, NULL);
    pthread_join(tid_odd, &ret);
    pthread_join(tid_even, &ret);

    pthread_mutex_destroy(&data_lock);
    return 0;
}

static void* thread_even(void *arg)
{
    while(1)
    {
        pthread_mutex_lock(&data_lock);
        if (data%2 == 0)
        {
            printf("Even thread: %d \n", data);
	    data++;
        }
        if (data > 100)
        {
            pthread_exit(NULL);
        }
        pthread_mutex_unlock(&data_lock);
    }
}

static void* thread_odd(void *arg)
{
    while(1)
    {
        pthread_mutex_lock(&data_lock);
        if (data%2 != 0)
        {
            printf("Odd thread: %d \n", data);
	    data++;
        }
        if (data > 100)
            pthread_exit(NULL);
        pthread_mutex_unlock(&data_lock);
    }
}
