#include <stdio.h>
#include <ctype.h>

int main(void) {

  int cnt, i;
  char last_name[20], first_name, spell;

  printf("Enter a first and last name: ");
  scanf("%c", &first_name);

  while (getchar() != ' ');
  cnt = 0;
  while( (spell = getchar()) != '\n') {
    last_name[cnt] = spell;
    cnt++;
  }

  printf("You entered the name: ");
  for (i=0; i<cnt; i++) {
    printf("%c", last_name[i]);
  }

  printf(", %c.", first_name);
  
  return 0;
}
