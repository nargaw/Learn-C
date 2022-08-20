#include <stdio.h>

int main()
{
//arrays are special variables which can hold more than one value under the same variable name
//zero-based similar to javaScript - start counting from zero

int numbers[10];
//numbers array is defined with 10 integers

//arrays only have one type of variable 
    int average;
    int grades[3];

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;
    average = (grades[0] + grades[1] + grades[2])/3;
    printf("The average of the three grades is: %d", average);
}

