//*exchange the elements in array*//
#include<stdio.h>
void main()
{
    int a[100],b[100],m,n,i,c[100];

   printf("enter the size of first of array:\n");
   scanf("%d",&m);

   printf("enter the elements of first arrray:\n");
   for(i=0;i<m;i++)
   {
       scanf("%d",&a[i]);
   }

   printf("enter the size of second of array:\n");
   scanf("%d",&n);

   printf("enter the elements of second array:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
   }

   if(m==n)
     {
        printf("valid");
        printf("\n");

           for(i=0;i<m;i++)
            {

              c[i]=a[i];
              a[i]=b[i];
              b[i]=c[i];
            }

            printf("display elements in first array:\n");
            for(i=0;i<m;i++)
            {
                printf("%d\n",a[i]);
            }
            printf("\n");


            printf("display elements in second array:\n");
            for(i=0;i<n;i++)
            {
                printf("%d\n",b[i]);
            }

     }

   else
   {
       printf("invalid");
   }




}
