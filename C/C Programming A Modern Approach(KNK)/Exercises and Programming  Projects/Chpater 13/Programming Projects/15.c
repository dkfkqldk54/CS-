#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(double i);
double pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

int top = 0;
double stack[STACK_SIZE] = {0.0};

int main(void) {
  char expression[STACK_SIZE];

  for (;;) {
    printf("Enter an RPN expression: ");
    fgets(expression, sizeof(expression), stdin);
    printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
    make_empty();
  }
  
  return 0;
}

int evaluate_RPN_expression(const char *expression)
{
  double com1, com2, res;
  char ch;
  
  while (*expression != '\n') {
      if (isdigit(*expression)) {
        double value = *expression - '0';
        expression++;
        while (isdigit(*expression)) {
          value = value * 10 + (*expression - '0');
          expression++;
        }
        push(value);
      } else {
        switch(*expression) {
          case '*':
            com1 = pop();
            com2 = pop();
            push(com2 * com1);
            break;
          case '/':
            com1 = pop();
            com2 = pop();
            push(com2 / com1);
            break;
          case '+':
            com1 = pop();
            com2 = pop();
            push(com2 + com1);
            break;
          case '-':
            com1 = pop();
            com2 = pop();
            push(com2 - com1);
            break;
          case '=': case ' ':
            break;
          default:
            exit(EXIT_SUCCESS);
        }
      }
    expression++;
    }
  return pop();
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(double i)
{
  if (is_full())
    stack_overflow();
  else
    stack[top++] = i;
}

double pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return stack[--top];
}

void stack_overflow(void)
{
  printf("Expression is too complex");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Not enough operand in expression");
  exit(EXIT_FAILURE);
}
