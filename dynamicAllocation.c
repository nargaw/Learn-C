#include <stdio.h>
#include <stdlib.h>
//allows building of complex data structures such as linked lists
//helps store data without initially knowing the size of the data during writing of the program

//need to have a pointer ready to store in the location of the newly allocated memory
//access memory using that same pointer
//use pointer to free the memory again 

// typedef struct 
// {
//     char * name;
//     int age;
// } person;


//Exercise:

typedef struct{
    int x;
    int y;
} point;


int main()
{
    // person * myperson = (person *) malloc(sizeof(person));
    // //allocate a new person in the myperson argument
    // //tells the compiler that we want to dynamically allocate just enough to hold a person struct in memory and then return a pointer of type person to the newly allocated data
    // //malloc() - reserves the specified memory space (person) in bytes
    // //(person *) before malloc() - malloc() returns a "void pointer" which is a pointer that doesn't have a type
    // //(person *) is typecasting - changes the type of the pointer returned from malloc()  to be person 
    // //C will implicitly convert the type of the returned pointer to that of the pointer it is assigned to (myperson)

    // //access
    // myperson->name = "John";
    // myperson->age=27;

    // free(myperson); //release from memory
    // //does not delet the myperson variable
    // //it relases the data that it points to
    // //to use again new data must be allocated

    //Exercise:
    //point * mypoint = NULL;

    point * mypoint = (point *) malloc(sizeof(point));
    //dynamically allocate a new point

    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);

    return 0;
}