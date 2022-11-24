<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

<pre>
#include <stdio.h>

int main(void) {
  double triangle_area(double base, double height)
  {
    double product;
    product = base * height;
    return product / 2;
  }
}
</pre>

**:pushpin: 2번**

<pre>
int check(int x, int y, int n)
{
  return (0<=x && x<=(n-1) && 0<=y && y <= (n-1)) ? 1 : 0;
}
</pre>

**:pushpin: 3번**

<pre>
int gcd(int m, int n)
{
  return n==0 ? m : gcd(n, m%n);
}
</pre>

**:pushpin: 4번**

<pre>
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
</pre>

**:pushpin: 5번**

#include <stdio.h>

int num_digits(int n)
{
  int digit_number = n, how_many = 0;
  
  while (digit_number!=0) {
    how_many++;
    digit_number /= 10;
  }

  return how_many;
}

int main(void) {

  int n;

  printf("Enter number: ");
  scanf("%d", &n);
  printf("The number of digits in n: %d", num_digits(n));

  return 0;
}

**:pushpin: 6번**

<pre>
#include <stdio.h>

int ten_power(int k)
{
  if (k == 0) return 1;
  return ten_power(k-1) * 10;
}

int digit(n, k)
{
  if (k == 1) return n % 10;
  return digit(n/10, k-1);
}

int main(void) {

  int n, k;

  printf("Enter number: ");
  scanf("%d", &n);
  printf("Enter k: ");
  scanf("%d", &k);
  printf("The kth digit in n: %d", n<ten_power(k-1)?0:digit(n, k));

  return 0;
}
</pre>

**:pushpin: 7번**

모두 legal.

**:pushpin: 8번**

**:pushpin: 9번**

**:pushpin: 10번**

**:pushpin: 11번**

**:pushpin: 12번**

**:pushpin: 13번**

**:pushpin: 14번**

**:pushpin: 15번**

**:pushpin: 16번**

**:pushpin: 17번**

**:pushpin: 18번**

**:pushpin: 19번**
