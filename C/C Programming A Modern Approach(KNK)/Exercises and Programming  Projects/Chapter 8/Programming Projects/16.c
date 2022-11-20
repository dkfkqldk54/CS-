#include <stdio.h>
#include <ctype.h>

int main(void) {

  int frequency[26]={0}, i, pass;
  char spell;

  printf("Enter first word: ");

  while ((spell = getchar()) != '\n') {
    spell = tolower(spell);
    if (isalpha(spell))
      frequency[spell-'a']++;
  }

  printf("Enter second word: ");
  while ((spell=getchar()) != '\n') {
    spell = tolower(spell);
    if (isalpha(spell))
      frequency[spell-'a']--;
  }

  pass = 1;

  for (i=0; i<26; i++) {
    if (frequency[i] != 0) 
      pass = 0;
  }

  if (pass)
    printf("The words are anagrams.");
  else
    printf("The words are not anagrams.");
  
  return 0;
}
