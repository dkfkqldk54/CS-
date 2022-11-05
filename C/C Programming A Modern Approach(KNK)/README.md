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

<a href="#6">:pencil2: Chapter 6. Loops</a>
- while문, do문
- for문
- 탈출문
- null문

<a href="#7">:pencil2: Chapter 7. Basic Types</a>
- 정수 타입 
- 실수 타입
- 문자 타입
  
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
&&, ||는 관계 연산자나 동등 연산자보다 우선순위가 낮으며 좌결합성을 가짐. 이 때, &&는  ||보다 우선순위가 높음.<br>

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

switch문의 기본 형태는 다음과 같음.<br>
<pre>
switch (expression) {
  case constant-expression: statements
  ...
  case constant-expression: statements
  default: statements
}
</pre>

**expression**<br>

괄호 안에 있는 expression에는 정수가 들어가야 함. 문자 하나(character)도 정수 처리가 되지만, 실수나 문자열(string)은 안 됨.<br>
constant expression에는 변수나 함수 call이 들어오면 안 됨. 5, 5+10은 되지만, n+10은 안 됨. 다만 n이 macro definition된 값이면 괜찮음.<br>
정수 값만 들어가야 하는데, 역시 문자열은 안 되지만 문자는 가능함.<br>

**statements**<br>

statement는 몇 개든 들어가도 됨.<br>
중괄호를 쓰지 않아도 되며, 마지막에는 보통 break를 붙임.<br>
여러 케이스를 한 번에 묶고 싶을 때는 아래와 같이 적으면 됨.<br>

<pre>
case 4: case 3: case 2: case 1:
  statements;
</pre>

**break**<br>

실행된 case의 마지막 문장이 수행되면, 다음 case의 case label을 무시하고 해당 케이스의 첫 번째 문장부터 실행하기 시작함.<br>
따라서 break가 없으면 해당 case 아래로 줄줄이 실행됨. default까지도.

**switch 특성**<br>

switch는 범위를 특정시키지는 못 함.<br>
default는 반드시 마지막에만 있어야 하는 것이 아니며, 반드시 있어야 하는 것도 아님.<br>
case에 맞는 값이 없으면 자연스럽게 switch문 다음 문장으로 넘어감.<br>

<h2><a id="6">:pencil2: Chapter 6. Loops</a></h2>

**:pushpin: while문, do문**

**while문**<br>

while문의 기본 형태는 while (expression) statement임.<br>
statement에 2개 이상 넣고 싶은 경우에는 중괄호로 감싸줌.<br>
문장이 1개만 있어도 중괄호로 감싸주어도 됨.<br>
expression 안에 non-zero 값을 넣고 계속 루프를 돌릴 수도 있음.<br>

**do문**<br>

do문의 기본 형태는 do statement while (expression);임.<br>
역시 마찬가지로 statement에 중괄호를 쓸 수 있음.<br>

**:pushpin: for문**

for문의 기본 형태는 for (expr1; expr2; expr3) statement임.<br>
<pre>
for (i=10; i>0; i--)
  printf("T minus %d and counting \n", i);
</pre>
for문으로 while문을 구현하면 아래와 같음.<br>
<pre>
expr 1;
while (expr 2) {
  statement
  expr 3;
}
</pre>
for문 expr 2에 i--가 아니라 --i로 바꿔도 마찬가지의 결과를 도출하는데, 그 이유는 while로 옮긴 for문을 분석해보면 알 수 있음.<br>
<pre>
i = 10;
while (i>0) {
  printf("T minus %d and counting \n", i);
  --i;
}
</pre>
for문 안에 있는 expression 3가지를 항상 다 사용해야 하는 것은 아님.<br>
expr 1은 바깥에서 선언될 수 있고, expr 3은 statement에서 대신 사용될 수 있음.<br>
expr 2가 없으면 무한 루프에 빠지게 됨.<br>
expr가 없더라도 두 개의 세미콜론은 반드시 필요하며, 이 경우 무한 while문과 같아짐.<br>

**C99에서의 for문**<br>

for문 expression에서도 declaration을 할 수 있음.<br>

