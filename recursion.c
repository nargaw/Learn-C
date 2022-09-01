#include <stdio.h>
#include <stdlib.h>

//Recusion occurs when a function contains within it a call to itself
//could use large amount of memory 

//used with linked lists, binary trees etc
//eg. possible scenarios in games such as chess

//two parts: 
//1. A terminating case that indicates when the recursion will finish
//2. A call to itself must make progress towards terminating case
//recursive adding
// unsigned int multiply(unsigned int x, unsigned int y)
// {
//     if(x == 1)
//     {
//         return y; //terminating case
//     }
//     else if (x > 1)
//     {
//         return y + multiply(x - 1, y);
//     }

//     //catcj scemarop wjem x is zero
//     return 0;
// }

//Exercise:

unsigned int factorial(unsigned int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }

    else if(x > 1)
    {
        return x * factorial(x - 1);
    }

    return 0;
}



int main()
{
    /* testing code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
    // printf("3 time 5 is %d", multiply(3, 5)); -- example


    return 0;
}