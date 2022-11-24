#include <stdio.h>

int day_of_year(int month, int day, int year)
{
int yun_year = 0, total_days = 0;
if ((year % 4 == 0 && (year % 100 != 0)) || (year % 400 == 0)) yun_year = 1;
  
switch(month-1) {
  case 11:
    total_days += 30;
  case 10:
    total_days += 31;
  case 9:
    total_days += 30;
  case 8:
    total_days += 31;
  case 7:
    total_days += 31;
  case 6:
    total_days += 30;
  case 5:
    total_days += 31;
  case 4:
    total_days += 30;
  case 3:
    total_days += 31;
  case 2:
    if (yun_year) total_days += 29;
    else total_days += 28;
  case 1:
    total_days += 31;
  default:
    total_days += day;
 } 
return total_days;
}

int main(void) {

  int month, day, year;

  printf("Enter month, day, year(mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("The total day is %d", day_of_year(month, day, year));

  return 0;
}
