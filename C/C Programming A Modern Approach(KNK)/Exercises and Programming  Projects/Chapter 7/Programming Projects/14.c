#include <stdio.h>
#include <math.h>

int main(void) {
  double x, old_y, new_y;
  
  printf("Enter a positive number: ");
  scanf("%lf", &x);

  old_y = 1.0;
  new_y = (old_y * old_y) / (2 * old_y);

  while (fabs(new_y - old_y) > 0.00001) {
    old_y = new_y;
    new_y = (old_y * old_y + x) / (2 * old_y);
  }

  printf("Square root: %.5lf", new_y);
  
  return 0;
}
