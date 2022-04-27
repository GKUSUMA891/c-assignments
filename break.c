#include <stdio.h>
int main()
{
    int a[]={10,20,30,50,34,75,987};
    int i,n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        printf(" elements are:%d\n",a[i]);
        continue;
    
    }
    for(i=0;i<n;i++)
    {
        printf(" printed elements are: %d\n",a[i]);
        break;
    }
 return 0;
}


