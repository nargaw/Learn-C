#include <stdio.h>

int sum = 0;
int rem;

int reverse_function(int num)
{
    if(num)
    {
        rem = num%10;
        sum = sum *10 + rem;
        reverse_function(num/10);
    } 
    else{
        return sum;
    }
    return sum;
}

int main()
{
    int num, reverse_number;

    printf("Enter any number: ");
    scanf("%d", &num);

    reverse_number = reverse_function(num);
    printf("The reverse of the number entered is: %d", reverse_number);

    //example: 23
    //rem = num%10 -> 23%10 -> 3
    //sum = sum * 10 + rem -> sum = 0 * 10 + 3 -> 3
    //num = num/10 -> 2.3/10 rem = 2
    //sum = sum * 10 + rem -> sum = 3 * 10 + 2 => 32
    return 0;
}