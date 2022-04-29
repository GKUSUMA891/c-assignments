
#include <stdio.h>

int main()
{
    int a=10;
    int b,temp=a;
   while(a>0)
   {
       b=a%2;
       printf("%d",b);
       a=a/2;
   }
  // printf("\n");
   //b=temp<<2;
   //printf("%d",b);

    return 0;
}
