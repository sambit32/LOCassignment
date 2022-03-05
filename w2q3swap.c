#include <stdio.h>
void main()
{
    int n, new, multiplier = 1, first, last, count = 0, original;
    printf("Enter a number:");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    count = count - 2;
    while (count != 0)
    {
        multiplier *= 10;
        count--;
    }

    last = original % 10;
    original = original / 10;
    first = original / multiplier;
    original = original % multiplier;
    new = ((last * multiplier) + original) * 10 + first;
    printf("%d", new);
}