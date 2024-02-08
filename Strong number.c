/* 145= 1!+4!+5!
          =1+24+120
          =145
          strong number
          */

#include<stdio.h>
int main()
{
    int num,i, fact=1, r, sum=0, temp;

    printf("Enter any digits: ");
    scanf("%d", &num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
            for(i=1; i<r; i++)
            {
                fact =fact*i;
            }
     sum=sum+fact;
     temp=temp/10;
    }
    if(sum==num)
        printf("The number is strong");
    else
        printf("The number is not string");

}
