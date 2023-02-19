#include <stdio.h>

#define MAX_LEN 100

double compute_average_word_length(const char *sentence);

int main(void) {
  char sentence[MAX_LEN];

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  
  printf("Average word length: %.1f", compute_average_word_length(sentence));
  return 0;
}

double compute_average_word_length(const char *sentence)
{

  double char_cnt = 0.0f, word_cnt = 0.0f, res;
  
  while (*sentence) {
    if (*sentence == ' ' || *sentence == '\n') word_cnt++;
    else char_cnt++;
    sentence++;
  }

  res = char_cnt / word_cnt;
  return res;
}
