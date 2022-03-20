//*total bill*//
#include<stdio.h>
int main()
{
    int n,m,total;

    printf("enter the number of flats");
    scanf("%d",&n);

    printf("enter the number of units");
    scanf("%d",&m);

    if(0<=n>=100)
    {
        total=m*1.5;

        printf("%d",total);
    }

    else if(101<=n>=250)
    {
        total=m*2.3;

        printf("%d",total);
    }


    else if(251<=n>=600)
    {
        total=m*4.0;

        printf("%d",total);
    }

    else
    {
        total=m*5.5;

        printf("%d",total);
    }


}
