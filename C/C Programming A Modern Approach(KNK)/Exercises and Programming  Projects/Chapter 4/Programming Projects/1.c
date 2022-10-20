#include <stdio.h>

int main(void) {
    int digits, reversed_digits;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &digits);
    
    reversed_digits = (digits % 10) * 10 + (digits / 10);
    printf("The reversal is: %d", reversed_digits);

    return 0;
}
