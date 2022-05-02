//recursion
//fun .h
#include<stdio.h>
void fun(int n)
{
    if (n)
    {
        fun(n-1);
        printf("%d\n",n);
        
    }
}
//fun.c

#include <stdio.h>
#include "fun.h"
int main()
{
    fun(10);
    //printf("Hello World");

    return 0;
}

