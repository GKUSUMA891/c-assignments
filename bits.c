//find bit is zero/one,set bit,clear bit,toggle bit,right shift,left shift
#include <stdio.h>

int main()
{
    int a=234;
    int b=a&(1<<4);
    if(b) //bit is zore or one
    {
    printf("bit is zero\n");
    }
    else
    {
        printf("bit is zero\n");
    }
    
    int c=a &(1<<4);// 0/1
    printf("bit is %d\n",b);
    
    int d=a|(1<<6);  //set bit
    printf("set bit is:%d\n",d);
     int e=a & (~(1<<5)); //clear bit
     printf("clear bit is:%d\n",e);
     int f=a^(1<<4); //toggle bit
     printf("toggle bir is:%d\n",f);
     int g=a&(1>>4);//right shift
     printf("left shift:%d\n",g);
     char h=a&(1<<3);
    printf("left shift:%d\n",h);
    int n;
     int i=a|(1<<n);  //set bit
    printf("set  nth bit is:%d\n",i);
    

    return 0;
}

