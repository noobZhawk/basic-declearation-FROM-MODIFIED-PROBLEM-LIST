#include <stdio.h>
int main()
{
  int x,a,b,c,d;
  scanf("%d",&x);
  a=x/365;
  printf("years:%d\n",a);
  b=x%365;
  c=b/7;
  printf("weeks:%d\n",c);
  d=b%7;
  printf("day:%d",d);



   return 0;
}

