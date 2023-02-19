#include <stdio.h>

int main(void) {
  int d1, d2;
  char *ten_num[] = {"ten.", "eleven.", "twelve.", "thirteen.", "fourteen.", "fifteen.", "sixteen.", "seventeen.", "eightteen.", "nineteen."};
  char *pre_num[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  char *post_num[] = {".", "-one.", "-two.", "-three.", "-four.", "-five.", "-six.", "-seven.", "-eight.", "-nine."};

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &d1, &d2);
    
  printf("You entered the number: ");
    
  if (d1 == 1) {
    printf("%s", ten_num[d2]);
  } else {
    printf("%s%s", pre_num[d1-2], post_num[d2]);
  }
  
  return 0;
}
