/* stack.h */
#ifndef STACK_H
#define STACK_H

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(double i);
double pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif


/* stack.c */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

int top = 0;
double stack[STACK_SIZE] = {0.0};

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

/* clac.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "stack.h"

int main(void) {
  double com1, com2, res;
  char ch;

  for (;;) {
    printf("Enter an RPN expression: ");
    while ((ch = getchar()) != '\n') {
      if (isdigit(ch)) {
        push((double) ch - '0');
      } else {
        switch(ch) {
          case '*':
            com1 = pop();
            com2 = pop();
            res = com2 * com1;
            push(res);
            break;
          case '/':
            com1 = pop();
            com2 = pop();
            res = com2 / com1;
            push(res);
            break;
          case '+':
            com1 = pop();
            com2 = pop();
            res = com2 + com1;
            push(res);
            break;
          case '-':
            com1 = pop();
            com2 = pop();
            res = com2 - com1;
            push(res);
            break;
          case '=': case ' ':
            break;
          default:
            exit(EXIT_SUCCESS);
        }
      }
    }

    printf("Value of expression: %.0lf\n", pop());
    make_empty();
  }
  
  return 0;
}
