#include<stdio.h>
int main()
{
    int row,col,n,c=1;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
            printf("* ");
 printf("\n");
    }
     for(int row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
            printf("* ");
 printf("\n");
}
}
