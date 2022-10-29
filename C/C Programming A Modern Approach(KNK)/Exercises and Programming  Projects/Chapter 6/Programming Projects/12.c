#include <stdio.h>

int main(void) {
    int i, fac;
    float e, small_number;
    
    printf("Enter a small number: ");
    scanf("%f", & small_number);

    i = 1; fac = 1; e = 1;
    while ((1.0f/fac) > small_number) {
      e += (1.0f/fac);
      i += 1; fac *= i;
    }

    e +=  (1.0f/fac);
    
    printf("approximates of e is %f", e);

    return 0;
}
