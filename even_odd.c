#include<stdio.h>
void main()
{
	int min,max,i;
	printf("Enter 1 to 100 numbers \n");
	scanf("%d %d",&min,&max);
	printf("\nEven numbers between 1 to 100 are:\n");
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
	printf("\nOdd numbers between 1 to 100 are:\n");
	for(i=min;i<=max;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
}
