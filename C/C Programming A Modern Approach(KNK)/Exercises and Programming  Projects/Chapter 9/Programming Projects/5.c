#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {

  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  char square[n][n];

  create_magic_square(n, square);
  print_magic_square(n, square);
  
  return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
  int i, j, cnt, i_point, j_point;
  
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      magic_square[i][j] = 0;
    }
  }
  
  i = n*n; j = (n-1) / 2;

  for (cnt = 1; cnt <= n*n; cnt++) {
    i_point = i%n;
    j_point = j%n;
    magic_square[i_point][j_point] = cnt;
    i--; j++;
    if (cnt % n == 0) {
      i+=2; j--;
    }
  }
}

void print_magic_square(int n, char magic_square[n][n])
{
  int i, j;
  
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      printf("%4d", magic_square[i][j]);
    }
    printf("\n");
  }
}
