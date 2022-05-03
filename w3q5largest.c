#include <stdio.h>

int func(int a[], int n);
void main()
{
    int a[100];
    int n, m, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the elements of array:");

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    m = func(a, n);
    printf("largest = %d", m);
}

int func(int a[], int n)
{
    int l, i;
    l = a[0];
    for (i = 1; i <= n; i++)
    {
        if (a[i] > l)
            l = a[i];
    }
    return (l);
}