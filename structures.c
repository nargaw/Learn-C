#include <stdio.h>

//C structures = special, large variables which contain several named variables inside
//basic foundation for objects and classes in C
//used for: serialization of data, passing multiple arguments through a single argument, data structures such as linked lists, binary trees and more

//basic example of structres are points with two variables

// struct point 
// {
//     int x;
//     int y;
// };

//define a new point and use it
//access the point's variables using '.' operator

//Typedefs
//allow for type definition with a different name

// typedef struct 
// {
//     int x;
//     int y;
// } point;

// point p;

//Structures can also hold pointers
//this allows structures to hold strings or pointers to other structures

// typedef struct 
// {
//     char * brand;
//     int model;
// } vehicle;

// vehicle mycar;
// mycar.brand = "Toyota";
// mycar.model = 2002;


typedef struct 
{
    char * name;
    int age;
} person;

int main()
{
    person Bob;

    Bob.name = "Bob";
    Bob.age = 47;
    printf("%s is %d years old.\n", Bob.name, Bob.age);
    return 0;
}