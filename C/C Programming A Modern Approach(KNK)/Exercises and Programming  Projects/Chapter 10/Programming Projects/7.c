#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

const int segments[10][7] = {
{1, 1, 1, 1, 1, 1},
{0, 1, 1},
{1, 1, 0, 1, 1, 0, 1},
{1, 1, 1, 1, 0, 0, 1},
{0, 1, 1, 0, 0, 1, 1},
{1, 0, 1, 1, 0, 1, 1},
{1, 0, 1, 1, 1, 1, 1},
{1, 1, 1},
{1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 0, 1, 1}
};
char digits[4][MAX_DIGITS * 4];

int main(void) {
  int pos = 0;
  char ch;

  clear_digits_array();

  printf("Enter a number: ");
  
  while ((ch = getchar()) != '\n') {
    if (isdigit(ch))
      process_digit((int) ch - '0', pos++);
  }

  print_digits_array();
  return 0;
}

void clear_digits_array(void)
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < MAX_DIGITS*4; j++) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int digit, int position)
{
  if (segments[digit][0] == 1)
    digits[0][position * 4 + 1] = '-';
  if (segments[digit][1] == 1){
    digits[0][position * 4 + 2] = '|';
    digits[1][position * 4 + 2] = '|';
  }
  if (segments[digit][2] == 1) {
    digits[2][position * 4 + 2] = '|';
    digits[3][position * 4 + 2] = '|';
  } 
  if (segments[digit][3] == 1)
    digits[3][position * 4 + 1] = '_';
  if (segments[digit][4] == 1) {
    digits[2][position * 4] = '|';
    digits[3][position * 4] = '|';
  }
  if (segments[digit][5] == 1) {
    digits[0][position * 4] = '|';
    digits[1][position * 4] = '|';
  }
  if (segments[digit][6] == 1)
    digits[1][position * 4 + 1] = '_';
}

void print_digits_array(void)
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 * MAX_DIGITS; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}
