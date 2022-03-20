#include<stdio.h>
void array(int n, int a[ ])
{
    int i;
    printf("enter numbers in array \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int eq_index(int n,int a[])
{
    int i,r_sum=0;
    int l_sum=0;
    int m=n/2;
    for(i=0;i<m;i++)
    {

            l_sum=l_sum+a[i];
    }
    for(i=m+1;i<n;i++)
    {
        r_sum=r_sum+a[i];
    }
    printf("left sum = %d\n",l_sum);
    printf("right sum = %d\n",r_sum);
    if(l_sum==r_sum)
    {
        printf("the equilibrium index is %d\n",m);
    }
    else
    {
        printf("there is no equilibrium index for the given array\n ");
    }
    return 0;
}

int main()
{
    int n,a[100],max[100],sum=0;
    printf("enter N value\n");
    scanf("%d",&n);
    array(n,a);
    if((n%2)!=0)
    {
        eq_index(n,a);
    }
    else
    {
        printf("there is no equilibrium index for the given array\n ");
    }
    return 0;
}
