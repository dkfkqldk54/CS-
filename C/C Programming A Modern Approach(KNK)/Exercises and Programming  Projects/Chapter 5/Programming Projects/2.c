#include <stdio.h>

int main(void) {
    
    int hours, minutes, am;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    
    if (hours == 24) {
        hours = 0;
        am = 1;
    } else if (hours >= 13) {
        hours -= 12;
        am = 0;
    } else if (hours == 12) {
        am  = 0;
    } else if (hours >= 0) {
        am = 1;
    }
    
    if (am)
    
    printf("Equivalent 12-hour time: %d:%d ", hours, minutes);
    if (am) printf("AM"); else printf("PM"); 
    
    return 0;
}
