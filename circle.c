#include<stdio.h>
int main()
{
    int a;
    float circum,area;
    printf("Enter the radius of the circle:");
    scanf("%d",&a);
    circum=2*3.14*a;
    area=3.14*a*a;
    printf("circumference of the circle:%f",circum);
    printf("\narea of the circle:%f",area);
    return 0;
}
