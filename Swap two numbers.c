#include<stdio.h>
int main()
{
    double a,b;

    printf("Enter the value of a: ");
    scanf("%lf",&a);
    printf("Enter the value of b; ");
    scanf("%lf",&b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("After swaping the number a is: %.2lf ", a);
    printf("After swaping the number b is: %.2lf", b);

    return 0;
}
