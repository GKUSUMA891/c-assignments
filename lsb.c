//lsb.h
#include<stdio.h>
int main()
{
    lsb();
}

//lsb.c
#include<stdio.h>
#include "lsb.h"
 void lsb()
 {
    int num;
    //user input
    printf("Enter number: ");
    scanf("%d", &num);
    if(num & 1)
        printf("LSB set is (1) %d\n");
    else
        printf("LSB set  is (0)%d\n");
}
