//*reverse an array*//
#include<stdio.h>
int main()
{
    int i,a[100],n;

    printf("enter the elements in array");
    scanf("%d",&n);

    printf("enter the elements in an arrar");

     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     //reverse an array

     printf("display the reverse of elements in array");

     for(i=n-1;i>=0;i--)
     {
         printf("%d\n",a[i]);
     }
}
