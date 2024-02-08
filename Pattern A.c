/* 1
1 2
1 2 3
1 2 3 4
*/

/*#include<stdio.h>
int main()
{
    int col, row, n;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
    {
    printf("%c ",col+64);
    }
 printf("\n");
    }
}
*/



#include<stdio.h>
int main()
{
    int n, row, col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }
}
