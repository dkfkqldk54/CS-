#include <stdio.h>

#define MAX_LEN 100

int main() {

  char message[MAX_LEN];
  char a, *p = message;
  
  printf("Enter a message: ");
  while ((a = getchar()) != '\n' && p < message + MAX_LEN)
    *p++ = a;

  printf("Reversal is: ");
  while (p > message) {
    putchar(*--p);
  }

  printf("\n");
    
  return 0;
}
