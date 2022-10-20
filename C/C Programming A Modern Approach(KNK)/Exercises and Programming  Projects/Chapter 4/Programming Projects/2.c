#include <stdio.h>

int main(void) {
    int digits, reversed_digits;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &digits);
    
    reversed_digits = (digits % 10) * 100 + ((digits / 10) % 10) * 10 + digits / 100;
    printf("The reversal is: %d", reversed_digits);

    return 0;
}
