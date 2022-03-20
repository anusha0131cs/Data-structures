//*income tax*//
#include<stdio.h>

void array(int n,int a[ ])
{
    int i;
    printf("enter the amount paid by tax payers \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int count(int n,int a[])
{
    int i,count=0,count1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=250000)
        {
            count++;
        }
        else if(a[i]>=50000 && a[i]<=150000)
        {
            count1++;
        }
    }
    printf("\nthe total number of tax payers who paid tax more than 2.5 lakhs = %d\n ",count);
    printf("\nthe total number of tax payers who paid tax between RS 50000  to Rs 150000 = %d \n",count1);
    return 0;
}

float average(int n ,int a[])
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/(n*1.0);
    return avg;
}


void main()
{
    int n,a[100];
    printf("enter number of the tax payers\n");
    scanf("%d",&n);
    array(n,a);
    count(n,a);
    float avg=average(n,a);
}
