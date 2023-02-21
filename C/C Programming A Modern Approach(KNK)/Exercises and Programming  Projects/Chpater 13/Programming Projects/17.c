#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

bool is_palindrome(const char *message);

int main() {

  char message[MAX_LEN];
  char c;
  int i = 0;
  
  printf("Enter a message: ");
  while ((c = getchar()) != '\n')
    if (isalpha(c)) 
      message[i++] = tolower(c);
  message[i] = '\0';

  if (is_palindrome(message)) 
    printf("Palindrome");
  else
    printf("Not a palindrome");
    
  return 0;
}

bool is_palindrome(const char *message)
{
  int len = strlen(message);
  int i, j = len -1;

  for (i = 0; i < len; i++)
    if (message[i] != message[j--])
      return false;

  return true;
}

can be any improvement in this code?
