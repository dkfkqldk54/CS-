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

**:pushpin: 8번**
