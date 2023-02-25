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

argument가 여러 번 쓰일 수 있는데 argument안에 decrement나 increment 연산이 들어가있는 경우 의도치 않은 결과를 발생시킬 수 있음.

**:pushpin: 11번**

<pre>
#define ERROR(a, ...) fprintf(stderr, a, ##__VA_ARGS__)
</pre>

**:pushpin: 12번**

c, e

**:pushpin: 13번**

(a)
<pre>
void f(void);

int main(void)
{
    f();
    return 0;
}

void f(void)
{
    printf("N is 100\n");
}
</pre>

(b) N is 100

**:pushpin: 14번**

<pre>
int main(void)
{
    int a[= 10], i, j, k, m;

    i = j;

    i = 10 * j+1;
    i = (j,k) j-k;
    i = (((j)*(j))*((j)*(j)));
    i = (((j)*(j))*(j));
    i = jk;
    puts("i" "j");
    
    i = (j);
    
    i = (j);
    
    return 0;
}
</pre>

**오류가 날 수 있는 부분**<br>
#define N = 10 이므로 a[N]은 a[= 10]이 되어 오류가 날 수 있음.<br>
#define INC(x) x+1에서 x에 ()를 씌워주지 않아 오류가 날 수 있음.<br>
#define SUB (x, y) x - y는 argument에 붙은 ()이 macro의 이름과 떨어져 있으며, x - y도 ((x)-(y))로 고쳐야함.<br>
#define M1(x, y)에서는 x##y로 xy를 만들었지만 xy가 정의되어 있지 않아서 오류가 날 수 있음.<br>
#undef SQR이후에 i = SQR(j);에서 SQR이 undefined되었기 때문에 오류가 발생할 수 있음.<br>
#define SQR이후에 i = SQR(j);는 SQR이 argument를 받기로 한 적이 없기 때문에 오류가 발생할 수 있음.<br>


**:pushpin: 15번**

**:pushpin: 16번**


