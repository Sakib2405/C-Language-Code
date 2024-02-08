#include<stdio.h>
int main()
{
    int num, r, sum=0, temp;

    printf("Enter any digit: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("The reverse number is: %d\n",sum);
}
