#include <stdio.h>

int main(void) {

  int matrix[5][5], row_total, column_total, i, j;

  for (i=0; i<5; i++) {
    printf("Enter row %d: ", i+1);
    for (j=0; j<5; j++) {
      scanf(" %d", &matrix[i][j]);
    }
  }

  printf("\nRow totals:");
  for (i=0; i<5; i++) {
    row_total = 0;
    for (j=0; j<5; j++) {
      row_total += matrix[i][j];
    }
    printf(" %d", row_total);
  }

  printf("\nColumn totals:");
  for (j=0; j<5; j++) {
    column_total = 0;
    for (i=0; i<5; i++) {
      column_total += matrix[i][j];
    }
    printf(" %d", column_total);
  }
  return 0;
}
