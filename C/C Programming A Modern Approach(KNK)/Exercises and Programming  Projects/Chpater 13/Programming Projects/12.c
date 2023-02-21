#include <stdio.h>
#include <ctype.h>

#define MAX_WORD 30
#define MAX_LEN 20

int main(void) {
  int i = 0, j = 0;
  char c;
  char sentence[MAX_WORD][MAX_LEN + 1], terminating_char = 0;

  printf("Enter a sentence: ");
  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      sentence[i][j] = '\0';
      i++; j = 0;
    }
    else if (c == '?' || c == '!' || c == '.') {
      terminating_char = c;
      sentence[i][j] = '\0';
    }
    else if (j < MAX_LEN)
      sentence[i][j++] = c;
  }

  printf("Reversal of sentence: ");

  while (i>0)
    printf("%s ", sentence[i--]);
  printf("%s%c", sentence[i], terminating_char);

  return 0;
}
