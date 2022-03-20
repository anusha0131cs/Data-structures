//*  C Program to Sort n Numbers using Bubble Sort  *//
#include <stdio.h>
#define MAXSIZE 10

void main()
{
    int a[MAXSIZE];
    int i, j, n, temp;
    int *p;
    p=a;

    printf("Enter the size of an array \n");
    scanf("%d", a);

    printf("Enter the elements one by one \n");
    for (p = 0; p < a; p++)
    {
        scanf("%d", a);
    }
    printf("Input array is \n");
    for (p = 0; p < n; p++)
    {
        printf("%d\n", *p);
    }
    /*   Bubble sorting begins */
    for (p = 0; p < a; p++)
    {
        for (j = 0; j < (a - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (p = 0; p < a; p++)
    {
        printf("%d\n", *p);
    }
}
