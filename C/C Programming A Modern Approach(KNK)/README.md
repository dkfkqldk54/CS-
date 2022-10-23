<h1>:green_book: C Programming A Modern Approach(KNK) 정리</h1>

<a href="#2">:pencil2: Chapter 2. C Fundamentals</a>
- C의 기원
- 컴파일링과 링킹
- 프로그램 기본 형식
- 변수와 할당
- 상수에 이름 붙이기
- 식별자

<a href="#3">:pencil2: Chapter 3. Formatted Input/Output</a>
- printf: 개요
- printf: 변환 지정자
- printf: escape sequences
- scanf: 개요
- scanf: format string에 있는 일반 문자

<a href="#4">:pencil2: Chapter 4. Expressions</a>
- 산술 연산자
- 대입 연산자
- 증가 연산자, 감소 연산자
- 수식 검토
- 수식을 문장으로 활용

<a href="#5">:pencil2: Chapter 5. Selection Statements</a>
- 논리식
- if문
- Boolean 타입
- switch문
  
<h2><a id="2">:pencil2: Chapter 2. C Fundamentals</a></h2>

**:pushpin: C의 기원**

C는 1970년대 벨 연구소에서 개발된 프로그래밍 언어로 켄 톰슨, 데니스 리치 등이 만들었음.<br>
당시 어셈블리어로 작성된 UNIX는 코드는 보수하거나 디버그하는 것이 상당히 어려웠음.<br>
이를 보완하기 위해 B를 개발하였으나 B는 UNIX에 적합한 언어가 아니었고, B를 업그레이드 한 C를 개발하게 됨.<br>

**:pushpin: 컴파일링과 링킹**

Preprocessing: #(directives)로 시작하는 커맨드를 처리함.<br>
Compiling: 코드를 기계어로 번역해주는 작업. 즉 컴파일러에 의해 기계가 읽을 수 있도록 번역된 프로그램인 객체 코드를 만들어줌.<br>
Linking: 객체 코드와 additional code를 조합시킴. additional code는 printf와 같은 라이브러리 함수를 포함함.<br>

**UNIX에서의 컴파일링과 링킹**<br>

UNIX에서는 C의 컴파일러로 보통 cc를 쓰는데 pun.c를 컴파일링하고 링킹할 때는 아래와 같이 쓸 수 있음.<br>
<pre>% cc pun.c</pre>

컴파일, 링킹 작업이 끝난 뒤에는 a.out(assembler output)이라는 이름의 실행 파일을 자동으로 생성함.<br>
-o 옵션은 실행 파일의 이름을 정할 수 있도록 해주는데, pun.c를 pun으로 지정하고 싶을 때는 아래와 같이 작성함.<br>
<pre>% cc -o pun pun.c</pre>

컴파일러가 아니라 IDE(Integrated Development Environment)를 쓸 수도 있음.<br>
IDE는 동일한 환경 안에서 편집, 컴파일링, 링킹, 실행, 디버그 등을 모두 수행할 수 있음.<br>

**:pushpin: 프로그램 기본 형식**

C의 프로그램 기본 형식은 아래와 같음.
<pre>
directives

int main(void)
{
  statements
}
</pre>

**Directives**<br>

<stdio.h>를 사용하는 이유는 C는 읽고 쓰는 명령어가 없기 때문임.<br>
directives는 항상 #으로 시작하고, #은 directive임을 알리기 위함임.<br>

**Functions**<br>

한 줄로만 작성해야 하며, 반점 등은 들어가지 않음.<br>
프로그램 안에 main 함수는 반드시 포함하고 있어야 함.<br>
main도 값을 return하는데 return하는 값은 status code임.<br>
status code는 OS에게 프로그램을 끝내도 된다는 신호를 줌.<br>
main 앞에 int는 main 함수가 int를 return할 것이라고 알려주는 것임.<br>
void는 main에 들어갈 인자가 없다는 것을 나타내는 것임.<br>
return 0의 의미는 두 가지가 있음. 하나는 main 함수를 끝내겠다는 의미이고, 다른 하나는 main 함수는 0을 return 했다는 의미임.<br>
만약 return이 없어도 프로그램은 끝나겠지만, 컴파일러에 따라 경고 메시지를 보낼 수도 있음. int를 return해야 하는데 하지 않았기 때문임.<br>

**Statements**<br>

Statement는 세미콜론으로 끝남. 이는 컴파일러에게 문장이 끝났다는 것을 알려주기 위함임.<br>

**Printing Strings**<br>

