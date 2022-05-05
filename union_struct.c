
#include <stdio.h>

union uni
{
    int a;
    char b;
  struct s1
  {
      int x;
      float y;
  }s2;
};

int main()
{
    union uni u;
    u.a=90;
    u.b='l';
    u.s2.x=98;
    u.s2.y=8.0;
    printf("%d\n",u.a);
    printf("%c\n",u.b);
    printf("%d\n",u.s2.x);
    printf("%f\n",u.s2.y);
    printf("%zu sizeof\n",sizeof(struct s1));
    printf("%zu\nsizeof",sizeof(u));
    
    //printf("Hello World");

    //return 0;
}

