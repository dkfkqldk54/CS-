#include <stdio.h>

int main(void) {
    int days, start, end;
    
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    
    printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
    scanf("%d", &start);
    
    for (end = 1 ; start > 1 ; start -= 1, end += 1) {
        printf("   ");
    }
    
    for (int day = 1 ; days > 0 ; day += 1, days -= 1 ) {
        printf("%3d", day);
        end += 1;
        if (end == 8) {
            printf("\n");
            end = 1;
        }
    }

    return 0;
}
