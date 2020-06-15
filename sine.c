/**
 * This program uses a Taylor Series to compute a value
 * of sine.
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * This function computes the factorial function,
 * n! = n * (n-1) * (n-2) ... 3 * 2 * 1
 */
long factorial(int n);

int main(int argc, char **argv) {

  if(argc != 3) {
    fprintf(stderr, "Usage: %s x n\n", argv[0]);
    exit(1);
  }

  double x = atof(argv[1]);
  int n = atoi(argv[2]);

  double result = 0.0;

  //TODO: compute sin(x) using a taylor series out to n terms


  printf("sin(%f) = %f\n", x, result);

  return 0;
}

long factorial(int n) {
  long result = 1, i;
  for(i=2; i<=n; i++) {
    result *= i;
  }
  return result;
}