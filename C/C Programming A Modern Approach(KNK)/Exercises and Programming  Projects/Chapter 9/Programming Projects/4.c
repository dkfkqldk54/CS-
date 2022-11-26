#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {

  int cnt1[26]={0}, cnt2[26]={0};

  printf("Enter first word: ");
  read_word(cnt1);

  printf("Enter second word: ");
  read_word(cnt2);

  equal_array(cnt1, cnt2);
  return 0;
}

void read_word(int counts[26])
{
  char spell;
  
  while ((spell = getchar()) != '\n') {
    spell = tolower(spell);
    if (isalpha(spell))
      counts[spell-'a']++;
  }
}

bool equal_array(int counts1[26], int counts2[26])
{
  int i;
  bool pass=true;

  for (i=0; i<26; i++) {
    if (counts1[i] != counts2[i]) 
      pass = false;
  }

  if (pass)
    printf("The words are anagrams.");
  else
    printf("The words are not anagrams.");  
}
