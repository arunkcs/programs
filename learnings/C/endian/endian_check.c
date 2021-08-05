#include <stdio.h>

int main()
{
    unsigned int i = 0xFFFFFF00;
    char *ptr = (char *) &i;
    printf("FF:FF:FF:FF = 4294967295 \n");
    printf("i = %u &i = %x sizeof(i) = %d\n", i, &i, sizeof(i));
    printf("%x %x %x %x \n", ptr, ptr+1, ptr+2, ptr+3);
    printf("%d %d %d %d \n", *ptr, *(ptr+1), *(ptr+2), *(ptr+3));

    if (*ptr == 0x0)
        printf("Little endian \n");
    else
        printf("Big endian\n");
}