문장 끝에 \n(new line character)를 붙여줘야 함. 이를 붙이지 않으면 한 줄안에 여러 문장이 함께 출력됨.<br>

**Comments**<br>

코멘트 시작은 /*이고 끝은 */임.<br>
C99은 //(adjacent slashes)로도 코멘트를 남기는데, 문장의 시작 부분에만 써주고 끝 부분에는 써주지 않아도 자동으로 끝맺음해줌.<br>
두 줄 이상의 긴 코멘트는 /* */로 써주는 것이 좋음.<br>

**:pushpin: 변수와 할당**

**Types**<br>

int와 float 등이 있음.<br>
float은 int보다 계산이 느린데, 이는 float이 근사치를 보여주고 있어서 그렇지 실제 값은 더 많은 digit을 포함하고 있을 수 있기 때문임.<br>

**Declarations**<br>

변수는 사용되기 전에 선언되어야 하고 역시 끝에 세미콜론을 붙여야함.<br>
<pre>
int height;
float profit, loss;
</pre>
main 함수에서 declaration은 statements가 오기 전에 있어야함.<br>
그러나 C99에서는 declaration -> statements -> declaration -> statements와 같은 순서로 사용할 수 있음. 즉 statements에서 사용될 변수는 그 이전에만 선언되면 됨.<br>

**Assignment**<br>

<pre>
height = 8;
profit = 2150.48f;
</pre>
float은 맨 마지막에 f를 붙이는데, f를 붙이지 않으면 오류가 발생할 수 있음.<br>
int에 float값을, float에 int 값을 할당할 경우에도 오류가 발생할 수 있음.<br>

**printing the value of a variable**<br>

%d는 int, %f는 float을 위한 것임.<br>
소수점 몇 번째 자리까지 나타내고 싶을 때는 %.2f와 같이 표현하면 됨.<br>
<pre>printf("profit: %.2f\n", profit);</pre>

**Initialization**<br>

초기화 값은 declaration과 함께 사용할 수도 있음.<br>
<pre>int height = 8;</pre>
여기서 8을 initializer라고 함.<br>
<pre>
int height = 8, lenght = 12;
int height, length = 8;
</pre>
위와 같은 방식은 되지만 아래와 같은 방식은 안 됨.<br>
하나의 변수에는 하나의 initializer가 필요함.<br>

**Reading Input**<br>

scanf, printf의 f는 formatted의 f임.<br>
변수는 Type을 선언해야 하는데 scanf 안에서 &을 써줌으로서 이를 대신함. 정수와 실수의 경우 아래와 같이 표현하면 됨.<br>
<pre>
scanf("%d", &i);
scanf("%f", &x);
</pre>

**:pushpin: 상수에 이름 붙이기**

자주 쓰는 상수에 이름을 붙여 쓰고 싶을 때는 macro definition을 사용하면 됨.<br>
<pre>#define INCHES_PER_POUND 166</pre>
directive처럼 쓰며 마찬가지로 마지막에 세미콜론을 붙이지 않음.<br>
관습적으로 대문자로 쓰임.<br>
숫자 부분에 (1.0f/3.14f)와 같이 수식을 써도 되나, 괄호를 동반해야 함.<br>
(1.0/3.14)가 아니라 (1.0f/3.14f)로 하는 이유는 전자는 0으로 인식되나 후자는 1/3.14로 인식되기 때문임.<br>

**:pushpin: 식별자**

식별자는 문자, 숫자, 언더바로 쓸 수 있으며, 식별자의 시작은 문자, 언더바로만 가능함.<br>
C는 case sensitive해서 소문자와 대문자를 달리 인식함. 따라서 job과 Job는 다른 식별자임.<br>
C에서는 관습적으로 식별자에는 소문자만 사용하며, 두 덩어리 이상의 단어를 사용할 때는 _로 이어줌.<br>
식별자의 길이에는 제한이 없으나 컴파일러에 따라서 인식하는 길이에 차이가 있고, C89와 C99 사이에서도 차이가 있음.<br>
keywords는 식별자로 사용할 수 없는데 그 목록은 다음과 같음.<br>
<pre>
auto break case char const continue default
do double else enum extern float for
goto if int long register return short
signed sizeof static struct switch typedef union 
unsigned void while
</pre>
다음 5가지는 C99에서 추가된 것임.<br>
<pre>inline restrict _Bool _Complex _Imaginary</pre>

<h2><a id="3">:pencil2: Chapter 3. Formatted Input/Output</a></h2>

