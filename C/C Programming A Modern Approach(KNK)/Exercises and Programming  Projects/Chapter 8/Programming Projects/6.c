#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void) {

  char message[N], input_char, translated_char;
  int size, i;

  printf("Enter message: ");
  size = 0;

  while ((input_char = getchar()) != '\n') {
    message[size++] = input_char;
  }

  printf("In BIFF-speak: ");

  for (i=0; i<size; i++) {
    switch(translated_char = toupper(message[i])) {
      case 'A':
        putchar('4');
        break;
      case 'B':
        putchar('8');
        break;
      case 'E':
        putchar('3');
        break;
      case 'I':
        putchar('1');
        break;
      case 'O':
        putchar('0');
        break;
      case 'S':
        putchar('5');
        break;
      default:
        putchar(translated_char);
        break;
    }
  }

  printf("!!!!!!!!!!\n");
  return 0;
}
