#include <stdio.h>

int main(void) {

  char spell, sentence[80];
  int cnt, shift, i;

  printf("Enter message to be encrypted: ");

  cnt = 0;
  while ( (spell = getchar()) != '\n') {
    sentence[cnt] = spell;
    cnt++;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");

  for (i=0; i<cnt; i++) {
    spell = sentence[i];
    if (spell >= 'a' && spell <= 'z') {
      spell = (spell - 'a' + shift) % 26 + 'a';
    } else if (spell >= 'A' && spell <= 'Z') {
      spell = (spell - 'A' + shift) % 26 + 'A';
    }
    putchar(spell);
  }
  
  return 0;
}
