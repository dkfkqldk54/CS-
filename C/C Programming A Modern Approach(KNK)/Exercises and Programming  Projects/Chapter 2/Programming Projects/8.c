#include <stdio.h>

int main (void)
{
    float amount_of_loan, interest_rate, monthly_payment, first_balance, second_balance, third_balance;
    
    printf("Enter amount of loan: ");
    scanf("%f", & amount_of_loan);
    printf("Enter interest rate: ");
    scanf("%f", & interest_rate);
    printf("Enter amount of loan: ");
    scanf("%f", & monthly_payment);
    
    first_balance = amount_of_loan + amount_of_loan * ((interest_rate / 100) / 12) - monthly_payment;
    second_balance = first_balance + first_balance * ((interest_rate / 100) / 12) - monthly_payment;
    third_balance = second_balance + second_balance * ((interest_rate / 100) / 12) - monthly_payment;
    
    printf("Balance remaining after first payment: %f\n", first_balance);
    printf("Balance remaining after second payment: %f\n", second_balance);
    printf("Balance remaining after third payment: %f\n", third_balance);
    
    return 0;
}
