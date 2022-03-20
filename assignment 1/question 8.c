#include<stdio.h>

void array(int a[ ])
{
    int i;
    printf("enter the amount spent amount in each month\n ");
    for(i=0;i<12;i++)
    {
        scanf("%d",&a[i]);
    }

}

void ascending_order(int a[],int b[])
{
    int i,t,j;
    int m;
    int k;
    for(i=0;i<12;i++)
    {
        b[i]=a[i];
    }
    for (i = 0 ;i<12-1;i++)
    {

        for (j = 0;j < 12-i-1;j++)
        {
            if (a[j] > a[j+1])
            {
                t= a[j];
                a[j]= a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("list  \n");
    for(i=0;i<12;i++)
    {
        printf("%d\n",a[i]);
    }

    for(i=0;i<12;i++)
    {
        if(b[i]==a[11])
        {
            m=i;
        }
    }

    for(i=0;i<12;i++)
    {
        if(b[i]==a[0])
        {
            k=i;
        }
    }
    printf("the month of the year they spent more = %d \n",m);
    printf("the month of the year they spent less = %d \n",k);
}

int count(int b[])
{
    int i,count=0;
    for(i=0;i<12;i++)
    {
        if(b[i]>=35000)
        {
            count++;
        }
    }
    return count;
}

float average(int b[])
{
    int i,sum=0;
    float avg;
    for(i=0;i<12;i++)
    {
        sum=sum+b[i];
    }
    avg=sum/12.0;
    return avg;
}

void main()
{
    int n,a[100],b[100],c=0;
    array(a);
    ascending_order(a,b);
    c=count(b);
    float avg=average(b);
}
