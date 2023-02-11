#include <stdio.h>

#define MAX_LEN 100

int main() {

  char chararr[MAX_LEN];
  char a, *p = chararr;
  
  printf("Enter a message: ");
  while ((a = getchar()) != '\n' && p < chararr + MAX_LEN)
    *p++ = a;

  printf("Reversal is: ");
  while (p > chararr) {
    putchar(*--p);
  }

  printf("\n");
    
  return 0;
}
