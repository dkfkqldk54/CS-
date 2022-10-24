#include <stdio.h>

int main(void) {
    int grade;
    
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    printf("Letter grade: ");
    
    if (grade > 100 || grade < 0) grade = 110;
    
    grade /= 10;
    
    switch (grade) {
        case 11:
            printf("Error");
            break;
        case 10: case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    return 0;
}
