#include <stdio.h>
int main()
{
   int a,b,c,d,e;


    printf("Enter marks of the five courses: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int x,y;
    x=a+b+c+d+e;
    printf("Total = %d\n",x);

    y=x/5;
    printf("Average = %d\n",y);

    return 0;
}
