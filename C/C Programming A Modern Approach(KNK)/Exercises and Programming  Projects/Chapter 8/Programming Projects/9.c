#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 10
#define ALPHABET_SIZE 26

int main(void) {

  int i, j, cnt, random_number, checker;
  char map[SIZE][SIZE];

  srand((unsigned) time(NULL));

  for (i=0; i<SIZE; i++) {
    for (j=0; j<SIZE; j++) {
      map[i][j] = '.';
    }
  }

  i=0; j=0; cnt=0;

  map[i][j] = 'A';
  cnt++;
  
  while (cnt < ALPHABET_SIZE) {
    checker = false;
    if (i>0 && map[i-1][j]=='.') checker = true;
    if (i<SIZE-1 && map[i+1][j]=='.') checker = true;
    if (j>0 && map[i][j-1]=='.') checker = true;
    if (j<SIZE-1 && map[i][j+1]=='.') checker = true;
    if (checker == false) break;

    random_number = rand() % 4;

    if (random_number == 0 && j>0 && map[i][j-1]=='.') {
      --j;
      map[i][j]='A'+cnt;
      cnt++;
    } else if (random_number == 1 && j<SIZE-1 && map[i][j+1]=='.') {
      ++j;
      map[i][j]='A'+cnt;
      cnt++;
    } else if (random_number == 2 && i>0 && map[i-1][j]=='.') {
      --i;
      map[i][j]='A'+cnt;
      cnt++;
    } else if (random_number == 3 && i<SIZE-1 && map[i+1][j]=='.') {
      ++i;
      map[i][j]='A'+cnt;
      cnt++;
    }
  }

  i=0; j=0;

  for (i=0; i<SIZE; i++) {
    for (j=0; j<SIZE; j++) {
      printf("%c ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}
