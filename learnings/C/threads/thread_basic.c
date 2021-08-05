#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

static void* thread_handler(void *arg);

int main()
{
    int data = 1;
    void *ret;
    int ret1;
    pthread_t tid;
    pthread_attr_t tattr;
    ret1 = pthread_attr_init(&tattr);
    ret1 = pthread_attr_setdetachstate(&tattr, PTHREAD_CREATE_DETACHED);
    pthread_create(&tid, &tattr, &thread_handler, (void *) &data);
    pthread_join(tid, &ret);
    return 0;
}

static void* thread_handler(void *arg)
{
    int data = *((int *) arg);
    printf("From thread; data = %d \n", data);
    pthread_exit(NULL);
}
