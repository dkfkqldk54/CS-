#include <stdio.h>

int main(void) {

  int cnt, i;
  char number[30] = {0}, num;

  printf("Enter phone number: ");

  cnt = 0;
  while ((num = getchar()) != '\n') {
    number[cnt] = num;
    cnt++;
  }

  printf("In numeric form: ");

  for (i=0; i<cnt; i++) {
    switch(number[i]) {
      case 'A': case 'B': case 'C':
        printf("2");
        break;
      case 'D': case 'E': case 'F':
        printf("3");
        break;
      case 'G': case 'H': case 'I':
        printf("4");
        break;
      case 'J': case 'K': case 'L':
        printf("5");
        break;
      case 'M': case 'N': case 'O':
        printf("6");
        break;
      case 'P': case 'R': case 'S':
        printf("7");
        break;
      case 'T': case 'U': case 'V':
        printf("8");
        break;
      case 'W': case 'X': case 'Y':
        printf("2");
        break;
      default:
        printf("%c", number[i]);
        break;
    }
  }
  
  return 0;
}
