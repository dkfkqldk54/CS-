#include <stdio.h>

int main(void) {
    int d1, d2;
    
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);
    
    printf("You entered the number  ");
    
    if (d1 == 1) {
        switch (d1*10 + d2) {
            case 10:
                printf("ten.");
                break;
            case 11:
                printf("eleven.");
                break;
            case 12:
                printf("twelve.");
                break;
            case 13:
                printf("thirteen.");
                break;
            case 14:
                printf("fourteen.");
                break;
            case 15:
                printf("fifteen.");
                break;
            case 16:
                printf("sixteen.");
                break;
            case 17:
                printf("seventeen.");
                break;
            case 18:
                printf("eightteen.");
                break;
            case 19:
                printf("nineteen.");
                break;
        }
    } else {
        switch (d1) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eightty");
                break;
            case 9:
                printf("ninety");
                break;
        }
        switch (d2) {
            case 0:
                printf(".");
                break;
            case 1:
                prinf("-one.");
                break;
            case 2:
                printf("-two.");
                break;
            case 3:
                printf("-three.");
                break;
            case 4:
                printf("-four.");
                break;
            case 5:
                printf("-five.");
                break;
            case 6:
                printf("-six.");
                break;
            case 7:
                printf("-seven.");
                break;
            case 8:
                printf("-eight.");
                break;
            case 9:
                printf("-nine.");
                break;
        }
    }
    
    return 0;
}
