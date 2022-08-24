#include <stdio.h>

//function arguments are passed by value - copied in and out of functions
//pass pointers to values instead of values themselves will allo function more control 


/*
 *This fucntion doesn't work 
 * 
 * void addone(int n)
 *  {
 *       n++;//increment has no effect
 *  }
 * 
 * int n;
 * 
 * addone(n);
 * 
 */



/**
 * This function works
 * 
 * void addone(int *n)
 * {
 *      (*n)++;
 *      //n is a pointer that points to a memory-address outside the function scope
 *      //this will effectively increment the value of n
 * }
 * 
 * int n;
 * 
 * addone(&n);
 */

//pointers to structures

// typedef struct
// {
//     int x;
//     int y;
// } point;


// void move(point * p)
// {
//     (*p).x++;
//     (*p).y++;
// }

// //dereference a structure and access one of it's internal members

// void move(point * p)
// {
//     p ->x++;
//     p ->y++;
// }

//Exercise: Write a function called birthday that adds one to age of a person

typedef struct
{
    char * name;
    int age;
} person;

void birthday(person * p)
{
    //(*p).age++;
    p->age++;
}


int main()
{
    person john;
    john.name = "John";
    john.age = 62;
    
    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

    return 0;
}