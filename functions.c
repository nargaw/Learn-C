#include <stdio.h>

// int foo(int bar)
// {
//     return bar * 2;
// }

// int main()
// {
//     foo(1);
// }

//foo is a function that recieves one argument and multiplies the argument by 2
//functions must be defined before they are used
//can use a header file
//functions that don't return a value are set to void

//exercise learn-c.org
//write a function called print_big that receives one argument(integer) and prints the line x is big(where x is the argument)
//if argument given is bigger than 10

void print_big(int number);

int main()
{
   int array[] = {1, 11, 2, 22, 3, 33};
   int i;
   for (i = 0; i<6; i++)
   {
    print_big(array[i]);
   }
   return 0;
}

void print_big(int number)
{
    if(number > 10)
    {
        printf("%d is big\n", number);
    }
}
