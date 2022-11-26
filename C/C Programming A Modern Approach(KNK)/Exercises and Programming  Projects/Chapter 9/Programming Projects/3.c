#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 10
#define ALPHABET_SIZE 26

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {

  char walk[SIZE][SIZE];

  generate_random_walk(walk);
  print_array(walk);

  return 0;
}

void generate_random_walk(char walk[10][10])
{
  int i, j, cnt, random_number, checker;
  
  srand((unsigned) time(NULL));

  for (i=0; i<SIZE; i++) {
    for (j=0; j<SIZE; j++) {
      walk[i][j] = '.';
    }
  }     

  i=0; j=0; cnt=0;
  walk[i][j] = 'A';
  cnt++;

  while (cnt < ALPHABET_SIZE) {
    checker = false;
    if (i>0 && walk[i-1][j]=='.') checker = true;
    if (i<SIZE-1 && walk[i+1][j]=='.') checker = true;
    if (j>0 && walk[i][j-1]=='.') checker = true;
    if (j<SIZE-1 && walk[i][j+1]=='.') checker = true;
    if (checker == false) break;

    random_number = rand() % 4;

    if (random_number == 0 && j>0 && walk[i][j-1]=='.') {
      --j;
      walk[i][j]='A'+cnt;
      cnt++;
    } else if (random_number == 1 && j<SIZE-1 && walk[i][j+1]=='.') {
      ++j;
      walk[i][j]='A'+cnt;
      cnt++;
    } else if (random_number == 2 && i>0 && walk[i-1][j]=='.') {
      --i;
      walk[i][j]='A'+cnt;
      cnt++;
    } else if (random_number == 3 && i<SIZE-1 && walk[i+1][j]=='.') {
      ++i;
      walk[i][j]='A'+cnt;
      cnt++;
    }
  }
}

void print_array(char walk[10][10])
{
  int i, j;

  for (i=0; i<SIZE; i++) {
    for (j=0; j<SIZE; j++) {
      printf("%c ", walk[i][j]);
    }
    printf("\n");
  }
}
