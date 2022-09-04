#include <stdio.h>
#include<stdlib.h>

struct sPerson
{
    int age;
};



int main()
{
    //create a new Pointer to sPerson structure
    struct sPerson *newPerson = NULL;

    //allocate dynamic memory
    //malloc returns a pointer to the beginning of the allocated memory
    //point the newPerson pointer to the allocated returned pointer
    newPerson = malloc(sizeof(struct sPerson));

    //print the memory address of where the pointer is pointing
    printf("new person at %p\n", newPerson);
    return 0;
}
