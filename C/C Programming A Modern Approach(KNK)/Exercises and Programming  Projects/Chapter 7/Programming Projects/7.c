#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom, gcd, i;
    char sign;
    
    printf("Enter two fractions separated by a sign you want: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);

    if (sign == '+') {
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
    } else if (sign == '-') {
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;  
    } else if (sign == '*') {
      result_num = num1 * num2;
      result_denom = denom1 * denom2;      
    } else if (sign == '/') {
      result_num = num1 * denom2;
      result_denom = denom1 * num2;
            
    }

    gcd = 1;

    if (result_num > result_denom) {
      for (i = 2; i <= result_denom; i++) {
        if (result_num % i == 0 && result_denom % i == 0) {
          gcd = i;
        }
      }
    } else {
      for (i = 2; i <= result_num; i++) {
        if (result_num % i == 0 && result_denom % i == 0) {
          gcd = i;
        }
      }
    }

    result_num /= gcd;
    result_denom /= gcd;

  printf("The result is %d/%d\n", result_num, result_denom); 
  
    return 0;
}
