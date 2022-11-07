#include <stdio.h>

int main(void) {
    int i, n, cnt;
    char get_away_lf;
  
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    get_away_lf = getchar();

    i = 1;
    while (i<=n) {
      printf("%20d%20d\n", i, i*i);
      if (i % 24 == 0) {
        do {
          printf("Press Enter to continue...");
        } while (getchar() != '\n');
        cnt = 0;
      }
      i++;
    }
      
    
    return 0;
}
  
