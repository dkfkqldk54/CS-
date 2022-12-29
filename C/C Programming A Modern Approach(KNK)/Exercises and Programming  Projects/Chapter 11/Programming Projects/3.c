#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
  int num, den, re_num, re_den, re;
    
  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &den);

  reduce(num, den, &re_num, &re_den);

  printf("In lowest terms: %d/%d", re_num, re_den);

  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  int n, m, re;
  n = numerator;
  m = denominator;

  while (m != 0) {
    re = n % m;
    n = m; m = re;
  }

  *reduced_numerator = numerator / n;
  *reduced_denominator = denominator / n;
}