**:pushpin: printf: 개요**

printf는 format string을 출력함.<br>
format string은 일반 문자와 변환 지정자(conversion specification) 두 가지를 포함함.<br>
변환 지정자는 %d, %f와 같이 value를 넘길 때 쓰는 기호를 의미함.<br>

**:pushpin: printf: 변환 지정자**

%m.pX(예: %10.2f)가 기본 포맷임.<br>
m과 p는 정수이고 x는 문자인데, m과 p는 써도 되고 안 써도 됨.<br>

**m, p, x**<br>

m은 minimum field width의 약자임. %4d일 때 123이 들어오면 (공백)123으로 처리하고, %-4d일 때 123이 들어오면 123(공백)으로 처리한다. %2d와 같이 입력보다 작을 때는 알아서 width를 늘려서 123을 모두 출력함.<br>
p는 minimum number of digits로 123을 %.4d로 하면 0123이 출력된다. d에서 p의 기본값은 1이다.<br>
x는 어떤 변환 지정자를 사용할지 결정한다.<br>

**x의 종류**<br>

d: 정수를 나타낼 때 쓰임.<br>
i: 십진법에서는 d와 동일하지만 8진법, 16진법을 나타낼 때도 쓰인다. 숫자 앞에 0을 붙이면 8진법, 0x를 붙이면 16진법으로 읽는다.<br>
e: 실수에 지수를 곱한 형태로 수를 출력한다. p는 decimal point이후에 몇 개의 자리가 나오는지를 가리키며, 기본값은 6이다. p가 0이면 소수점이 출력되지 않음. 6545.123을 %.2e로 출력하면 6.55e+03이다.<br>
f: 실수를 나타낼 때 쓰임.<br>
g: e와 f를 섞음. p는 significant digit(소수점 이하의 자리가 아님)이다. 6545.123123을 %6g로 출력하면 6545.12가 출력되고 %.2g는 6.5e+03이 출력된다. %.4g는 6545, %.7g는 6545.123이다.g는 소수점에 0이 계속 이어지는 trailing zeros는 무시한다. 숫자의 size를 예측할 수 없는 경우 유동적으로 출력하기에 좋은 변환 지정자임.<br>

**:pushpin: printf: escape sequences**

Alert(bell): \a<br>
Back space: \b<br>
New line: \n<br>
Horizontal tab: \t<br>

\을 시작 문자의 앞, 끝 문자의 앞에 넣어주면 "도 출력할 수 있음.<br>
print("\"Hello!\"") -> "Hello"<br>

\을 출력하고 싶으면 \를 2번 쓰면 됨.<br>
print("\\");<br> 

**:pushpin: scanf: 개요**

scanf에서 %e, %f, %g는 상호교환해서 사용해도 괜찮음.<br>
scanf는 put back 기능이 있음.<br>

**예시**<br>

scanf("%d%d%f%f", &i, &j, &x, &y);<br>
입력 데이터: 1-20.3-4.0e3\n<br>

int에 1을 배정하고, 숫자 안에 -가 포함될 수 없기 때문에 put back한다.<br>
int에 -20이 배정되고, 숫자 안에 .가 포함될 수 없기 때문에 put back한다.<br>
.3이 배정되고, 숫자 안에 -가 포함될 수 없으니 put back한다.<br>
-4.0e3이 배정되고, new line character가 들어올 수 없으니 put back한다.<br>
\n은 다음 scanf를 기다리면서 남아있는다.<br>

**:pushpin: scanf: format string에 있는 일반 문자**

white space character는 다 무시함. 그 이외의 문자가 나오기 전까지 읽다가, 이외의 문자가 나오면 put back하는 방식임. 따라서 white space character는 1개가 있으나, 여러개가 있으나 하나도 없는 것이나 마찬가지임.<br>
그 외의 문자들은 input으로 들어온 문자와 format string에 있는 문자를 비교해보고, 동일하면 input에 들어온 문자를 버리고 계속 읽어나감.<br>

**예시1**<br>

"%d/%d"에서 (공백)5/(공백)96이 들어오면 공백은 무시하고 5를 넣고, /는 버리고, 공백은 무시하고 96은 넣음.<br>
그러나 (공백)5(공백)/(공백)96이 들어오면 가운데 있는 공백이 /와 매칭이 되지 않아서 뒤에 값은 배정이 안됨.<br>
(공백)/(공백)96은 다음 scanf가 올 때까지 기다리고 있음.<br>

**예시2**<br>

