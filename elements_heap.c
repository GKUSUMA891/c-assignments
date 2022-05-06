
#include <stdio.h>
#include<stdlib.h>
int a=89;//global var stored in data segment
float b=78;
char c='o';//global var stored in data segment
int main()
{
    //int a=90;//4 //local var stored in stack segment
    //float b=9.6;//4 //local stack
    //char c;
    double c=(double) a/b/c;
    double *ptr=&c;
    //ptr=(double) a/b;
    ptr=(double *)malloc(sizeof(c));
    
    printf("%d\n",c);
    //printf("Hello World");

    return 0;
}

