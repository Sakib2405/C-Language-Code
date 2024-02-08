#include<stdio.h>
int main()
{
    int row,col,n,c=1
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(int row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
            printf("%d",col);
        for(col=row-1; col>=1; col--)
            printf("%d",col);
        printf("\n");
    }

    for(int row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
            printf("%d",col);
        for(col=row-1; col>=1; col--)
            printf("%d",col);
        printf("\n");
    }
    getch();
}
