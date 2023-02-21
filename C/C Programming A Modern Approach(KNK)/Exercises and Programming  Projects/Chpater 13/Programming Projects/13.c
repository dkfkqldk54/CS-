#include <stdio.h>

#define MAX_LEN 100

void encrypt(char *message, int shift);

int main(void) {

  char message[MAX_LEN];
  int shift;

  printf("Enter message to be encrypted: ");
  fgets(message, sizeof(message), stdin);

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");
  encrypt(message, shift);
  
  return 0;
}

void encrypt(char *message, int shift)
{
  while (*message) {
    if (*message >= 'a' && *message <= 'z') {
    *message = (*message - 'a' + shift) % 26 + 'a';
  } else if (*message >= 'A' && *message <= 'Z') {
    *message = (*message - 'A' + shift) % 26 + 'A';
  }
  putchar(*message++);
  }
}
