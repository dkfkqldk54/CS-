#include <stdio.h>

int main(void) {
    float num, largest;
    
    largest = 0.00f;
    
    while (1) {
        printf("Enter a number: ");
        scanf("%f", & num);
        if (largest < num) {
            largest = num;
        }
        if (num <= 0) break;
    }
    
    printf("The largest number entered was %.2f", largest);

    return 0;
}
