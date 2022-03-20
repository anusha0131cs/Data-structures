//*calculate salary*//
#include<stdio.h>
#include<conio.h>
int main()
{
    float basic, bonus, gross, year;
    int n,i;
    printf("enter the number of employees:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    printf("Enter the experience of the employee:");
    scanf("%f", &year);

    if(year<5)
    {
    printf("no salary");
    }
    else if(5<=year<=7)
    {
    bonus = (10600*10)/100;
    gross = bonus + 10600;
    printf("\nBonus = %0.2f", bonus);
    printf("\nGross = %0.2f", gross);
    }
    else if(8<=year<=10)
    {
    bonus = (21300*20)/100;
    gross = bonus + 21300;
    printf("\nBonus = %0.2f", bonus);
    printf("\nGross = %0.2f", gross);
    }
    else
    {
    bonus = (32100*30)/100;
    gross = bonus + 32100;
    printf("\nBonus = %0.2f", bonus);
    printf("\nGross = %0.2f", gross);
    }
    };

    getch();
    return 0;
}
