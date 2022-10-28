#include <stdio.h>

int main(void)
{
    int dollars, bills_20, bills_10, bills_5, bills_1;
    
    printf("Enter a dollar amount: ");
    scanf("%d", & dollars);
    
    bills_20 = dollars / 20;
    dollars = dollars - bills_20 * 20;
    bills_10 = dollars / 10;
    dollars = dollars - bills_10 * 10;
    bills_5 = dollars / 5;
    dollars = dollars - bills_5 * 5;
    bills_1 = dollars;
    
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);
    
    return 0;
}
