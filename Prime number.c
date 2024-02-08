#include<stdio.h>
int main()
{
    int num, count=0, i;
    printf("Enter any number: ");
    scanf("%d",& num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("Prime number");
    else
        printf("Not a Prime number");
    return 0;
}
