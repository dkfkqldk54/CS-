#include <stdio.h>

int ten_power(int k)
{
  if (k == 0) return 1;
  return ten_power(k-1) * 10;
}

int digit(n, k)
{
  if (k == 1) return n % 10;
  return digit(n/10, k-1);
}

int main(void) {

  int n, k;

  printf("Enter number: ");
  scanf("%d", &n);
  printf("Enter k: ");
  scanf("%d", &k);
  printf("The kth digit in n: %d", n<ten_power(k-1)?0:digit(n, k));

  return 0;
}
