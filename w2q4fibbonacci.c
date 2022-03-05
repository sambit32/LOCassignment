#include <stdio.h>
void main()
{
    int n, t1, t2, i;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    t1 = 0;
    t2 = 1;
    int next = t1 + t2;
    printf("%d %d", t1, t2);
    for (i = 3; i <= n; i++)
    {
        printf(" %d", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
}