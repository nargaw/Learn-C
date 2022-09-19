#include <stdio.h>

int main()
{
    double num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    //return the smallest
    if(num1 < num2 && num1 < num3)
    {
        printf("%lf is the smallest number", num1);
    } 

    if(num2 < num1 && num2 < num3)
    {
        printf("%lf is the smallest number", num2);
    }

    if(num3 < num1 && num3 < num2)
    {
        printf("%lf is the smallest number", num3);
    }

    return 0;
}