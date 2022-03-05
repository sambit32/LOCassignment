#include <stdio.h>
#include <string.h>
void main()
{
    char s1[30];
    char s2[30];
    scanf("%s", &s1);
    scanf("%s", &s2);
    strcat(s1, s2);
    for (int i = (strlen(s1) - 1); i >= 0; i--)
    {
        printf("%c", s1[i]);
    }
}