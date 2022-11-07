#include <stdio.h>
#include <ctype.h>

int main(void) {
    char alphabet;
    int cnt;

    cnt = 0;
  
    printf("Enter a word: ");
    do {
      alphabet = getchar();
      alphabet = toupper(alphabet);
      switch (alphabet) {
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
        cnt += 1;
        break;
        case 'D': case 'G':
        cnt += 2;
        break;
        case 'B': case 'C': case 'M': case 'P':
        cnt += 3;
        break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
        cnt += 4;
        break;
        case 'K':
        cnt += 5;
        break;
        case 'J': case 'X':
        cnt += 8;
        break;
        case 'Q': case 'Z':
        cnt += 10;
        break;
      }
    }while (alphabet != '\n');

    printf("Scrabble value: %d", cnt);
    
    return 0;
}
