#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 20

void reverse_name(char *name);

int main(void) {

  char name[MAX_LEN];
    
  printf("Enter a first and last name: ");
  fgets(name, sizeof(name), stdin);
  reverse_name(name);

  return 0;
}

void reverse_name(char *name)
{
  char first_name;

  while (*name == ' ') name++;
  first_name = *name++;
  while (*name && *name++ != ' ');
  while (*name && *name != '\n')
    putchar(*name++);

  printf(", %c.", first_name);
}
