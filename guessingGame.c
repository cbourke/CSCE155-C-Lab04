#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  int n = 1000;

  //seed the random number generator
  srand(time(NULL));
  int number = (rand() % n) + 1;

  int guess = -10;
  int num_guesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);

  //TODO: place your code here

  printf("Congratulations, you found it!  Number of guesses: %d\n", num_guesses); 
  return 0;
}
