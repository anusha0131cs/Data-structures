//search
#include<stdio.h>
void array(int n,int [ ]);
int search(int n, int [], int key);
void main()
{
    int n,a[100],b[100],flag=0,key;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    array(n,a);
    printf("enter the number to be searched\n");
    scanf("%d",&key);
    printf("key=%d\n",key);
    flag=search(n,a,key);
    if(flag==0)
        printf("%d is present in the array\n",key);
    else
        printf("%d is not present in the array\n",key);
}

void array(int n,int a[ ])
{
    int i,j=0;
    printf("enter numbers in an array \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is\n");
    for(j=0;j<n;j++)
    {
        printf(" %d \n",a[j]);
    }
}

int search(int n, int a[],int key)
{
    int i=0,flag=0;
    printf("key=%d\n",key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=0;
            return (flag);
        }
        else if(a[i]!=key)
        {
            flag=1;
        }
    }
    return (flag);
}
