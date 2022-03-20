// *1)	Read an array of numbers with size n and count frequency of positive/negative numbers*//

#include <stdio.h>
int countPositiveNumbers(int* a, int n)
{
    int p = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] > 0)
            p++;
    }
    return p;
}

int countNegativeNumbers(int* a, int n)
{
    int N = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] < 0)
            N++;
    }
    return N;
}

void printArray(int* a, int n)
{
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = { 2, -1, 5, 6, 0, -3 };
    int n;
    n = sizeof(a) / sizeof(a[0]);

    printArray(a, n);

    printf("Count of Positive elements = %d\n",
           countPositiveNumbers(a, n));
    printf("Count of Negative elements = %d\n",
           countNegativeNumbers(a, n));

    return 0;
}
