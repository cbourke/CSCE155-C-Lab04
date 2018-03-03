/**
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 */
#include<stdlib.h>
#include<stdio.h>

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
