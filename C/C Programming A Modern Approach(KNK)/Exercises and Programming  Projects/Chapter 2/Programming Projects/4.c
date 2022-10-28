#include <stdio.h>

int main(void)
{
    float dollars, cents;
    
    printf("Enter an amount: ");
    scanf("%f", &dollars);
    
    cents = dollars * 1.05;
    
    printf("With tax added: $%.2f", cents);
    
    return 0;
}
