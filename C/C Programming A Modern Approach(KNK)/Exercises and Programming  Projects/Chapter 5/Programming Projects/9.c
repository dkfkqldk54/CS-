#include <stdio.h>

int main(void) {
    int m1, d1, y11, y12, m2, d2, y21, y22, first_win, same_date;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%1d%1d", &m1, &d1, &y11, &y12);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%1d%1d", &m2, &d2, &y21, &y22);
    
    same_date = 0;
    
    if ((y11*10+y12)<(y21*10+y22)) {
        first_win = 1;
    } else if ((y11*10+y12)>(y21*10+y22)) {
        first_win = 0;
    } else if (m1<m2) {
        first_win = 1;
    } else if (m1>m2) {
        first_win = 0;
    } else if (d1<d2) {
        first_win = 1;
    } else if (d1>d2) {
        first_win = 0;
    } else {
        same_date = 1;
    }
    
    if (same_date) {
        printf("Same Date");
    } else if (first_win) {
        printf("%d/%d/%1d%1d is earlier than %d/%d/%1d%1d", m1, d1, y11, y12, m2, d2, y21, y22);
    } else {
        printf("%d/%d/%1d%1d is earlier than %d/%d/%1d%1d", m2, d2, y21, y22, m1, d1, y11, y12);
    }

    return 0;
}
