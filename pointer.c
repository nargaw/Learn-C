#include <stdio.h>

//pointers are simple integer varible which hold a memory address that points to a value instead of holding the actual value itself
//memory is stored sequentially and pointer points to a specific part of the memory
//program can use pointers to point to a large amount of memory

//char * name = "Robert";

//1. allocates a local(stack) variable called name, which is a pointer to a single character
//2. causes the string "Robert" to appear somewhere in the program memory
//3. initializes the name argument to point to where the 'R' character resides at

//the name variable can be accesed as an array
//at the end of the string it is marked with a null terminator with ordinal value of 0 noted as '\0'

//Dereferencing: act of referring to where the pointer points instead of the memory address
//in arrays the brackets operator [0] - accesses the first item - accessing the first item in the array is the same as dereferencing a pointer
//dereferencing a pointer is done using the astrik operator *

//'&' is used to point at a variable

//local variable
//int a = 1;

//define a pointer variable and point to the local vairable using '&' operator
//int * pointer_to_a = &a;

//printf("The value a is %d\n", a);
//printf("The value of a is also %d\n", *pointer_to_a);

//changing the dereferenced variable will change the variable it is point to 

//int a = 1;
//int * pointer = &a;

//change variable
//a += 1;

//change variable again
//*pointer += 1;

//result = 3

//create a pointer to the local variable n called pointer_to_n and use it to increate the value of n by one

int main()
{
    int n = 10;

    int * pointer_to_n = &n;
    *pointer_to_n += 1;

    if(pointer_to_n != &n) return 1;
    if(*pointer_to_n != 11) return 1;

    printf("Done!\n");
    return 0;

}