"%d\n"는 white space character랑 똑같이 처리되는데 integer를 받은 후에 white space character를 만나는데, 이렇게 되면 다음 scanf를 기다리게 됨. 따라서 입력할 것도 없는데 입력하라고 창이 나올 수가 있음.<br>

**예시3**<br>

scanf("%d", &i);일 때 23foo를 넣으면 23은 저장되고, foo는 다음 scanf를 위해서 남겨둠. foo만 들어오면 저장은 실패하고, foo만 다음 scanf를 위해 남겨둠.<br>

<h2><a id="4">:pencil2: Chapter 4. Expressions</a></h2>

**:pushpin: 산술 연산자**

**Unary**<br>

피연산자가 1개면 됨.<br>
+(unary plus), -(unary minus) 두 가지가 있음.<br>
unary 연산자는 양수면 양수, 음수면 음수임을 강조하기 위해서만 사용됨.<br>

**Binary**<br>

Addictive와 Multiplicative 두 가지가 있음.<br>
Addictive는 +와 -, Multiplicative는 *, /, %가 있음.<br>
binary 연산자에는 정수와 실수 모두 사용 가능하나, 이 둘을 섞어서 쓸 경우에 결과값은 실수가 됨.<br>

**주의할 점**<br>

/ 연산자는 피연산자가 둘 다 정수일 때 결과값의 소수점 이하 자리는 다 잘라냄. 예를 들어 1/2는 0.5가 아니라 0임.<br>
% 연산자는 피연산자가 둘 다 정수일 때만 사용이 가능함. 둘 중 하나라도 정수가 아니면 컴파일되지 않음.<br>

**/와 %를 음수와 함께 사용할 때**<br>

C89: /의 경우 피연산자가 둘 중 하나라도 음수면 결과값을 올리거나 내림. 즉 -9/7은 -1이거나 -2임. %의 경우에도 둘 중 하나라도 음수면 결과값을 올리거나 내림. -9%7은 -2이거나 5임.<br>
C99: 결과값을 0에 가깝게 rounding함. -9/7은 -1이고 -9%7은 -2임<br>
이렇게 정해놓기에 따라 달라지는 것을 Implementation Defined Behavior라고 함.<br>
Implementation Defined Behavior는 프로그램마다 다른 결과를 초래할 수도 있는데, 이렇게 해놓은 이유는 하드웨어에 따라 효율적인 방식이 제각각 다르기 때문에 유도리있게 적용하기 위해서임.<br>

**연산자 우선순위와 결합성**<br>

+, -(unary) -> *, /, % -> +, -(binary) 순임. 화살표 안에 있는 연산자끼리는 동일한 우선순위를 가짐.<br>
연산자 우선순위만으로 충분하지 않은 경우에는 결합성이 필요함.<br>
좌결합성은 왼쪽에서 오른쪽으로 결합되는 것을 의미하고 *, /, %, +, - 등이 이에 해당함.<br>
따라서 i - j - k는 (i - j) - k임.<br>
우결합성은 오른쪽에서 왼쪽으로 결합한다는 것을 의미하고 unary 연산자가 이에 해당함.<br>
따라서 -+i는 -(+i)임.

**:pushpin: 대입 연산자**

**단순 대입 연산자**<br>

단순 대입은 =로 하며 기본 형태는 v=e임.<br>
v와 e가 꼭 같은 타입일 필요는 없음. 단순 대입을 쓰면 e의 타입이 v에 따라 바뀌기도 함.<br>
<pre>
int i;
float f;
i = 72.99f /* i는 72 */
float = 136; /* f는 136.0 */
</pre>

C언어에서는 =이 단순히 대입만 하는 것이 아니라 결과값을 return하게 되어있음.<br>
i=72.99는 72를 return함.<br>
=는 우결합성을 가지고 있어서 i=j=k=0;은 i=(j=(k=0));임.<br>
<pre>
int i;
float f;

f = i = 33.3f;
</pre>
따라서 이 경우에도 i에 33이 할당되고, f에는 33.3이 아니라 33.0이 할당됨.<br>
<pre>
i = 1;
k = 1 + (j=i);
</pre>
이 경우에는 i=1이고 j에는 1을 배정한 뒤에 1을 return하므로 k는 2가 됨.<br>

**Lvalues**<br>

여기서 L은 left를 의미함.<br>
대입 연산자는 좌측 피연산자로 Lvalue를 필요로함.<br>
변수는 대표적인 Lvalue의 예시임.<br>
다음은 3가지 대표적인 틀린 케이스임.<br>
<pre>
12 = i;
i + j = 0;
-i = j
</pre>

