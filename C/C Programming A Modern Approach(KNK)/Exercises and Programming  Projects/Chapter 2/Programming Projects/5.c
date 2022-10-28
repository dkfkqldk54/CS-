#include <stdio.h>

int main(void)
{
    float x, answer;
    
    printf("Enter value of x");
    scanf("%f", &x);
    
    answer = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;
    printf("answer is: %.2f", answer);
    
    return 0;
}
