#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int main(void) {

  int wins = 0, loses = 0;
  char again;
  
  srand( (unsigned) time(NULL) );

  while(1) {
    if (play_game()) 
      wins++;
    else
      loses++;

    printf("\nplay again? ");
    scanf(" %c", &again);
    if (again != 'Y' && again != 'y') 
      break;
  };

  printf("\nWins: %d Loses: %d", wins, loses);

  return 0;
}

int roll_dice(void)
{
  return rand() % 6 + rand() % 6 + 2;
}

bool play_game(void)
{
  int num=roll_dice(), point;

  printf("\nYou rolled: %d\n", num);

  if (num == 7 || num == 11) {
    printf("You win!\n");
    return true;
  }
  
  if (num == 2 || num == 3 || num == 12) {
    printf("You lose!\n");
    return false;
  } 
  
  printf("Your point is %d\n", point=num);

  while ((num = roll_dice())) {  
    printf("You rolled: %d\n", num);
    if (num == point) {
      printf("You win!\n");
      return true;
    } else if (num == 7) {
      printf("You lose!\n");
      return false;
    }
  }
}
