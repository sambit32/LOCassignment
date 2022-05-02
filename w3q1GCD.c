#include <stdio.h>

int hcf(int x, int y);

int main()
{
    int a, b;
    printf("Enter two numbers to find GCD:\n");
    scanf("%d%d", &a, &b);
    printf("GCD = %d\n", hcf(a, b));

    return 0;
}

int hcf(int a, int b)
{
    if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}