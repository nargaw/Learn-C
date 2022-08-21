#include <stdio.h>

//static is a keyword used with variables and unctions
//variables are declared static to increase their scope up to file containing them
//variables can be accessed anywhere inside a file
//if variable is not declared static as soon as the function completes, it is removed from memory

// int runner()
// {
//     static int count = 0;
//     count ++;
//     return count;
// }

// int main()
// {
//     printf("%d", runner());
//     printf("%d", runner());
//     return 0;
// }


int sum (int num)
{
    static int total = 0;
    total += num;
    return total;
}

int main()
{
    printf("%d\n", sum(55));
    printf("%d\n", sum(45));
    printf("%d\n", sum(50));
    return 0;
}