//clear.c
#include<stdio.h>
#include "clear.h"
int main()
{
    int a=345;
    clearnth();
}
//clear.h
#include <stdio.h>

void clearnth()
{
    int a,n;
    int b= a & (~(1<<n));
    printf("nth clear bit is:%d\n",b);
    
    int y= a&(~(1<<n));  ///  clear a bit 133
      printf("nth clear bit is:%d\n",y);

    return 0;
}

