

#include<stdio.h>
void main()
{

int i, fact=1, n;

printf("Enter any positive value for n: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    fact=fact*i;
}
printf("The factorial of %d is: %d\n", n, fact);
return 0;
}
/*

#include<stdio.h>
int main()
{
    int i, fact=1, n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is: %d" ,n, fact);
}*/



