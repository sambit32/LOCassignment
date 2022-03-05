#include<stdio.h>
void main()
{
    int i,j, sumodd=0 , sumeven=0, a[10];
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( j = 0; j < 10; j++)
    {
        if(a[j]%2 == 0)
        {
            sumeven+=a[j];
        }
        else
        {
            sumodd+=a[j];
        }
    }
        // first sum of odd numbers and then sum of even numbers
    printf("%d %d",sumodd,sumeven); 
    
    
}