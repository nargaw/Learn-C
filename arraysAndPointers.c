#include <stdio.h>

//pointers store the address of any variable of that particular data type 
char c = 'A';
char *pc = &c;//pc(pointer variable) stores the address of the character variable 'c'
//c is a scalar value


//pointers to arrays

char vowels[] = {'A', 'E', 'I', 'O', 'U'};
char *pvowels = vowels;
int i;


int main()
{
    //print the addresses
    for (i =0; i < 5; i++)
    {
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i );
    }

    //&vowels[i] - gives the memory loaction of the ith element of the array vowels
    //pvowels took the address of vowels
    //pvowels + i is a valid op
    //%p - address &vowel[i]
    //&vowels[i] amd pvowels + i are equivalent - both point to the location 

    // Print the values
    for (i = 0; i < 5; i++) 
    {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

    //*(pvowels + i) and *(vowels + i)  both return the ith element of the array
    //name of an array itself is a (constant) pointer to the first element of the array

    return 0;
}