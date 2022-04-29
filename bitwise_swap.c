//swap two numbers using bitwise operator.

#include <stdio.h>

int main()
{
    int a=67;
    int b=23;
    printf("before swap: %d %d\n",a,b);
     a=a^b;
    b=a^b;
    a=a^b;
    printf("after swap:%d %d\n",a,b);
    return 0;
}

