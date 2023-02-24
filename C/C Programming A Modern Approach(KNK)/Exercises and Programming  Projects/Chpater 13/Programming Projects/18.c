#include <stdio.h>

int main() {
  
  char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int mm, dd, yyyy;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yyyy);

  printf("You entered the date %s %d, %d", month[mm-1], dd, yyyy);
  
  return 0;
}
  
