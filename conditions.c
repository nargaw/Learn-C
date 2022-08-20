#include <stdio.h>

//if
/*
if(foo < bar){
  printf("foo is less than bar.");
} else {
  printf("food is greater than bar.");
}
*/

// if, else if, else
//if, else statements can be nested

//"&&" - and - both are true
//"||" - or - at least one is true

void guessNumber(int guess){
  if(guess == 555){
    printf("You guessed correctly.\n"); 
  } else if(guess < 555){
    printf("Too low.\n");
  }  else {
    printf("Too high.\n"); 
  }
}

int main(){
 guessNumber(500);
 guessNumber(600);
 guessNumber(555);
}