**복합 대입 연산자**<br>

+=, -=, *=, /=, %= 등이 있음.<br>
v += e는 일반적으로 v = v + e 이지만 아닌 경우도 있음.<br>
<pre>
a[i++] += 2;
a[i++] = a[i++] + 2;
</pre>
위의 식은 증가 연산자가 한 번 적용되지만, 아래 식은 증가 연산자가 두 번 적용됨.<br>
복합 대입 연산자도 우결합성을 가지고 있어서 i += j += k;는 i += (j += k);와 같음.<br>

**:pushpin: 증가 연산자, 감소 연산자**

++은 증가 연산자, --는 감소 연산자임.<br>
수의 앞에 붙이면 prefix 연산자, 뒤에 붙이면 postfix 연산자임.<br>
++i는 i에 즉시 1을 더하고 그 결과값을 활용하라는 뜻이고, i++는 i를 활용한 후 i에 1을 더하라는 의미임.<br>
postfix의 경우 다음 문장이 실행되기 전에 계산이 됨.<br>
postfix는 좌결합성을 가지고 있으며 unary +와 -보다 우선순위가 높음.<br>
prefix는 우결합성을 가지고 있으며 unary +와 -와 우선순위가 같음.<br>

**:pushpin: 수식 검토**

연산자 우선순위와 결합성에 맞게 계산하면 됨.<br>
하위 수식의 순서는 어떤 것부터 계산할지 정해져있지 않음.<br>
(a+b) * (c-d)와 같은 경우 별 다른 문제가 발생하지 않음.<br>
그러나 다음의 경우 문제가 발생할 수 있음.<br>
<pre>
a = 5;
c = (b=a+2) - (a = 1);
</pre>
c는 6이 될 수도 있고, 2가 될 수도 있음.<br>
이런 유형을 undefined behavior라고 부름.<br>
undefined behavior는 가능하면 피하고, 식을 각 줄에 분리해서 적어주는 것이 좋음.

**:pushpin: 수식을 문장으로 활용**

어떠한 표현도 세미콜론만 붙여주면 문장으로 쓸 수 있음.<br>
<pre>
++i;
i*j-1
</pre>
첫 번째 문장은 i에 1을 더하지만 결과값을 활용하지는 않으나 문장으로는 사용할 수 있음.<br>
두 번째 문장은 식을 계산하기는 하지만 이 결과값을 어디에 할당하거나 하지는 않음. 그러나 문장으로는 사용할 수 있음.<br>

<h2><a id="5">:pencil2: Chapter 5. Selection Statements</a></h2>

C가 가지고 있는 statement의 종류는 딱 세 가지임.<br>
선택문: if나 switch등 많은 문장들 중에서 특정한 문장만 실행시키게 하는 statement.<br>
반복문: while, do, for 등 반복을 돕는 statement.<br>
분기문: break, continue, goto, return 등 무조건적으로 탈출할 수 있게 하는 statement.<br>

**:pushpin: 논리식**

C에서는 i<j를 판단할 때 true인지 false인지 boolean으로 판단하지 않고, 0과 1로 판단함.<br>

**관계 연산자**<br>

관계 연산자는 <, >, <=, >=이 있음.<br>
정수와 실수를 섞어서 사용해도 됨.<br>
관계 연산자는 산술 연산자보다 우선순위가 낮고 좌결합성이 있음.<br>
따라서 i<j<k는 (i<j)<k여서 좌측 괄호 안의 값이 0또는 1이 되어버려 원래 의도한 비교는 불가능해짐. 이를 제대로 표현하려면 i<j && j<k와 같이 표현해야 함.<br>

**동등 연산자**<br>

동등 연산자로는 !=, ==가 있음.<br>
동등 연산자도 좌결합성이 있으며, 0또는 1을 return함.<br>
관계 연산자보다 낮은 우선순위를 가지고 있음.<br>
따라서 i<j == j<k는 (i<j) == (j<k)임.<br>

**논리 연산자**<br>

논리 연산자는 !, &&, ||가 있으며 !는 unary, &&, ||는 binary임.<br>
0또는 1을 결과값으로 return하며, 0이 아닌 값은 모두 1로 반환함.<br>
a가 0일 때, !a은 1임.<br>
a && b는 a와 b가 모두 0이 아니어야 1임.<br>
a || b는 a와 b 둘 중 하나만 0이 아니어도 1임.<br>
!는 uanry +, -와 같은 우선순위를 가지며 우결합성을 가짐.<br>
&&, ||는 관계 연산자나 동등 연산자보다 우선순위가 낮으며 좌결합성을 가짐.<br>

