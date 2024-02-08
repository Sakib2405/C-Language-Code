// 131=131

#include<stdio.h>
int main()
{
    int num, r, temp, sum=0;

    printf("Enter any digits: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }

    if(sum==num)
        printf("The number is Palindrom");
    else
        printf("The number is not Palindrom");
}
