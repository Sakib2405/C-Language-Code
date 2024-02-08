#include<stdio.h>
int main()
{
    int num, r, sum=0, temp;

    printf("Enter the num: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("The sum is of digits is:  %d\n", sum);
    getch();
}
