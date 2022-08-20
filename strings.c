#include <stdio.h>

//string in c are arrays of characters
//can be manipulated if defined as a local charcter array

char name[] = "John Smith";
//empty brackets notation tells the compiler to calculate the size of the array automatically
//same as allocating it explicitly
//char name[11] = "John Smith";
//one is added because of a special character equal to 0 that indicates the end of the string
//%s - string
//%d - number

//strlen - string length
//strncmp - string comparison of two strings, return 0 they are equal, if different they are different
//strcmp - not recommended to use
//strncat - string concatenation

int main(){
 char first_name[] = "John";
 char last_name[4] = "Doe";
 char name[]; 
  
  strncat(name, first_name, 5);
  strncat(name, last_name, 4);
  printf("%s\n", name);
  return 0;
}
