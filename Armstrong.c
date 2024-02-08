/*

 153=1^3+5^3+3^3
        =1+125+27
        =153

*/

#include<stdio.h>
int main()
{
    int num, r, sum=0, temp;

    printf("Enter any digits: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==num)
        printf("The number is an Armstrong Number");
    else
        printf("The number is not an Armstrog Number");
    return 0;
}
