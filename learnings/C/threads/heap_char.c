#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocate(char **ptr);

int main()
{
    char *ptr = NULL;
    allocate(&ptr);
    if (ptr)
    {
        printf("ptr = %s", ptr);
	free(ptr);
    }
    return 0;
}

void allocate(char **ptr)
{
    *ptr = (char *) malloc(10);
    if (ptr)
    {
	memset(*ptr, 0, 10);
        strcpy(*ptr, "hello");
    }
    return;
}
