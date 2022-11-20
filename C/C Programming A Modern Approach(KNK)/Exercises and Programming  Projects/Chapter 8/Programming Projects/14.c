#include <stdio.h>
#include <ctype.h>

int main(void) {

  char sentence[100] = {0}, input_char;
  int point[20], point_cnt, cnt, i, j;

  printf("Enter a sentence: ");

  cnt = 0; point_cnt = 0;

  while ( (input_char = getchar()) != '\n') {
    sentence[cnt] = input_char;
    if (input_char == ' ') {
      point[point_cnt] = cnt;
      point_cnt++;
    }
    cnt++;
  }

  point[point_cnt] = cnt;
  point_cnt++;

  printf("Reversal of sentence:");

  for (j=point[point_cnt-2]; j < point[point_cnt-1]-1; j++) {
    putchar(sentence[j]);
  }
  printf(" ");
  
  for (i=point_cnt - 3; i >= 0; i--) {
    for (j=point[i]+1; j < point[i+1]; j++) {
      putchar(sentence[j]);
    }
    putchar(sentence[point[i]]);
  }

  for (i=0; i<point[0]; i++) {
    putchar(sentence[i]);
  }
  
  putchar(sentence[point[point_cnt-1]-1]);
  
  return 0;
}
