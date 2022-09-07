#include <stdio.h>
#include<stdlib.h>

struct sPerson
{
    int age;
    struct sPerson *nextInLine;
};

struct sPerson *getNewPerson(const int age)
{   
    struct sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
    newPerson->nextInLine = NULL;
    newPerson->age = age;
    printf("created new person at %p\n", newPerson);
    return newPerson;
};

void printPerson(const struct sPerson *person, const char *comment)
{
    if(person == NULL)
    {
        printf("%s  is NULL\n", comment);
    } 
    else
    {
        printf("%s: age:%d address:%p nextInLine:%p\n",
            comment,
            person->age,
            person,
            person->nextInLine
        );
    }
}

int main()
{
    //create a new Pointer to sPerson structure
    // struct sPerson *newPerson = NULL;

    // //allocate dynamic memory
    // //malloc returns a pointer to the beginning of the allocated memory
    // //point the newPerson pointer to the allocated returned pointer
    // newPerson = malloc(sizeof(struct sPerson));

    // //print the memory address of where the pointer is pointing
    // printf("new person at %p\n", newPerson);

    struct sPerson *first = NULL;
    struct sPerson *second = NULL;

    printPerson(first, "first");
    printPerson(second, "second");

    first = getNewPerson(124);
    second = getNewPerson(500);

    printPerson(first, "first");
    printPerson(second, "second");

    first->nextInLine = second;
    printPerson(first, "first");
    printPerson(first->nextInLine, "first->nextInLine");
    printPerson(second, "second");

    free(first);
    free(second);

    first = NULL;
    second = NULL;

    return 0;
}
