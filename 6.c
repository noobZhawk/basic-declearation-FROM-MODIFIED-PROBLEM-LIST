
#include <stdio.h>
#include <math.h>
int main()
{
    double x1,x2,y1,y2,e;

    printf("enter x1:\n");
    scanf("%lf",&x1);

    printf("enter y1:\n");
    scanf("%lf",&y1);

    printf("enter x2:\n");
    scanf("%lf",&x2);

    printf("enter y2:\n");
    scanf("%lf",&y2);

    e=sqrt((pow(x2-x1,2)+pow(y2-y1,2)));

    printf("distance between the said point:%.4lf\n",e);






   return 0;
}
