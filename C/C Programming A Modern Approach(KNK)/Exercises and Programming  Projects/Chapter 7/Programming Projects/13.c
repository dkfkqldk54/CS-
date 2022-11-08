#include <stdio.h>

int main(void) {
  float result, cnt, word;
  char alphabet;

  printf("Enter a sentence: ");

  cnt = 0.0f; word = 0.0f;

  do {
    alphabet = getchar();
    cnt++;
    if (alphabet == ' ') {
      word++;
      cnt--;
    }
  } while (alphabet != '.');
  word++;

  result = cnt / word;

  printf("Average word length: %.1f", result);
  return 0;
}
