#include <stdio.h>

int main(void) {
    int m1, d1, y1, m2, d2, y2, first_win;
    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    
    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d%", &m2, &d2, &y2);
        
        if (m2 == 0 && d2 == 0 && y2 == 0) {
          break;
        }

        first_win = 0;
        if (y1<y2) {
            first_win = 1;
        } else if (y1>y2) {
            first_win = 0;
        } else if (m1<m2) {
            first_win = 1;
        } else if (m1>m2) {
            first_win = 0;
        } else if (d1<d2) {
            first_win = 1;
        } else if (d1>d2) {
            first_win = 0;
        }
        
        if (first_win == 0) {
            m1 = m2; d1 = d2; y1 = y2;
        }
    }

    printf("%d/%d/%.2d is the earliest date", m1, d1, y1);

    return 0;
}
