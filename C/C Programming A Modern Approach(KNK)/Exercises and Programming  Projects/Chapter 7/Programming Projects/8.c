#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    int hour, minute, total_minute, total1, total2, total3, total4, total5, total6, total7, total8, d_hour, d_min, d_am, a_hour, a_min, a_am;
    char aorp;
    
    printf("Enter a time: ");
    scanf("%d:%d", &hour, &minute);
    scanf(" %c", &aorp);
    aorp = toupper(aorp);
    if (aorp == 'P') {
        total_minute = 60 * 12 + hour * 60 + minute;
    } else {
        total_minute = hour * 60 + minute;
    }
    
    total1 = 8 * 60 + 0;
    total2 = 9 * 60 + 43;
    total3 = 11 * 60 + 19;
    total4 = 12 * 60 + 47;
    total5 = 14 * 60 + 0;
    total6 = 15 * 60 + 45;
    total7 = 19 * 60 + 0;
    total8 = 21 * 60 + 45;
    
    if (total_minute < total1) {
        if ((total1 - total_minute) < ((1440 - total8) + total_minute)) {
            printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.");
        } else {
            printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.");
        }
    }   else if (total_minute < total2) {
            if (total_minute - total1 < total2 - total_minute) {
                printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.");
            } else {
                printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.");
            }
    }   else if (total_minute < total3) {
            if (total_minute - total2 < total3 - total_minute) {
                printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.");
            } else {
                printf("Closet departure time is 11:19 a.m., arriving at 1:31 p.m.");
            }
    }   else if (total_minute < total4) {
            if (total_minute - total3 < total4 - total_minute) {
                printf("Closet departure time is 11:19 a.m., arriving at 1:31 p.m.");
            } else {
                printf("Closet departure time is 12:47 p.m., arriving at 3:00 p.m.");
            }
    }   else if (total_minute < total5) {
            if (total_minute - total4 < total5 - total_minute) {
                printf("Closet departure time is 12:47 p.m., arriving at 3:00 p.m.");
            } else {
                printf("Closet departure time is 2:00 p.m., arriving at 4:08 p.m.");
            }
    }   else if (total_minute < total6) {
            if (total_minute - total5 < total4 - total_minute) {
                printf("Closet departure time is 2:00 p.m., arriving at 4:08 p.m.");
            } else {
                printf("Closet departure time is 3:45 p.m., arriving at 5:55 p.m.");
            }
    }   else if (total_minute < total7) {
            if (total_minute - total6 < total5 - total_minute) {
                printf("Closet departure time is 3:45 p.m., arriving at 5:55 p.m.");
            } else {
                printf("Closet departure time is 7:00 p.m., arriving at 9:20 p.m.");
            }
    }   else if (total_minute < total8) {
            if (total_minute - total7 < total6 - total_minute) {
                printf("Closet departure time is 7:00 p.m., arriving at 9:20 p.m.");
            } else {
                printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.");
            }
    }   else {
        printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }
    
    return 0;
}
