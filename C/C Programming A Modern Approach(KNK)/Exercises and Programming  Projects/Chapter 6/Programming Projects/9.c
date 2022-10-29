#include <stdio.h>

int main (void)
{
    float amount_of_loan, interest_rate, monthly_payment;
    int number_of_payment;
    
    printf("Enter amount of loan: ");
    scanf("%f", & amount_of_loan);
    printf("Enter interest rate: ");
    scanf("%f", & interest_rate);
    printf("Enter number of payment: ");
    scanf("%d", & number_of_payment);    

    for (;number_of_payment > 0 ; number_of_payment -= 1){
        printf("Enter monthly payment: ");
        scanf("%f", & monthly_payment);
        amount_of_loan = amount_of_loan + amount_of_loan * ((interest_rate / 100) / 12) - monthly_payment;
        printf("Balance remaining after payment: %f\n", amount_of_loan);
    }

    return 0;
}
