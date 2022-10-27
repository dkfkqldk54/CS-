#include <stdio.h>

int main(void) {
    int digits, reversed_digits;
    
    printf("Enter an any-digit number: ");
    scanf("%d", &digits);
    
    reversed_digits = 0;
    
    while (digits) {
        reversed_digits *= 10;
        reversed_digits += (digits % 10);
        digits /= 10;
    }

    printf("The reversal is: %d", reversed_digits);

    return 0;
}
