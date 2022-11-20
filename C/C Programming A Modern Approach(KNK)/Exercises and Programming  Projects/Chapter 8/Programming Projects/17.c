#include <stdio.h>

int main(void) {

  int n, i, j, i_point, j_point, cnt;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  int square[n][n];

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      square[i][j] = 0;
    }
  }
  
  i = n*n; j = (n-1) / 2;

  for (cnt = 1; cnt <= n*n; cnt++) {
    i_point = i%n;
    j_point = j%n;
    square[i_point][j_point] = cnt;
    i--; j++;
    if (cnt % n == 0) {
      i+=2; j--;
    }
  }

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      printf("%4d", square[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
