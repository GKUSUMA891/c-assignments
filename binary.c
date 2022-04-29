#include <stdio.h>

int main()
{

    int a=141;
    int temp= a;

    while(a>0)
    {
        int x=a%2;
        printf("%d ",x);
        a=a/2;
    }
    printf("\n");

    int y=temp<<3;

    printf("%d\n",y);

    while(y>0)
    {
        int z=a%2;
        printf("%d ",z);
        y=y/2;
    }
    printf("\n");

    char p=141;

    char b=p<<3;   //  left shift 3
    printf("%d",b);

    printf("\n");
    while(b>0)
    {
        int h=b%2;
        printf("%d ",h);
        b=b/2;
    }


    return 0;
}

