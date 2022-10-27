#include <stdio.h>

int main(void) {
    int i, n, odd, squared;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    odd = 3;
  
    for (i = 1, squared = 1; i <= n; ++i, odd += 2) {
        printf("%10d%10d\n", i, squared);
        squared += odd;
    }
    
    return 0;
}
