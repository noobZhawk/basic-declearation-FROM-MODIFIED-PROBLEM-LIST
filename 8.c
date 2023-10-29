#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the first integer: ");
    scanf("%d",&a);

    printf("Enter the second integer: ");
    scanf("%d",&b);

    printf("Enter the third integer: ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        printf("Maximum value of three integers: %d",a);
    }
    else
    {
        if(b>c)
        printf("Maximum value of three integers: %d",b);
        else
        printf("Maximum value of three integers: %d",c);
    }




 return 0;
}
