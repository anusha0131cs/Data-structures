//*library*//
#include<stdio.h>

void array(int n,int a[ ],int b[])
{
    int i,j=0;
    printf("the number of days after the deadline\n\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("penalty of the student\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>=15)
        {
            b[i]=a[i]*2.0;
            printf("%d ",b[i]);
        }

    }
    printf("\n");
}
void sum_avg(int n,int b[])
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    printf("\ntotal penalty = %d\n",sum);
    avg=sum/(n*1.0);
    printf("\naverage penalty = %0.2f\n",avg);
}

float max_penalty(int n,int b[])
{
    int i;
    float max =b[0];
    for (i = 0; i < n; i++)
    {
      if(b[i]!=0)
      {
          if (b[i]>max)
        {
            max = b[i];
        }
      }
   }
  printf("\nmaximum penalty paid by the student = %.2lf\n", max);
   return max;
}

float min_penalty(int n,int b[])
{
    int i;
    float min = b[0];
    for (i = 0; i < n; i++)
    {
      if(b[i]!=0)
      {
          if (b[i] < min)
        {
            min = b[i];
        }
      }

   }
  printf("\nminimum penalty paid by the student = %.2lf\n", min);
   return min;
}


void main()
{
    int n,a[100],b[100];
    float min,max;
    printf("enter the number of students who returned the book late\n");
    scanf("%d",&n);
    array(n,a,b);
    sum_avg(n,b);
    max=max_penalty(n,b);
    min=min_penalty(n,b);
}
