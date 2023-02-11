<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

(a) 14<br>
(b) 34<br>
(c) 4<br>
(d) true<br>
(e) false<br>

**:pushpin: 2번**

pointer끼리 더하면 undefined behavior가 발생하기 때문에 middle = (high - low) / 2 + low;로 고쳐야한다.

**:pushpin: 3번**

{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}

**:pushpin: 4번**

<pre>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE], *top_ptr = &contents[0];

void make_empty(void)
{
  top_ptr = &contents[0];
}

bool is_empty(void)
{
  return top_ptr == &contents[0];
}

bool is_full(void)
{
  return top_ptr == &contents[STACK_SIZE];
}
</pre>

**:pushpin: 5번**

(a)는 illegal. 포인터 변수와 int 값을 비교했기 때문임. (b), (c), (d)는 legal이며 true임.<br>

**:pushpin: 6번**

<pre>
int sum_array(const int a[], int n)
{
  int *p, sum;
  
  sum = 0;
  for (p = &a[0]; p < &a[n]; p++)
    sum += *p;
  return sum;
}
</pre>

**:pushpin: 7번**

<pre>
bool search(const int a[], int n, int key)
{
  int *p;
  
  for (p = &a[0]; p < &a[n]; p++)
    if (*p == key) return true;
  return false;  
}
</pre>

**:pushpin: 8번**

<pre>
void store_zeros(int a[], int n)
{
  int *p;
  
  for (p = &a[0]; p < &a[n]; p++)
    *p = 0;
}
</pre>

**:pushpin: 9번**

<pre>
double inner_product(const double *a, const double *b, int n)
{
  int i;
  double sum = 0;
  
  while (i++ < n)
    sum += *a++ * *b++;

  return sum;
}
</pre>

**:pushpin: 10번**

<pre>
int *find_middle(int a[], int n)
{
  return a + n/2;
}
</pre>

**:pushpin: 11번**

<pre>
int find_largest(int a[], int n)
{
  int *p=a, largest=*p;
  for (p = a; p < a+n; p++)
    if (largest < *p) largest = *p;
  return largest;
}
</pre>


**:pushpin: 12번**

<pre>
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
  int *p = a;
  int *largest = *second_largest = *a;
  
  while (p++ < a + n)
  {
    if (*p > *largest) {
        *second_largest = *largest;
        *largest = *p;
    } else if (*p > *second_largest)
      *second_largest = *p;
  }
}
</pre>

**:pushpin: 13번**

<pre>
#define N 10

void init_ident(int n, double ident[n][n]) {
  double *p;
  int count = 0;
  
  for (p = &ident[0][0]; p < &ident[0][0] + n*n; p++)
  {
    if (count == 0) {
      *p = 1.0;
      count = N;
    }
    else {
      *p = 0.0;
      count--;
    }
  }
}
</pre>

**:pushpin: 14번**

<pre>
bool has32 = search(temperatures, 7*24, 32);
</pre>

**:pushpin: 15번**

<pre>
int *p = temperatures[i];
  
printf("Today's temperature is");
  
while (p++ < a[i+1])
  printf(" %d", *p);
  
printf(".");
</pre>

**:pushpin: 16번**

int find_largest(int a[], int n)
{
  int *p=a, largest=*p;
  for (p = a; p < a+n; p++)
    if (largest < *p) largest = *p;
  return largest;
}

<pre>
int i;

for (i = 0; i < 7; i++)
  printf("day %d: %d\n", i+1, find_largest(temperatures[i], 24));
</pre>


**:pushpin: 17번**

<pre>
int sum_two_dimensional_array(const int a[][LEN], int n)
{
  int *p = *a, sum = 0;
  
  while(p++ < *a + n*LEN)
    sum += *p;
      
  return sum;
}
</pre>

**:pushpin: 18번**

int evaluate_position(char board[8][8])
{
  int sum = 0;
  int *p;
  for (p = board; p < board + 8 * 8; p++)
  {
    switch(*p) {
      case 'Q':
        sum += 9;
        break;
      case 'R':
        sum += 5;
        break;
      case 'B':
        sum += 3;
        break;
      case 'N':
        sum += 3;
        break;
      case 'P':
        sum += 1;
        break;
      case 'q':
        sum -= 9;
        break;
      case 'r':
        sum -= 5;
        break;
      case 'b':
        sum -= 3;
        break;
      case 'n':
        sum -= 3;
        break;
      case 'p':
        sum -= 1;
        break;
      default:
        break;
    }
  }
  return sum;
}


