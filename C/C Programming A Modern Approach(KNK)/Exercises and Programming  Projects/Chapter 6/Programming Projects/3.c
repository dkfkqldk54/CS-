#include <stdio.h>

int main(void) {
  int n, m, num, den, re;
    
  printf("Enter a fraction: ");
  scanf("%d/%d", &n, &m);

  num = n; den = m;
  
  while (m!=0) {
    re = n % m;
    n = m; m = re;
  }
    
  printf("In lowest terms: %d/%d", (num/n), (den/n));

  return 0;
}
