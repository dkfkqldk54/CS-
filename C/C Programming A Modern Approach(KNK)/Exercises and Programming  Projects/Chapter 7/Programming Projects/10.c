#include <stdio.h>
#include <ctype.h>

int main(void) {
    
  int cnt;
  char alphabet;
    
  printf("Enter a sentence: ");

  cnt = 0;
  
  do {
    alphabet = getchar();
    alphabet = toupper(alphabet);
    if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
      cnt += 1;
    }
  } while (alphabet != '\n');

  printf("Your sentence contains %d vowels.", cnt);
    
    return 0;
}
