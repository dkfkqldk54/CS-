<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

<pre>
#define CUBE(x) ((x) * (x) * (x))
#define MOD4(n) ((n) % 4)
#define LESS100(x, y) ( ((x) * (y)) < 100 ? 1 : 0)
</pre>

**:pushpin: 2번**

<pre>
#define NELEMS(a) ( (int) (sizeof(a) / sizeof(a[0])) )
</pre>

**:pushpin: 3번**

(a) 4<br>
(b) 4<br>
(c)
<pre>
#define DOUBLE(x) (2 * (x))
</pre>

**:pushpin: 4번**

<pre>
#define AVG(x, y) (((x) + (y)) / 2)
#define AREA(x, y) ((x) * (y))
</pre>

**:pushpin: 5번**

(a) D<br>
(b) 2<br>

**:pushpin: 6번**

(a) 
<pre>
#define DISP(f, x) printf(#f"(%g) = %g\n", (x), f(x))
</pre>

(b)
<pre>
#define DISP(f, x, y) printf(#f"(%g, %g) = %g\n", (x), (y), f(x, y))
</pre>

**:pushpin: 7번**

(a)
<pre>
long long_max(long x, long y)
{
  return x > y ? x : y;
}
</pre>

(b) 함수 이름에 space가 들어가기 때문임.<br>
(c) space가 없는 버전으로 unsigned long을 미리 정의해놓음.
<pre>
typedef unsigned long u_long;
</pre>

**:pushpin: 8번**

<pre>
#define STRINGIZE(x) #x
#define LINE_FILE "Line " STRINGIZE(__LINE__) " of file " STRINGIZE(__FILE__)
</pre>

**:pushpin: 9번**

(a)
<pre>
#define CHECK(x, y, n) ( (((x) >= 0) && ((x) <= ((n)-1)) && ((y) >= 0) && ((y) <= ((n)-1))) ? 1 : 0 )
</pre>

(b)
<pre>
#define MEDIAN(x, y, z) ((x > y) ? ((y > z) ? y : ((x > z) ? z : x)) : ((z < x) ? x : ((y > z) ? z : y)))
</pre>

(c)
<pre>
#define POLYNOMIAL(x) (3 * (x) * (x) * (x) * (x) * (x) + 2 * (x) * (x) * (x) * (x) - 5 * (x) * (x) * (x) - (x) * (x) + 7 * (x) - 6)
</pre>

**:pushpin: 10번**

**:pushpin: 11번**

**:pushpin: 12번**

**:pushpin: 13번**

**:pushpin: 14번**

**:pushpin: 15번**

**:pushpin: 16번**


