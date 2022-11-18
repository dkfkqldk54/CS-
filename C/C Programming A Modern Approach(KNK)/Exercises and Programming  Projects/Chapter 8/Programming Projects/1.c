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

  printf("Repeated digit(s): ");

  for (i=0; i<10; i++) {
    if (digit_seen[i] >= 2) {
      printf(" %d", i);
      }
  }
  
  return 0;
}
