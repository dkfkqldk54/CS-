#include <stdio.h>

int num_digits(int n)
{
  int digit_number = n, how_many = 0;
  
  while (digit_number!=0) {
    how_many++;
    digit_number /= 10;
  }

  return how_many;
}

int main(void) {

  int n;

  printf("Enter number: ");
  scanf("%d", &n);
  printf("The number of digits in n: %d", num_digits(n));

  return 0;
}
