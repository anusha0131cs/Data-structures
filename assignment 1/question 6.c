//*ranking*//
#include<stdio.h>

void array(int n,int a[ ])
{
    int i,j=0;
    printf("enter rank of the students \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("rank \n");
    for(j=0;j<n;j++)
    {
        printf(" %d \n",a[j]);
    }
}

void ascending_order(int n,int a[])
{
    int i,t,j;
    for (i = 0 ;i<n-1;i++)
    {
        for (j = 0;j < n-i-1;j++)
        {
            if (a[j] > a[j+1])
            {
                t= a[j];
                a[j]= a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("ranking list in ascending \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}


void ranking(int n ,int a[])
{
    printf("highest ranking = %d\n",a[0]);
    printf("lowest ranking = %d\n",a[n-1]);
}

void main()
{
    int n,a[100];
    printf("enter number of the students admitted to the university\n");
    scanf("%d",&n);
    array(n,a);
    ascending_order(n,a);
    ranking(n,a);
}
