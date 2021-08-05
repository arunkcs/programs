#include <stdio.h>
#include "elf.h"

#define ELF_HEADER_SIZE 52

int main()
{
    Elf32_Ehdr header;
    unsigned short s;
    memset(&header, 0, sizeof(header));
    FILE *fp = fopen("/bin/ls", "r");
    fread(&header, ELF_HEADER_SIZE, 1, fp);
    fclose(fp);
    printf("header size = %d\n", sizeof(header));
    s = header.e_machine;
    printf("header->e_machine = %u\n", s);
    return 0;
}
