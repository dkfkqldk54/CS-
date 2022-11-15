#include <stdio.h>
#include <math.h>

int main(void) {
  short i, num, fac;

  printf("Enter a positive integer: ");
  scanf("%hd", &num);

  fac = 1;

  for (i = 1; i <= num; i++) {
    fac *= i;
  }

  printf("Factorial of %hd: %hd", num, fac);
  
  return 0;
}
