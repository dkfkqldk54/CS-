<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

a, g<br>

**:pushpin: 2번**

e, f, i<br>

**:pushpin: 3번**

함수 body에 있는 sum과 avg 앞에 *를 붙임.<br>

**:pushpin: 4번**

<pre>
void swap(int *p, int *q)
{
  int temp = *p;
  *p = *q;
  *q = temp;
}
</pre>

**:pushpin: 5번**

<pre>
void split_time(long total_sec, int *hr, int *min, int *sec)
{
  *hr = total_sec / 3600;
  *min = total_sec / 60 - *hr * 60;
  *sec = total_sec % 60;
}
</pre>

**:pushpin: 6번**

<pre>
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
  *largest = a[0];
  *second_largest = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
    } else if (a[i] > *second_largest) {
      *second_largest = a[i];
    }
  }
}
</pre>

**:pushpin: 7번**

<pre>
void split_date(int day_of_year, int year, int *month, int *day)
{
  int i;
  bool yun = false, found = false;
  
  if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    yun = true;

  for (int i = 1; i <= 12 && !found; i++) {
    switch(i) {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (day_of_year <= 31)
          found = true;
        else
          day_of_year -= 31;
        break;
      
      case 4: case 6: case 9: case 11:
        if (day_of_year <= 30)
          found = true;
        else
          day_of_year -= 30;
        break;
      case 2:
        if (yun) {
          if (day_of_year <= 29)
            found = true;
          else
            day_of_year -= 29;
        } else {
          if (day_of_year < 28)
            found = true;
          else
            day_of_year -= 28;
        }
        break;
    }
  }

  *month = i - 1;
  *day = day_of_year;
}
</pre>

**:pushpin: 8번**