<pre>
for (int i=0; i < n; i++) {
  printf("%d", i);
}
printf("%d%, i);
</pre>
  
이와 같이 for문 안에서 선언하면 루프 안에서만 접근이 되고, for문 밖에서는 접근이 안 됨.<br>
따라서 바깥의 i는 선언도 안 된 상태이며, 만약 0으로 값이 배정되어 있으면 for문이 어떻게 돌아가든 0 그대로임.<br>
만약 i값을 for문이 돌아간 뒤에도 유지하고 싶으면 declaration을 하지 않으면 됨.<br>
선언은 1개만 가능한 건 아니고 int i=0, j=0;와 같이 여러 개도 가능함.<br>
그러나 타입은 단 1가지만 있어야 함.<br>
  
**콤마 연산자**<br>
  
콤마가 있으면 for문의 expr1과 expr3에 두 개 이상의 expression을 넣을 수 있음.<br>
expr1, expr2가 한 자리에 들어가면 expr1은 evaluated되고 버려지며, expr2는 evaluated되고 이 값이 해당 자리의 결과값이 됨.<br>
예를 들어 i가 1이고 j가 5일 때, ++i, i+j가 들어오면 i는 2가 되고 i+j의 결과값인 7이 전체의 값으로 return됨.<br>
콤마는 다른 연산자보다 우선순위가 낮음.<br>
i=1, j=2, k=i+j는 ((i=1), (j=2)), (k=(i+j))임.<br>
콤마가 있음으로써 여러 개의 문장을 하나의 문장처럼 사용할 수 있음.<br>
콤마의 활용 예시는 다음과 같음.<br>
<pre>
sum = 0;
for (i=1; i <= N; i++)
  sum += i;
  
for (sum = 0, i = 1; i <= N; i++)
  sum += i;
</pre>

**:pushpin: 탈출문**
  
**break문**<br>
  
break문은 loop문(while문, do문, for문)과 switch를 중단시킴.<br>
break문은 while, do, for, switch문에 쓰일 때 break를 기준으로 가장 안쪽에 있는 것 하나만 중단시킬 수 있음.<br>
즉, 2중 nested인 경우에는 1중만 벗길 수 있음.<br>
  
**continue문**<br>
  
continue는 while, do, for문과 같은 loop문에만 쓸 수 있고, switch문에는 쓸 수 없음.<br>
continue는 break처럼 loop에서 빠져나오지는 않음.<br>
대신 continue 이후의 문장을 skip하고 루프는 계속 돌게 만듬.<br>
  
**goto문**<br>

goto문은 goto identifier;에 걸리면 identifier: statement가 있는 곳으로 빠져나오게 함.<br>
<pre>
for (d=2; d < n; d++)
  if (k%d == 0)
    goto done;
  
done:
  if (d < n)
    printf("%d is divisible by %d\n", n, d);
  else
    printf("%d is prime\n", n);
</pre>

goto문은 nested 루프를 한 번에 빠져나오기에도 좋음. 2중 3중이어도 빠져 나올 수 있음.<br>
  
**return**<br>
  
<pre>
for (;;) {
 switch () {
  case 0: ...
  case 1: ...
  ...
  case n: ...
  default: ...
 }
}
</pre>
이런 경우에 braek를 하면 for문에 대한 탈출이 불가능한데, return을 쓰면 main 함수에 대해서 return이 이루어지므로 탈출이 가능함.<br>
  
**:pushpin: null문**
  
null statement는 세미콜론 하나로만 구성된 문장임.<br>
null문이 유용하게 쓰일 때는 loop의 body를 비워서 돌릴 때임.<br>
<pre>
for (d=2; d < n; d++)
  if (n%d == 0)
    break;
  
for (d=2; d < n && n % d != 0; d++);
</pre>
  
위 두 개의 for문은 같은 과정을 거쳐서 같은 결과를 도출함.<br>
  
**null문 적용사례**<br>
  
if문의 control expression 다음에 세미콜론을 찍으면 body는 조건에 관계없이 1번 실행됨.<br>
while문 control expression 다음에 세미콜론을 찍으면 무한 루프가 돌거나, 무한 루프가 돌지 않을 경우에 body가 1번만 실행됨.<br>
for문의 경우에도 control expression이 다 돌고, body가 1번만 실행됨.<br>

<h2><a id="7">:pencil2: Chapter 7. Basic Types</a></h2>

**:pushpin: 정수 타입** 

정수 타입에는 signed와 unsigned가 있음.<br>
signed integer는 가장 왼쪽의 비트가 0또는 1인데, 0은 양수 혹은 0, 1은 음수를 뜻함.<br>
부호를 나타내는 sign이 비트에 포함되므로 16비트 signed integer는 2^15-1=32,767까지 표현할 수 있음.<br>
반면 unsigned integer는 부호를 나타내는 비트가 없으므로 16비트는 2^16-1=65,525까지 표현할 수 있음.<br>
unsigned integer는 시스템 프로그래밍, low 레벨, 기계 종속적 어플리케이션에 할당됨.<br>

**int의 6가지 타입**<br>

<pre>
short int<br>
unsigned short int<br>
int<br>
unsigned int<br>
long int<br>
unsigned long int<br>
</pre>

unsigned long이나 long unsigned나 의미는 똑같음. 즉 순서는 상관이 없음.<br>
int를 생략하여 사용할 수도 있음.<br>
16비트 컴퓨터에서는 short int와 int는 16비트, long int는 32비트임.<br>
32비트 컴퓨터에서는 short int가 16비트, int와 long int가 32비트임.<br>
64비트 컴퓨터에서는 short int가 16비트, int가 32비트, long int가 64비트임.<br>
이는 C standard에서 정한 사항은 아니며 컴파일러마다 다를 수 있음.<br>
타입별 range를 알기 위해서는 <limits.h> 헤더를 쓸 수 있음. <limits.h>에서는 macro로 각 타입별 min 값과 max의 값을 정의해놓음.<br>

**C99에서의 int타입**<br>

C99은 long long int와 unsigned long long int를 지원함.<br>
long long은 64비트 이상의 환경에서만 사용이 가능함.<br>
long long int는 -2^63에서 2^63-1까지, unsigned long long int는 0에서 2^64-1까지 표현할 수 있음.<br>
C99에서 standard signed integer types는 unsigned short int, unsigned int, unsigned long int, unsigned long long int와 unsigned char, _Bool이 있음.<br>
standard는 아니지만 extended integer types도 있음. extended integer types는 signed와 unsigned 둘 다 있으며, 128비트 정수까지 지원함.<br>

**정수형 상수**<br>

decimal, octal, hexadecimal 총 3가지가 있음.<br>
octal은 0으로 시작하고, hexadecimal은 0x로 시작함.<br>
hexadecimal에서 영어 철자는 소문자이든 대문이자이든 상관없음.<br>
어떤 진법을 사용하든 간에 컴퓨터는 이를 2진수로 인식하고 처리하며, 따라서 섞어서 사용하는 것도 가능함.<br>
octal과 hexadecimal은 low level 프로그램에 유용함.<br>
10진법과 다르게 8진법, 16진법은 long 타입은 숫자 뒤에 L, unsigned는 U를 붙임.<br>
L과 U를 둘 다 붙일 수도 있으며, 순서는 상관이 없음.<br>

**C99에서의 정수형 상수**<br>

C99에서 정수형 상수 long long int는 LL혹은 ll로 끝나야함. 이 때, 두 개의 철자간 대소문자는 동일해야함.<br>
U혹은 u를 더하면 unsigned가 됨.<br>
접미사를 붙이지 않는 10진수 정수형 상수는 int, long int, long long int 중 값을 표현할 수 있는 가장 작은 타입을 선택해야 함.<br>
그러나 8진수, 16진수는 int, long int, long long int, unsinged를 붙이거나 안 붙이는 등 6가지 타입 모두 선택이 가능함.<br>
접미사에 u가 붙으면 u가 붙은 3가지 유형만 가능해짐.<br>
l로 끝나면 long int, long long int 둘 중 하나만 가능해짐.<br>
6가지 유형 중 하나로 표현하기에 너무 큰 상수는 extended inter type으로 배정해줄 수 있음.<br>

**integer 오버플로우**<br>

계산을 하다보면 해당 타입이 표현할 수 있는 수보다 큰 수가 나올 수 있음.<br>
signed인지 unsigned인지에 따라 결과가 다름.<br>
signed인 경우 오버플로우 발생시 어떤 결과가 나올지 defined되어, 예상과 다른 결과가 나오거나 프로그램이 충돌할 수 있음.<br>
unsigned의 경우 해당 타입이 가질 수 있는 비트 수 n을 이용하여 2^n으로 나눈 나머지를 결과값으로 나타냄. 즉 65,535+1의 결과는 0임.<br>

**타입별 format string**

unsigned된 10진수는 u, 8진수는 o, 16진수는 x를 사용함.<br>
short 타입은 d, u, o, x앞에 h를 붙임.<br>
long 타입은 d, u, o, x앞에 l를 붙임.<br>
C99에서 long long 타입은 d, u, o, x 앞에 ll을 붙임.<br>

**:pushpin: 실수 타입**
  
실수 타입은 다음 3가지로 나눠짐. float(single precision floating point), double(double precision floating point), long double(extended precision floating point).<br>
C는 각각이 얼마나 정확한지 기준을 세우지는 않음. 따라서 컴퓨터마다 다른 방식으로 precision을 저장할 수도 있음.<br>
IEEE standard에 따르면 float은 가장 작은 양수는 1.17549 * 10^(-38), 가장 큰 수는 3.40282 * 10^38까지 표현할 수 있으며, precision을 나타내는 digit은 6개임.<br>
double은 가장 작은 양수는 2.22507 * 10^(-308), 가장 큰 수는 1.79769 * 10^(308)까지 표현할 수 있으며, precision을 나타내는 digit은 15개임.<br>
long double은 컴퓨터마다 length가 달라서 따로 기재하지 않겠음.<br>
  
**IEEE Floating Point Standard**<br>
  
single precision(32 bits)와 double precision(64 bits) 두 가지가 있음.<br>
실수는 sign, exponent, fraction 총 3가지 부분으로 구성되어 있음.<br>
single precision은 exponent가 8비트, fraction이 23비트로 구성되어 있어 최대 3.40*10^38까지 표현할 수 있음.<br>
single extended precision과 double extended precision도 있음.<br>
각각에 몇 비트가 허용되는지 기준이 있는 건 아니지만, 전자는 최소 43비트, 후자는 최소 79비트로 정해놓음.<br>
IEEE standard를 따르지 않는 컴퓨터에는 이 기준이 적용되지 않음.<br>
일부 컴퓨터에서는 float이 double이랑 같은 범위, double이 long double이랑 같은 범위를 표현할 수도 있음.<br>
<float.h> 헤더를 floating type들의 특성을 macro로 확인해볼 수 있음.<br>
C99에서는 float, double, long double은 real floating tyeps라고 하고, float_complex, double_complex, long double_complex는 complex tyep라고 함.<br>
  
**실수의 표현은 어떻게 할까?**<br>
  
13은 1101로 표현할 수 있고, 0.75는 0.5 + 0.25이므로 0.11로 표현할 수 있음.<br>
0.3은 0.01001100110011....(0011)의 무한 반복인데 이렇게 2진수로 표현하지 못 하는 소수가 발생함.<br>
컴퓨터에서는 어쩔 수 없이 표현할 수 있는 가장 근사치의 값이 저장됨.<br>
이 때, 고정 소수점 방법과 부동 소수점 방법을 사용할 수 있음.<br>
  
**고정 소수점**<br>
  
정수를 표현하는 비트 수와 소수를 표현하는 비트 수를 미리 정해놓고 해당 비트만큼만 사용해서 숫자를 표현함.<br>
실수 표현에 4바이트(32비트)를 사용하고 그 중 부호 1비트, 정수 16빝, 소수 15비트를 사용해놓은 시스템에서는 263.3을 (0)0000000100000111.010011001100110으로 표현함.<br>
정수를 표현하는 bit를 늘리면 큰 숫자를 표현할 수 있지만, 정밀한 숫자를 표현하기 힘듬.<br>
소수를 표현하는 bit를 늘리면 정밀한 숫자르 표현할 수 있지만 큰 숫자를 표현하기 힘듬.<br>
따라서 소수점을 고정하지 않고 유동적으로 활용할 수 있도록 부동 소수점이 필요한 것임.<br>
  
**부동 소수점**<br>
  
263.3은 100000111.010011001100110..인데 부호 1비트, 지수(exponent) 8비트, 가수(fraction) 23비트인 경우 이를 진수 부동 소수점 방식으로 변환하면 1.00000111010011001100110... * 2^8으로 표현할 수 있음.<br> 
부호 비트(1비트): 0(양수) 
지수 비트(8비트): 2^8의 8을 지수라고 하고 지수 비트 부분에 기록하는데 127+지수의 형식으로 기록함. 따라서 10000111(127+8=135)임.<br>
가수 비트(23비트): 00000111010011001100110

**floating constant**<br>
  
57.0 57. 57.0e0 57E0 5.7e1 5.7e+1 .57e2 570e-1 이 숫자들은 모두 다 같은 constant를 가르킴.<br>
floating constant는 소수점 혹은 exponent를 반드시 포함해야 함.<br>
exponent는 E나 e로 쓰고, +나 -는 e다음에 쓰며 붙일 때도 있고 안 붙일 때도 있음.<br>
floating constant는 default로 double-precision number로 저장됨.<br>
double은 float으로 전환이 가능한데 single precision이 필요할 때에는 끝에 f나 F를 붙이고, long double로 쓰고 싶으면 l이나 L을 붙임.<br>
C99에서 16진수의 floating constant를 표현하고 싶으면 맨 앞에 0x나 0X를 붙임.<br>
  
**타입별 format string**<br>
  
single precision에서는 그대로 %e, %f, %g를 쓰면 됨.<br>
double에서는 e, f, g앞에 l을 붙임.<br>
이건 scanf에서만 붙이고, printf에서는 붙이지 않음.<br>
그러나 C99에서는 printf에서도 붙여도 문제가 없음.<br>
long double에서는 e, f, g앞에 L을 붙임.<br>
scanf와 printf 모두 동일함.<br>
  
**:pushpin: 문자 타입**
  
char의 값은 컴퓨터마다 다를 수 있음. 이는 컴퓨터마다 다른 character set을 갖기 때문임.<br>
가장 유명한 character set은 ASCII임. ASCII는 7비트로 128개의 문자를 나타내는데, 46-57은 0-9를, 65-88은 A-Z를 나타냄.<br>
이를 256개의 문자로 확장시킨 것이 Latin-1인데, 서유럽과 아프리카 언어를 추가한 버전임.<br>
char는 ASCII 코드에 지정된 1개의 글자는 뭐든 들어갈 수 있음. 예를 들어 char='a'; char='0'; char=' '; 등임.<br>
''로 감싸야 하고 ""는 안 됨.<br>

**character의 연산**<br>
  
C는 character를 int로 취급함.<br>
<pre>
char ch;
  
ch = 65; /* ch is now 'A' */
ch = ch + 1; /* ch is now 'B' */
ch++; /* ch is now 'C' */
</pre>
character는 당연히 비교할 수도 있음.<br>
소문자를 대문자로 바꾸는 코드는 아래와 같음.<br>
<pre>
if ('a' <= ch && ch <= 'z')
  ch = ch -'a' + 'A';
</pre>
  
**signed and unsigned characters**<br>
  
char는 int로 취급되기 때문에 역시 signed와 unsigned가 있음. signed는 -128-127, unsigned는 0-255임.<br>
C standard는 char가 signed여야 하는지 unsinged여야 하는지 따로 규정해놓지 않음. 따라서 컴파일러마다 처리하는 방식이 다름.<br>
사실 signed인지 unsigned인지는 중요하지 않지만 이를 따로 지정해주고 싶으면 signed char a; unsinged char a;와 같이 써줌.<br>
C89에서는 character types, interger types, enumerated types를 묶어서 integral types로 생각함.<br>
C99에서는 integral types란 말을 쓰지 않고, integer types를 확대해서 character types와 enumerated types를 묶어서 생각함.<br>
  
**Arithmetic Types in C89**<br>
  
Integral Types: char, signed integer types(char, short int, int, long int), unsigned integer types(char, short int, int, long int), enumerated types<br>
Floating Types: float, double, long double<br>
  
**Arithmetic Types in C99**<br>
  
Integer Types: char, sigend integer types both standard(char, short int, int, long int, long long int) and extended, unsigned integer types both standard(char, short int, int, long int, long long int, _Bool) and extended, enumerated types<br>
Floating Types: real floating types(float, double, long double), complex types(float_Complex, double_Complex, long double_Complex)<br>
  
**Escape Sequences**<br>
  
escape sequences는 character escape와 numeric escape 두 가지가 있음.<br>
character escapes는 Alert(\a), Backspace(\b), Form feed(\f), New line(\n), Carriage return(\r), Horizontal tab(\t), Vertical tab(\v), Backslash(\\), Question mark(\?), Single quote(\'), Double quout(\")이 있음.<br>
character escapes는 편리하지만, ASCII characterset에 있는 모든 문자를 다 표현할 수는 없음.<br>
반면에 numeric escapes를 쓰면 ASCII characterset에 있는 어떤 문자도 다 표현할 수가 있음.<br>
nemeric escape는 octal이나 hexadecimal로 표현함.<br>
octal은 \다음에 octal 숫자를 쓰고 3개의 digit까지 허용됨. unsigned character를 기준으로 377까지 되는 것임. octal이라고 해서 반드시 0으로 시작해야 하는 것은 아니고, 0은 있어도 되고 없어도 됨. \33과 \033은 같음.<br>
hexadecimal은 \x 다음에 hexadecimal 숫자를 씀. 마찬가지로 unsigned character의 경우 \xFF가 최대임. x는 소문자여야 하고, hexadecimal 숫자에 있는 알파벳은 소문자여도 되고, 대문자여도 됨.<br>
escape sequence를 character constant로 쓰고 싶을 때는 char a = '\33'과 같이 ''를 사용해줌.<br>
escape sequence를 macro하게 사용하는 방법도 있음. #define ESC '\33'<br>
escape sequence 뿐만 아니라 trigraph sequence(삼중자)도 문자를 대신할 수 있음.<br>
#, [, \, ], ^, {, |, } 등이 있는데 예를 들어 ??<는 {, ??>는 }임.<br>
삼중자는 키보드 위에 표현하고 싶은 문자가 없는 경우 이를 대체하여 사용하기 위해 존재함.<br>

**ch
