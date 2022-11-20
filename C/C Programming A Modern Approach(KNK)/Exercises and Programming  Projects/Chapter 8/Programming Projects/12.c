#include <stdio.h>
#include <ctype.h>

int main(void) {

  char input_char;
  int index, sum = 0, scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");

  while ( (input_char = getchar()) != '\n') {
    input_char = tolower(input_char);
    index = input_char - 'a';
    sum += scrabble[index];
  }

  printf("Scrabble value: %d", sum);
  
  return 0;
}
