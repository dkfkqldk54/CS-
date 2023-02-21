#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void reverse(char *message);

int main() {
  char message[MAX_LEN];
  
  printf("Enter a message: ");
  fgets(message, sizeof(message), stdin);

  reverse(message);
  
  printf("Reversal is: ");
  printf("%s", message);
  return 0;
}

void reverse(char *message)
{
  char msg_reverse[MAX_LEN];
  int i, j = 0;

  int len = strcspn(message, "\n");

  for (i = len -1; i >= 0; i--)
    msg_reverse[j++] = message[i];
  msg_reverse[j] = '\0';
  strcpy(message, msg_reverse);
}
  
