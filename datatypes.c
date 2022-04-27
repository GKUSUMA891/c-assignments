//Program to Explain all data types including signed and unsigned.
#include <stdio.h>
int main()
{
    int choice;
    int a;
    float b;
    char c;
    double d;
    long double e;
    signed f;
    unsigned g;
    printf("enter choice:");
    scanf("%d\n ",&choice);
    switch(choice)
    {
        case 1:
        { 
            int a=20;
            printf("int data type %d\n",a);
            break;
        }
        case 2:
        {
            float b=7.8;
            printf("float data type %f\n",b);
            break;
        }
        case 3:
        {
            double c=1234;
            printf("double data type %d\n",c);
            break;
        }
        case 4:
        {
            long double d=5678;
            printf("long double data type is:%d\n",d);
            break;
        }
        case 5:
        {
            signed int e=-123;
            printf("signed integer is:%d\n",e);
            break;
        }
        case 6:
        {
            unsigned int f=125;
            printf("unsigned int is:%u",f);
            break;
        }
        default :
        {
            printf("integer data types");
            break;
        }
    }
    return 0;
}

