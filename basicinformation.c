#include<stdio.h>
int main()
{
    int regdno;
    char name[50];
    char branch[4];
    printf("Enter your Name:");
    scanf("%s",&name);
    printf("Enter your regd no.:");
    scanf("%d",&regdno);
    printf("Enter your Branch:");
    scanf("%s",&branch);
    printf("Name: %s",name);
    printf("\nRegdNo.: %d",regdno);
    printf("\nBranch: %s",branch);
    return 0;
}

