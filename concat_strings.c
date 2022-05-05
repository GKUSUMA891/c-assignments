/* Write a C program to concatenate two strings and find length of a new string.*/

#include<stdio.h>

void concatenate(char *des,char *src);
int length(char *des);

int main()
{
        char des[50],src[50];
        printf("Enter the string1:");
        scanf("%[^\n]%*c",des);
        printf("Enter the string2:");
        scanf("%[^\n]%*c",src);
        concatenate(des,src);
        return 0;
}


void concatenate(char *des,char *src)
{
        int len1,len2,len3,i=0;
        len1=length(des);
        len2=length(src);
        for(i=0;i<=len2;i++)
        {
                des[len1+i]=src[i];
        }
        printf("The concatenated string is:%s\n",des);
        len3=length(des);
        printf("The length of conacatenated string is:%d\n",len3);
}

int length(char *des)
{
        int count=0,i=0;
        while(des[i]!='\0')
        {
                count++;
                i++;
        }
        return count;
}