**Short-Circuit**<br>

&&와 ||는 short-circuit이라는 특성을 가짐.
short-circuit은 좌측 피연산자에서 결과를 확정지을 수 있으면 우측 피연산자로 이동하지 않는 것을 뜻함.<br>
예를 들어 (i!=0) && (j/i>0)에서 i가 0이면 오른쪽은 계산을 하지 않고 전체 값으로 0을 return함.<br>
i>0 && ++j>0에서도 좌측에서 먼저 끝나버리면 오른쪽에 있는 j에 증가 연산을 해주지 못함.<br>

**:pushpin: if문**

if문의 기본 형태는 if (expression) statement임.<br>
statement에 한 줄이 아니라 여러 줄을 쓰고 싶을 때는 중괄호로 묶어줌.<br>
중괄호를 쓰면 컴파일러는 이를 한 줄로 인식함.<br>
else를 같이 쓰면 기본 형태는 if (expression) statement else statement임.<br>
if문과 else문의 가독성을 높이기 위해서는 중괄호를 붙이는 것이 좋음.<br>
<pre>
if (expression) {
  statements
} else {
  statements
}
</pre>
else if를 활용할 수도 있음.<br>
<pre>
if (expression)
  statement
else if (expression)
  statement
else
  statement
</pre>

**Dangling else 문제**<br>
<pre>
if (y!=0)
  if (x!=0)
    result = x/y;
else
  printf("Error");
</pre>
일반적으로 else문이 바깥 if문과 결합할 것이라고 생각하겠지만, 실제로는 안쪽에 있는 if문과 결합하게 됨.<br>
C언어는 아직 else와 결합이 되지 않은 if문중 가장 가까운 것과 else를 결합시키기 때문임.<br>
만약 바깥 if문과 결합시키고 싶으면 중괄호를 활용해야 함.<br>
<pre>
if (y!=0) {
  if (x!=0)
    result x/y;
} else
    printf("Error");
</pre>

**조건 연산자**<br>

조건 연산자는 3개의 피연산자가 필요한 유일한 ternary 연산자이며, a ? b : c와 같이 사용함.<br>
a, b, c에는 어떤 타입도 다 들어갈 수 있음.<br>
조건 연산자는 대입 연산자보다는 우선순위가 높지만 그 외의 연산자보다는 우선순위가 낮음.<br>
조건 연산자는 보통 가독성을 떨어뜨리기 때문에 잘 사용하지 않지만 다음과 같은 경우에는 유용함.<br>
<pre>
if (i>j)
  return i;
else
  return j;

/* short version */

return i>j?i:j;
</pre>
조건 연산자의 피연산자 중에 정수와 실수가 같이 있는 경우에는 어떤 값이 나오든 실수로 처리됨. 결과값으로 정수가 나와도 실수로 처리됨.<br>

**:pushpin: Boolean 타입**

**Boolean Values in C89**<br>

<pre>
int flag;
flag = 0;
flag = 1;
</pre>

이와 같이 flag로 true인지 false인지 구분을 할 수 있지만 flag에 다른 숫자가 들어갈 수도 있다는 인상을 줌.<br>

<pre>
# define TRUE 1
# define FALSE 0
flag = FALSE;
flag = TRUE;
</pre>

아까보다는 낫지만 flag가 boolean 타입이 아닌 int 타입이기 때문에 여전히 숫자가 들어갈 것 같은 느낌임.<br>

<pre>
# define BOOL int
BOOL flag;
</pre>

flag에 BOOL 타입을 지정해주면 flag가 오직 boolean을 위해서만 쓰일 것 같은 인상을 줌.<br>
하지만 여전히 0, 1외의 int 값이 배정될 수 있음.<br>

**Boolean Values in C99**

C99에서는 _Bool 타입이 있어서 _Bool flag;로 변수의 타입을 지정할 수 있음.<br>
_Bool 타입은 0과 1만 배정받을 수 있으며, 0이 아닌 값이 들어오면 모두 1로 배정함.<br>
<stdbool.h> 헤더를 추가하면 bool flag;로 변수 타입을 정할 수 있으며, 이는 _Bool flag;를 한 것과 똑같은 효과임.<br>
또한 true와 false를 사용할 수 있게 되어 flag=false; 혹은 flag=true;로 지정할 수도 있음.<br>

**:pushpin: switch문**
