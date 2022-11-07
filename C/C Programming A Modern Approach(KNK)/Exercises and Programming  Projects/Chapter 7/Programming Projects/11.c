#include <stdio.h>
#include <ctype.h>

int main(void) {
    
  char first_name_alphabet, alphabet;
    
  printf("Enter a first and last name: ");

  scanf(" %c", &first_name_alphabet);

  while (getchar() != ' ');

  scanf(" %c", &alphabet);

  do {
    putchar(alphabet);
    alphabet = getchar();
  } while (alphabet != ' ' && alphabet != '\n');

  printf(", %c.", first_name_alphabet);

  return 0;
}
