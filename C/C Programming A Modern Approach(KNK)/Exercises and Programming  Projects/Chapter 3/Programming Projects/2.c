#include <stdio.h>

int main(void) 
{
    int item_number, mm, dd, yyyy;
    float unit_price;
    
    printf("Enter item number: \n");
    scanf("%d", &item_number);
    
    printf("Enter unit price: \n");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy): \n");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    
    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%-8d    $%7.2f    %.2d/%.2d/%.4d", item_number, unit_price, dd, mm, yyyy);
    
    return 0;
}
