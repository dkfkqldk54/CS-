#include <stdio.h>

int main(void) {
    int i, n, squared;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    
    for (i=1; i<=n; i++)
      printf("%20d%20d\n", i, i*i);
    
    return 0;
}

/* short int는 182, int는 46341, long은 303700500임 */
