//Program to know endianness
#include <stdio.h>
main()
{
    int a=3;
    char *ptr=&a;

    printf("%d",*ptr);
}

