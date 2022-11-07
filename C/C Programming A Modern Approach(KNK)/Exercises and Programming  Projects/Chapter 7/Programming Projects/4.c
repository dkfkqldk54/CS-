#include <stdio.h>

int main(void) {
    char alphabet;

    printf("Enter phone number: ");
    do {
      alphabet = getchar();
      if (alphabet == 'A' || alphabet == 'B' || alphabet == 'C') printf("2");
      else if (alphabet == 'D' || alphabet == 'E' || alphabet == 'F') printf("3");
      else if (alphabet == 'G' || alphabet == 'H' || alphabet == 'I') printf("4");
      else if (alphabet == 'J' || alphabet == 'K' || alphabet == 'L') printf("5");
      else if (alphabet == 'M' || alphabet == 'N' || alphabet == 'O') printf("6");
      else if (alphabet == 'P' || alphabet == 'R' || alphabet == 'S') printf("7");
      else if (alphabet == 'T' || alphabet == 'U' || alphabet == 'V') printf("8");
      else if (alphabet == 'W' || alphabet == 'X' || alphabet == 'Y') printf("9");
      else if (alphabet == '-') printf("-");
      else printf("%c", alphabet);
      } while (alphabet != '\n');
    
    return 0;
}
