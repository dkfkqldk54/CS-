#include <stdio.h>

int main(void) {
    
    int scale;
    
    printf("Enter the scale: ");
    scanf("%d", &scale);
    
    printf("Wind description: ");
    
    if (scale < 1) {
        printf("Calm");
    } else if (scale <= 3) {
        printf("Light air");
    } else if (scale <= 27) {
        printf("Breeze");
    } else if (scale <= 47) {
        printf("Gale");
    } else if (scale <= 63) {
        printf("Storm");
    } else {
        printf("Hurricane");
    }
    
    return 0;
}
