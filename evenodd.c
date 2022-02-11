#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("Even");
        break;
    case 1:
        printf("odd");
        break;
    default:
        break;
    }
    return 0;
}
