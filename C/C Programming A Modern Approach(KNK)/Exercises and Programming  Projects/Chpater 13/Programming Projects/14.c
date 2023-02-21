#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LEN 100

bool are_anagrams(const char *word1, const char *word2);

int main(void) {

  int frequency[26]={0};
  char word1[MAX_LEN], word2[MAX_LEN];

  printf("Enter first word: ");
  fgets(word1, sizeof(word1), stdin);

  printf("Enter second word: ");
  fgets(word2, sizeof(word2), stdin);

  if (are_anagrams(word1, word2))
    printf("The words are anagrams.");
  else
    printf("The words are not anagrams.");
  
  return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
  int frequency[26]={0};
  
  while (*word1 != '\0') {
    if (isalpha(*word1))
      frequency[tolower(*word1)-'a']++;
    word1++;
  }
    
  while (*word2 != '\0') {
    if (isalpha(*word2))
      frequency[tolower(*word2)-'a']--;
    word2++;
  }
    
  for (int i = 0; i < 26; i++)
    if (frequency[i] != 0) return false;

  return true;
}
