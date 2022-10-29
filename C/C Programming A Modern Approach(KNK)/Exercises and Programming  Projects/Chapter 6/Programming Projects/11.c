#include <stdio.h>

int main(void) {
    int i, n, fac;
    float e;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    e = 1;
    for (i = 1, fac = 1; i <= n; i += 1, fac *= i ){
        e += (1.0f/fac);
    }
    
    printf("approximates of e is %f", e);

    return 0;
}
