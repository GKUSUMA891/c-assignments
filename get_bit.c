#include <stdio.h>

int main()
{

    int a=141;


    if(a&(1<<6))  ///1     173
    {
        printf("bit is one\n");
    }

    else
    {
        printf("bit is zero\n");
    }

    if(a&(1<<5))   /// 0
    {
        printf("bit is one\n");
    }

    else
    {
        printf("bit is zero\n");
    }


    int x=a|(1<<5);   //set bit
    printf("%d\n",x);


    return 0;
}
