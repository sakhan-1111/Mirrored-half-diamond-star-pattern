#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, c;
    printf("Enter number of columns: ");
    scanf("%d", &c);
	
    for(i=1; i<=c; i++)
    {
        for(j=i; j<c; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=c; i>=1; i--)
    {
        for(j=i; j<=c; j++)
        {
            printf(" ");
        }
        for(j=1; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 