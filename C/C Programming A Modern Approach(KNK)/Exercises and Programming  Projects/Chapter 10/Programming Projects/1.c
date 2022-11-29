#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

bool is_empty(void);
bool is_full(void);
void push(char new_char);
char paren_pop(void);
char brace_pop(void);

int main(void)
{
  char new_char;

  printf("Enter parentheses and/or braces: ");
  while((new_char = getchar()) != '\n') {
    if (new_char == '(' || new_char == '{') {
      push(new_char);
    }  else if (new_char == ')') {
      paren_pop();
    }  else if (new_char == '}') {
      brace_pop();
    }  else {
      printf("Parentheses/braces are not nested properly\n");
      return 0;
    }
  }

  if (is_empty()) 
    printf("Parentehses/braces are nested properly");
  else
    printf("Parentheses/braces are not nested properly\n");
  

  return 0;
}


bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char new_char)
{
  if (is_full()){
    printf("Stack Overflow\n");
    exit(EXIT_SUCCESS);
  } else {
    contents[top++] = new_char;
  }
}

char paren_pop(void)
{
  if (is_empty()) {
    printf("Parentheses/braces are not nested properly\n");
    exit(EXIT_SUCCESS);
  } else {
    if (contents[top-1] == '(')
      return contents[--top];
    else {
      printf("Parentheses/braces are not nested properly\n");
      exit(EXIT_SUCCESS);
    }
  }
}

char brace_pop(void)
{
  if (is_empty()) {
    printf("Parentheses/braces are not nested properly\n");
    exit(EXIT_SUCCESS);
  } else {
    if (contents[top-1] == '{') {
      return contents[--top];
    }
    else {
      printf("Parentheses/braces are not nested properly\n");
      exit(EXIT_SUCCESS);
    }
  }
}
