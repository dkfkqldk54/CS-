#include <stdio.h>

int main(void) {
    int n, m, re;
    
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);
    
    while (m!=0) {
        re = n % m;
        n = m; m = re;
    }
    
    printf("Greatest common division: %d", n);

    return 0;
}
