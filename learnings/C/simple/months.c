#include <stdio.h>


int main()
{
    char months[4][128] = {{"JAN"}, {"FEB"}, {"MAR"}, {"APR"}};
    printf("Month = %s", months[0][0]);
}
