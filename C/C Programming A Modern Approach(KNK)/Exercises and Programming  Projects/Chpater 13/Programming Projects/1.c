#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 20

bool get_first_animal(char *small, char *big);
bool get_animal(char *small, char *big);

int main() {
  char small[MAX_LEN+1], big[MAX_LEN+1];
  if (get_first_animal(small, big))
    while (get_animal(small, big));

  printf("\nSmallest word: %s\n", small);
  printf("Largest word: %s\n", big);
  
  return 0;
}

bool get_first_animal(char *small, char *big)
{
  char animal[MAX_LEN+1];
  
  printf("Enter word: ");
  scanf("%s", animal);

  strcpy(small, animal);
  strcpy(big, animal);

  if (strlen(animal) == 4)
    return false;

  return true;
}

bool get_animal(char *small, char *big)
{
  char animal[MAX_LEN+1];
  
  printf("Enter word: ");
  scanf("%s", animal);

  if (strcmp(small, animal) > 0)
    strcpy(small, animal);

  if (strcmp(big, animal) < 0)
    strcpy(big, animal);

  if (strlen(animal) == 4)
    return false;

  return true;
}
