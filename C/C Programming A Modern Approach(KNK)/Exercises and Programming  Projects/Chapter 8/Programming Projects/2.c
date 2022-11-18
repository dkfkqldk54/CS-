#include <stdio.h>

int main(void) {

  int digit_seen[10] = {0}, digit, i;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n>0) {
    digit = n % 10;
    digit_seen[digit] += 1;
    n /= 10;
  }

  printf("Digit:              ");
  
  for (i=0; i<10; i++) {
    printf(" %d", i);
  }

  printf("\n");

  printf("Occurrences:        ");

  for (i=0; i<10; i++) {
    printf(" %d", digit_seen[i]);
  }
  
  return 0;
}
