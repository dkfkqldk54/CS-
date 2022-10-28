#include <stdio.h>

int main(void)
{
    float x, answer;
    
    printf("Enter value of x");
    scanf("%f", &x);
    
    answer = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("answer is: %.2f", answer);
    
    return 0;
}
