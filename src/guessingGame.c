#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) 
{
  int n = 1000;
  srand(time(NULL));
  int number = (rand() % n) + 1;
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);

  while (1) {
    numGuesses++;
    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess < 1 || guess > n) {
      printf("Please enter a number between 1 and %d.\n", n);
    } else if (guess < number) {
      printf("Higher! Try again.\n");
    } else if (guess > number) {
      printf("Lower! Try again.\n");
    } else {
      printf("Congratulations, you found it! Number of guesses: %d\n", numGuesses);
      break;
    }
  }

  return 0;
}





