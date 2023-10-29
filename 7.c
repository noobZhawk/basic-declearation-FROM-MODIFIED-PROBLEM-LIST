#include <stdio.h>
int main()
{
    int a,b,c,d,e=0;

    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("Enter the third number: ");
    scanf("%d",&c);

    printf("Enter the fourth number: ");
    scanf("%d",&d);

     if(a%2==0)
        e=e+a;
     if(b%2==0)
        e=e+b;
     if(c%2==0)
        e=e+c;
     if(d%2==0)
        e=e+d;

    printf("Sum of all even values: %d",e);




   return 0;
}

