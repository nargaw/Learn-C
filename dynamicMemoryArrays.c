#include <stdio.h>

//we can transverse an array using pointers
//we can dynamically allocate (contiguous) memory using block pointers
//two aspect can be combined to dynamically allocate memory for an array

int main()
{
    int n = 5;
    char *pvowels = (char *) malloc(n * sizeof(char));
    int i;

    pvowels[0] = 'A';
    pvowels[1] = 'E';
    *(pvowels + 2) = 'I';
    pvowels[3] = 'O';
    *(pvowels + 4) = 'U';

    for(i = 0; i < n; i++)
    {
        printf("%c", pvowels[i]);
    }
    printf("\n");
    free(pvowels);

    //

    return 0;
}