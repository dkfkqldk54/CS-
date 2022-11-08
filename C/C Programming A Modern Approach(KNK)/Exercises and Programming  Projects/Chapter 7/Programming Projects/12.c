#include <stdio.h>

int main(void) {
  float result, number_now;
  char operator_now;

  printf("Enter an expression: ");
  scanf(" %f", &result);

  do {
    operator_now = getchar();
    if (operator_now != '\n') {
      scanf("%f", &number_now);
    }
    switch (operator_now) {
      case '+':
        result += number_now;
        break;
      case '-':
        result -= number_now;
        break;
      case '*':
        result *= number_now;
        break;
      case '/':
        result /= number_now;
        break;
    }
  } while (operator_now != '\n');

  printf("Value of expression: %.1f", result);
  return 0;
}
  
