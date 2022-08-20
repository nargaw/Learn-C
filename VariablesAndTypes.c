#include <stdio.h>

int main(){
  //integers - whole numbers(can be either + or -) defined using char, int, short, long or long long
  //unsigned ints - can only be + defined using unsigned char, unsigned int, unsigned short, unsigned long, unsigned long long
  //float numbers (fractions) defined using float and double

  //char can range from -128 to 127
  //long can range from -2,147,483,648 to 2,147,483,647

  //C does not have a boolean type
  #define BOOL char
  #define False 0
  #define True 1

  //defining variables
  int foo;
  int bar = 1;

  int a = 0, b = 1, c = 2, d = 3, e = 4;
  int sum;
  
  sum = a + b + c + d + e;
  printf("The sum is %d.", sum);
  //return 10
  return 0;
}
