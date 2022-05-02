#include <stdio.h>

void func(int a);

void main()
{
    int x;
    scanf("%d", &x);
    func(x);
}

void func(int a)
{
    if (a % 2 == 0)
        printf("even");

    else
        printf("odd");
}
