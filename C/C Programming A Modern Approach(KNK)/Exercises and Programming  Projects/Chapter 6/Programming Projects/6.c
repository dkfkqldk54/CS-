#include <stdio.h>

int main(void) {
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    i = 2;
    while (i * i <= n) {
        printf("%d\n", i*i);
        i += 2;
    }

    return 0;
}
