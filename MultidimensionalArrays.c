#include <stdio.h>

int main(){

  //type name[size1][size2][size3]

  //Two-dimensional Arrays
  //type arrayName [x][y]
  //type(int, char, long, long long, double etc)
  //x number of rows
  //y number of columbs

  //initalizing a 2D array
  int a[3][4] = {
    {0, 1, 2, 3}, //row index 0
    {4, 5, 6, 7}, //row index 1
    {8, 9, 10, 11} //row index 2
  };
  
  float average;
		int i;
		int j;
        
    int grades[5][2];

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;
  
    for(i = 0; i < 2; i++){
      average = 0;
      for(j = 0; j < 5; j++){
        average += grades[i][j];
      }
      
      average /= 5.0;
      printf("The average grade in subject %d is: %.2f\n", i, average);
      /*
      The average marks obtained in subject 0 is: 78.80
      The average marks obtained in subject 1 is: 82.80
      */
    }
    return 0;
}
