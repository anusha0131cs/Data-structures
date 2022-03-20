//*average of class*//
#include<stdio.h>
float class_average(int []);
int count(int []);
void array(int [ ]);
void main()
{
    int a[10];
    array(a);
    count(a);
}

void array(int a[ ])
{
    int i,j=0;
    printf("enter marks of the students \n ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("marks\n");
    for(j=0;j<10;j++)
    {
        printf(" %d \n",a[j]);
    }
}
float class_average(int a[])
{
    int i,sum=0;
    float avg;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("class average = %f\n",avg);
    return avg;
}

int count(int a[])
{
    int i,above_count=0,below_count=0;
    float avg=class_average(a);
    for(i=0;i<10;i++)
    {
        if(a[i]>=avg)
        {
            above_count++;
        }
        else
        {
            below_count++;
        }
    }
    printf("number of students above average = %d\n",above_count);
    printf("number of students below average = %d\n",below_count);
    return (0);
}
