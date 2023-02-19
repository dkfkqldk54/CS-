#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int compute_vowel_count(const char *sentence);

int main(void) {
  char sentence[MAX_LEN];
    
  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));
    
  return 0;
}

int compute_vowel_count(const char *sentence)
{
  char vowel[] = "AEIOU";
  int cnt = 0;

  while (*sentence) {
    for (int i = 0; vowel[i]; i++)
      if (toupper(*sentence) == vowel[i]) cnt++;
    sentence++;
  }
    
  return cnt;
}
