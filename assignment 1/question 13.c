//*read and display and perfect number*//
#include<stdio.h>
void read(int a[],int n);
void disp(int a[],int n);
void perf(int a[],int n);
int main()
{
    int a[100],i,n;

    printf("enter the size of array");
    scanf("%d",&n);

    if(n<=0||n>100)
    {
        printf("invalid array size");
        exit(0);
    }
    read(a,n);
    disp(a,n);
    perf(a,n);

}

    void read(int a[],int n)
    {
        int i;

        printf("enter the elements in array");

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }

    void disp(int a[],int n)
    {
        int i;

        printf("display elements in an array");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }

    void perf(int a[],int n)
    {
        int i,sum=0,r;

        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
              a[i]=n;
             for(i=0;i<n;i++)
             {
                 if(n%i==0)

                    sum=sum+i;



        if(sum==n)
        {
            printf("%d is perfect number");
        }

        else
        {
            printf("%d is not perfect number");
        }
             }

        }
    }













