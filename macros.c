
#include <stdio.h>
#define add(x,y) x+y
#define sub(x,y) x-y
#define mul(x,y) x*y
int main()
{
	int a=8,b=23;
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
	printf("%d\n",mul(a,b));
	return 0;
}
