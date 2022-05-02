
#include <stdio.h>
void firstoccur(char a[])
{
    char b='l';
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==b)
        break;
        i++;
    }
    printf("first occurence of a word in a string is %d ",i);
}
int main()
{
    char a[]="hello good morning";
    firstoccur(a);
    //printf("Hello World");

    return 0;
}

