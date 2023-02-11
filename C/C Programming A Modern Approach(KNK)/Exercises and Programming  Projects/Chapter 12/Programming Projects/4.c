#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LEN 100

int main() {

  char message[MAX_LEN];
  char c, *p1 = message, *p2 = message;
  bool palindrome = true;
  
  
  printf("Enter a message: ");
  while ((c = getchar()) != '\n' && p2 < message + MAX_LEN)
    if (isalpha(c)) *p2++ = tolower(c);
  
  --p2;
  
  while (p1 < p2)
    if (*p1++ != *p2--) palindrome = false;

  if (palindrome) 
    printf("Palindrome");
  else
    printf("Not a palindrome");
    
  return 0;
}
