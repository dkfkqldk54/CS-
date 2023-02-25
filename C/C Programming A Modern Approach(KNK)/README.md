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
- 형변환
- typedef
- sizeof

<a href="#8">:pencil2: Chapter 8. Arrays</a>
- 1차원 배열
- 다차원 배열
- 가변 길이 배열

<a href="#9">:pencil2: Chapter 9. Functions</a>
- 함수의 정의 및 호출
- 함수 선언
- Arguments
- return문
- 프로그램 종료
- 재귀

<a href="#10">:pencil2: Chapter 10. Program Organization</a>
- 지역 변수
- 전역 변수
- block과 scope

<a href="#11">:pencil2: Chapter 11. Pointers</a>
- 포인터 변수
- 주소와 indirection operator
- 포인터 argument
- return에 포인터

<a href="#12">:pencil2: Chapter 12. Pointers and Arrays</a>
- 포인터 산술
- 배열에서의 포인터 활용
- 포인터와 다차원 배열
- 포인터와 가변 길이 배열

<a href="#13">:pencil2: Chapter 13. Strings</a>
- String Literals
- String 변수
- String 읽기, 쓰기
- String 원소 접근
- String 라이브러리
- String 배열

<a href="#14">:pencil2: Chapter 14. The Preprocessor</a>
- Preprocessing Directives
- Macro Definitions
- 조건부 Compilation
- 다양한 Directives

<a href="#15">:pencil2: Chapter 15. Writing Large Programs</a>
- 헤더 파일

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
unsigned integer는 시스템 프로그래밍, low 레벨, 기계 종속적 어플리케이션에서  쓰임.<br>

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
C99에서 standard unsigned integer types는 unsigned short int, unsigned int, unsigned long int, unsigned long long int와 unsigned char, _Bool이 있음.<br>
C99에서 standard signed integer types는 short int, int, long int, long long int, signed char가 있음.
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
그러나 8진수, 16진수는 int, long int, long long int에 unsinged를 붙이거나 안 붙이는 등 6가지 타입 모두 선택이 가능함.<br>
접미사에 u가 붙으면 u가 붙은 3가지 유형만 가능해짐.<br>
l로 끝나면 long int, long long int 둘 중 하나만 가능해짐.<br>
6가지 유형 중 하나로 표현하기에 너무 큰 상수는 extended inter type을 배정해줄 수 있음.<br>

**integer 오버플로우**<br>

계산을 하다보면 해당 타입이 표현할 수 있는 수보다 큰 수가 나올 수 있음.<br>
signed인지 unsigned인지에 따라 결과가 다름.<br>
signed인 경우 오버플로우 발생시 어떤 결과가 나올지 undefined되어, 예상과 다른 결과가 나오거나 프로그램이 충돌할 수 있음.<br>
unsigned의 경우 해당 타입이 가질 수 있는 비트 수 n을 이용하여 2^n으로 나눈 나머지를 결과값으로 나타냄. 즉 65,535+1의 결과는 0임.<br>

**타입별 format string**

unsigned된 10진수는 u, 8진수는 o, 16진수는 x를 사용함.<br>
short 타입은 d, u, o, x앞에 h를 붙임.<br>
long 타입은 d, u, o, x앞에 l를 붙임.<br>
C99에서 long long 타입은 d, u, o, x 앞에 ll을 붙임.<br>
o와 x가 unsigned int를 다루지만 signed int도 다룰 수 있음.<br>
다만 signed int가 양수여야 함. 이는 signed int도 unsigned int처럼 다루기 때문에 맨 앞 비트가 0이면 문제가 없고, 1이면 값이 엄청 커지기 때문임.<br>
그럼에도 불구하고 -를 출력하고 싶으면 직접적으로 할 수 있는 방법은 없고 if문을 추가해줘야 함.<br>
<pre>
  if (i<0)
    printf("-%x", -i);
  else
    printf("%x", i);
</pre>

**:pushpin: 실수 타입**
  
실수 타입은 다음 3가지로 나눠짐. float(single precision floating point), double(double precision floating point), long double(extended precision floating point).<br>
C는 각각이 얼마나 정확한지 기준을 세우지는 않음. 따라서 컴퓨터마다 다른 방식으로 precision을 저장할 수도 있음.<br>
IEEE standard에 따르면 float에서 가장 작은 양수는 1.17549 * 10^(-38), 가장 큰 수는 3.40282 * 10^38까지 표현할 수 있으며, precision을 나타내는 digit은 6개임.<br>
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
<float.h> 헤더로 floating type들의 특성을 macro로 확인해볼 수 있음.<br>
C99에서는 float, double, long double은 real floating tyeps라고 하고, float_complex, double_complex, long double_complex는 complex tyep라고 함.<br>
  
**실수의 표현은 어떻게 할까?**<br>
  
13은 1101로 표현할 수 있고, 0.75는 0.5 + 0.25이므로 0.11로 표현할 수 있음.<br>
0.3은 0.01001100110011....(0011)의 무한 반복인데 이렇게 2진수로 표현하지 못 하는 소수가 발생함.<br>
컴퓨터에서는 어쩔 수 없이 표현할 수 있는 가장 근사치의 값이 저장됨.<br>
이 때, 고정 소수점 방법과 부동 소수점 방법을 사용할 수 있음.<br>
  
**고정 소수점**<br>
  
정수를 표현하는 비트 수와 소수를 표현하는 비트 수를 미리 정해놓고 해당 비트만큼만 사용해서 숫자를 표현함.<br>
실수 표현에 4바이트(32비트)를 사용하고 그 중 부호 1비트, 정수 16비트, 소수 15비트를 사용해놓은 시스템에서는 263.3을 (0)0000000100000111.010011001100110으로 표현함.<br>
정수를 표현하는 bit를 늘리면 큰 숫자를 표현할 수 있지만, 정밀한 숫자를 표현하기 힘듬.<br>
소수를 표현하는 bit를 늘리면 정밀한 숫자를 표현할 수 있지만 큰 숫자를 표현하기 힘듬.<br>
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
  
**16진수에서의 floating constant**<br>
  
C99에서 16진수의 floating constant를 표현하고 싶으면 맨 앞에 0x나 0X를 붙임.<br>
숫자 뒤에는 p나 P가 붙고, 그 뒤에는 exponent가 따라옴.<br>
exponent는 sign을 포함하고 있으며, float으로 바꾸고 싶을 때는 f나 F, long double로 바꾸고 싶을 때는 l이나 L로 끝맺음.<br>
0x1.Bp3은 1.6865 * 2^3 = 13.5임.<br>
B는 1101을 나타내어 0.6875임.<br>
hexadecimal floating constant는 높은 precision이 필요할 때 쓰임.<br>
이는 hexadecimal이 2진수 체계에 들어맞기 때문임.<br>
그에 반해 10진수는 2진수로 바꿀 때 rounding을 하면서 미세한 오차가 발생함.<br>
<float.h>에 있는 양극의 macro 값들을 정의할 때도 유리한데, 10진수보다는 16진수로 표현하는 것이 더 편하기 때문임.<br> 
  
**타입별 format string**<br>
  
single precision에서는 그대로 %e, %f, %g를 쓰면 됨.<br>
double에서는 e, f, g앞에 l을 붙임.<br>
이건 scanf에서만 붙이고, printf에서는 붙이지 않아도 됨.<br>
이는 scanf는 변수를 저장할 때 타입을 명시한 대로 저장해주지만, printf는 float을 자동으로 double로 바꾸기 때문임.<br>
따라서 printf는 float과 double을 구분할 수 없음.<br>
C99에서는 printf에서도 l을 붙일 것을 권고하지만 실제로 작동되는 방식은 C89과 동일함.<br>
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
char에서 overflow가 발생할 경우 처음부터 다시 돌아서 더해줌. 예를 들어 char = 128;을 배정해놓으면 실제로 저장되는 값은 -128이고, char = 130;은 -126임.<br>
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
원래 새로운 줄로 바꾸기 위해서는 CR+LF가 필요하지만, C는 UNIX 계통의 언어이므로 LF(\n)만으로 줄바꿈을 표현함.<br>
character escapes는 편리하지만, ASCII characterset에 있는 모든 문자를 다 표현할 수는 없음.<br>
반면에 numeric escapes를 쓰면 ASCII characterset에 있는 어떤 문자도 다 표현할 수가 있음.<br>
nemeric escape는 octal이나 hexadecimal로 표현함.<br>
octal은 \다음에 octal 숫자를 쓰고 3개의 digit까지 허용됨. unsigned character를 기준으로 377까지 되는 것임. octal이라고 해서 반드시 0으로 시작해야 하는 것은 아니고, 0은 있어도 되고 없어도 됨. \33과 \033은 같음.<br>
hexadecimal은 \x 다음에 hexadecimal 숫자를 씀. 마찬가지로 unsigned character의 경우 \xFF가 최대임. x는 소문자여야 하고, hexadecimal 숫자에 있는 알파벳은 소문자여도 되고, 대문자여도 됨.<br>
escape sequence를 character constant로 쓰고 싶을 때는 char a = '\33'과 같이 ''를 사용해줌.<br>
escape sequence를 macro하게 사용하는 방법도 있음. #define ESC '\33'<br>
escape sequence 뿐만 아니라 trigraph sequence(삼중자)도 문자를 대신할 수 있음.<br>
#, [, \, ], ^, {, |, } 등이 있는데 예를 들어 ??<는 {, ??>는 }임.<br>
컴파일러는 ??가 string에 들어가면 trigraph의 입력이 시작된다고 받아들이는데, trigraph가 시작되는 것이 아니라고 알리기 위해 두 번째 ? 대신 \?를 넣는다.<br>
삼중자는 키보드 위에 표현하고 싶은 문자가 없는 경우 이를 대체하여 사용하기 위해 존재함.<br>

**Character Handling Functions**<br>

library function을 쓰면 쉬운데 대표적으로 toupper가 있음.<br>
ch = toupper(ch)를 해주면 ch가 소문자면 대문자로 바꿔주고, 아니면 ch가 그대로 나옴.<br>
#include <ctype.h>를 추가해주면 사용이 가능함.<br>

**scanf와 printf**<br>

<pre>
scanf("%c", &ch);
printf("%c", ch);
</pre>

숫자와는 달리 %c를 받기 전에 들어오는 공백은 무시하지 않음. (공백)문자가 들어오는 경우 ch에 공백이 들어감.<br>
white space를 무시하기 위해서는 scanf(" %c", &ch);로 써줘야함.<br>

**getchar와 putchar**<br>

putchar는 printf와 비슷하며 putchar(ch);로 씀.<br>
getchar는 scanf와 비슷하며, 마찬가지로 white space를 무시하지 않음.<br>
getchar는 char가 아니라 int를 리턴함. 따라서 int 타입으로 저장되어야 함.<br>
putchar와 getchar는 printf와 scanf보다 빠른데, printf와 scanf는 int 말고도 여러 타입의 변수를 쓰고 있기 때문임.<br>
getchar와 putchar는 반복문을 돌릴 때도 좋음. getchar 그 자체가 값을 리턴하기 때문임.<br>
<pre>
do {
  scanf("%c", &ch);
} while (ch != '\n');

while (getchar() != '\n')
</pre>
do while 반복문과 while 반복문은 같은 결과를 도출함.<br>
scanf와 getchar를 같이 쓸 때는 주의해야 함. scanf는 입력으로 받은 값의 나머지를 다 남기는 특성이 있기 때문임.<br>
<pre>
printf("Enter an integer: ");
scanf("%d", &i);
printf("Enter a command: ");
command = getchar();
</pre>
숫자를 입력하고 엔터를 누르면, 엔터의 \n이 command에 담김.<br>

**:pushpin: 형 변환**

컴퓨터는 bit가 다르거나 type이 다르면 산술 연산을 할 수가 없음.<br>
그러나 C는 bit가 다르거나 tyep이 달라도 계산을 할 수가 있는데, 이는 피연산자의 type을 변환시켜서 하드웨어가 expression을 evaluate 할 수 있게 되기 때문임.<br>
예를 들어 16비트 short와 32비트 int를 계산할 때는 short를 32비트로 바꾸고, int와 float을 계산할 때는 int를 float으로 바꿈.<br>
프로그래머 개입없이 컴파일러가 알아서 하는 변환을 implicit conversions라고 함.<br>
반면 프로그래머가 개입하는 변환을 explicit conversions라고 하는데, 이는 cast operator(변환 연산자)를 통해 이루어짐.<br>

**The Usual Arithmetic Conversions**<br>

The Usual Arithmetic Conversions는 대부분의 2항 연산자에게 적용이 됨.<br>
두 개의 피연산자를 모두 수용할 수 있는 type 중 가장 narrow한 것으로 형을 전환함.<br>
narrow하다는 것은 적은 수의 byte를 수용할 수 있다는 의미임.<br>
The Usual Arithmetic Conversions는 2가지 종류가 있음.<br>

1. 피연산자 둘 중 하나가 실수<br>

float -> double -> long double<br>
int랑 float 계통이 같이 쓰이면 float 계통으로 통일하고, float 계통끼리 같이 있어도 더 높은 형으로 변환됨.<br>

2. 피연산자에 실수가 없는 경우<br>
int -> unsigned int -> long int -> unsigned long int<br>
character나 short int가 없다고 가정했을 때 저기 중 높은 타입으로 통일됨.<br>
long int와 unsinged int가 32비트로 동일한 길이를 가질 때, 둘이 같이 있는 경우 unsigned long int로 바꿈.<br>

**signed와 unsigned가 같이 쓰일 때**<br>

signed와 unsigned가 같이 쓰일 때는 signed가 unsigned로 바뀜.<br>
int인 -10과 unsigned인 10을 비교할 때 i<u는 1이 아님.<br>
i를 unsigned로 바꿀 때 unsigned int가 가질 수 있는 최댓값인 4,294,967,295에 더해 4,294,967,285가 되기 때문에 0이 됨.<br>
따라서 unsigned는 가능하면 적게 사용하는 것이 좋음.<br>

**Promotion**<br>

promotion은 narrow한 타입을 다른 피연산자의 타입으로 바꾸는 것을 의미함.<br>
integral promotion(정수 승격)은 원래 타입이 가질 수 있는 값을 초과할 수 있는 경우에 unsigned int로 바꾸는 것을 의미함.<br>
char와 short int는 거의 대부분 unsigned int로 바뀜.
<pre>
char a, b;
printf("%d %d", sizeof(a), sizeof(b)); /* 1 1 */
printf("%d", sizeof(a+b)); /* 4 */
</pre>

**Conversion During Assignment**<br>

대입을 할 때는 The Usual Arithmetic conversion이 적용이 안 됨.<br>
대입 시에는 오른쪽 피연산자의 타입을 왼쪽 피연산자의 타입에 맞춤.<br>
<pre>
char c;
int i;
float f;
double d;

i = c; /* c is converted to int */
f = i; /* i is converted to float */
d = f; /* f is converted to double */
</pre>

int 타입에 float 값을 집어넣으면 값이 잘림.<br>

<pre>
int i;

i = 842.97; /* i is now 842 */
i = -842.97; /* i is now -842 */
</pre>

narrow한 타입에 소화할 수 없는 범위의 값을 집어넣으면 오류가 생김.<br>

<pre>
c = 10000;
i = 1.0e20;
f = 1.0e100;
</pre>

f = 3.141592f;와 같이 부동소수점 상수에 f를 추가하는 것이 좋음.
f를 추가하지 않으면 우변이 double로 처리되어 경고 메시지가 출력될 수 있음.<br>

**Implicit Conversions in C99**<br>

C99은 _Bool, long long types, extended integer types, complex types가 있어서 C89이랑 약간 다름.<br>
integer conversion rank는 아래와 같음.<br>
1. long long int, unsigned long long int<br>
2. long int, unsigned long int<br>
3. int, unsigned int<br>
4. short int, unsigned short int<br>
5. char, signed char, unsigned char<br>
6. _Bool<br>

extended integer types와 enumerated types는 제외한 순위임.<br>
C89이 integral promotions였다면, C99은 integer promotion임.<br>
integer promotions는 int와 unsigned int보다 순위가 낮은 타입은 int 혹은 unsigned int로 변환됨.<br>

**The Usual Arithmetic Conversion in C99**<br>

1. 둘 중 하나가 실수인 경우<br>

둘 중 하나라도 complex type인 경우를 제외하고서는 C89과 동일함.<br>

2. 실수가 없는 경우<br>

integer promotion을 실행하고, 두 피연산자가 type이 같아지면 끝.<br>
그렇지 않으면 다음 rule를 적용함.<br>

- 둘 다 signed이거나 unsigned인 경우. 낮은 rank를 가진 피연산자를 높은 rank를 가진 피연산자의 타입으로 바꿔줌.<br>
- unsigned의 rank가 signed보다 크거나 같으면 signed를 unsigned의 type에 맞춰줌.<br>
- signed가 unsigned의 값을 다 표현할 수 있으면 unsigned를 signed의 type에 맞춰줌.<br>
- 위 셋 모두가 다 아니면 signed 피연산자의 타입에 부합하는 unsigned type으로 둘 다 바꿔줌.<br>

**casting**<br>

implicit conversions를 넘어서 tyep conversion을 하고 싶을 때는 cast를 사용함.<br>
기본 포맷은 (type-name) expression임. 
<pre>
float f, frac_part;
frac_part = f - (int) f;
</pre>
f의 소수점 이하 자리를 뽑아내기 위한 코드임.<br>
(int) f는 int로 바뀌었다가 0를 수행하기 전 float이 되어서 계산됨.<br>
<pre>
float quotient;
int dividend, divisor;

quotient = dividend / divisor;
</pre>
이러면 제대로 된 fraction을 얻을 수가 없으므로 dividend 혹은 divisor 앞에 (float)을 붙여야 함. 둘 중 하나만 붙여도 나머지는 자동으로 형 변환이 됨.<br>
<pre>
long i;
int j = 1000;
i = j * j;
</pre>
j * j가 1,000,000이고 i가 long이니까 overflow가 일어나지 않을 것 같지만 일어남.<br>
j*j가 return될 때 int형이기 때문에 1,000,000을 받아낼 수가 없기 때문임.<br>
따라서 j앞에 (long)을 붙여주면 overflow가 일어나지 않음.<br>

**:pushpin: typedef**

<pre>
#define BOOL int
typedef int Bool;
</pre>

BOOL을 정의하기 위해 macro definition을 썼지만, typedef를 쓸 수도 있음.<br>
typedef에서는 정의하고자 하는 타입을 맨 마지막에 써줌.<br>
맨 앞에만 대문자로 써주는 것이 관례임.<br>
typedef를 하고 나면 컴파일러가 타입 목록에 해당 타입을 등록시켜줘서 변수 선언, casting 등 다른 타입과 똑같이 써줄 수 있음.<br>
<pre>
Bool flag;
</pre>
물론 int랑 같은 기능을 가짐.<br>

**typedef의 장점**<br>

<pre>
typedef float Dollars;
Dollars cash_in, cash_out;

float cash_in, cash_out;
</pre>
전자가 후자보다 이해하기가 쉬움.<br>
수정하기도 쉬움.<br>
float을 double로 바꾸고 싶을 때 typedef double Dollars;를 쓰면 Dollars로 정의한 다른 변수들도 모두 double로 바뀌게 됨<br>

**typedef의 약점**<br>

프로그램 이식성에 있어서 typedef는 중요한데, 타입이 가지고 있는 범위가 컴퓨터마다 다르기 때문임.<br>
0-50,000의 범위를 가지고 있는 q가 있다고 가정하자.
<pre>
typedef int Quantity;
Quantity q;
</pre>
int로 다 담을 수 없는 컴퓨터로 옮겼을 때는 typedef long Quantity;로 type을 바꿔주면 됨.<br>
그러나 scanf나 printf에 있는 %d를 %ld로 바꿀 수는 없어서 모든 문제가 다 해결되는 것은 아님.<br>
C 라이브러리에서는 implementation마다 다른 type의 이름을 정하기 위해 typedef를 사용함.<br>
이런 경우 이름의 끝이 _t로 끝남.<br>
<pre>
typedef long int ptrdiff_t;
typedef unsigned long int size_t;
typedef int wchar_t;
</pre>
C99에서는 <stdint.h> 헤더를 쓰면 bit에 따른 int를 정의한 typedef가 있음.<br>
int32_t는 32비트에서의 signed integer를 표현하기 위함임.<br>

**typedef와 macro의 차이**<br>

typedef가 macro보다 더 강력함.<br>
<pre>
#define PTR_TO_INT int *
typedef int * ptr_to_int;

PTR_TO_INT a,b;
ptr_to_int c,d;
</pre>
macro에서는 a만 포인터가 되고 b는 int가 됨. 반면에 typedef에서는 c와 d 둘다 포인터로 지정됨.<br>
또한, typedef는 변수랑 똑같이 scope rule이 적용되어서 함수 내부에서 지정해준 내용은 함수 외부에서는 모르지만, macro는 어디서나 적용이 됨.<br>

**:pushpin: sizeof**

sizeof는 특정 type이 저장되는데 바이트 수를 얼마나 차지하는지 확인하기 위한 연산자임.<br>
sizeof(type-name)이 general form이며, 괄호 안에는 constants, variables, expression이 들어갈 수 있음.<br>
결과값으로 unsigned int가 나오고, 해당 타입에 필요한 바이트 수가 return됨. 예를 들어 sizeof(char)는 1임.<br>
sizeof i처럼 괄호를 써주지 않아도 되지만, sizeof는 unary 연산자이기 때문에 sizeof i+j는 sizeof (i) + j랑 똑같음. 따라서 괄호를 써주는 것이 더 명확함.<br>
sizeof의 값은 size_t라는 implementation defined type임.<br>
sizeof를 printf하기 전에 unsigned int에서 unsigned long int로 cast하고 출력하는 것이 더 안전함.(C89 기준 unsigned long int는 가장 큰 int 타입이기 때문임.)<br>
<pre>
printf("size of int i: %lu\n", (unsigned long) sizeof (int));
</pre>
C99에서 size_t에 unsigned long보다 큰 값이 배정될 수 있음.<br>
따라서 printf에서 따로 cast해주지 않아도 size_t의 값을 바로 보여줄 수 있는 방법이 있는데, conversion에 z를 넣는 것임.<br>
<pre>
printf("size of int: %zu\n", sizeof(int));
</pre>
sizeof의 값이 뭐가 될 것인지는 컴파일러가 판단하는데, C99에서는 한 가지 판단하기 어려운 케이스가 있음.<br>
가변 길이 배열의 사이즈임. 가변 길이 배열은 프로그램이 실행되면서 안에 있는 원소의 수가 계속 바뀌기 때문임.<br>

<h2><a id="8">:pencil2: Chapter 8. Arrays</a></h2>

**:pushpin: 1차원 배열**

array는 같은 type을 가진 데이터들의 집합임.<br>
int a[10];과 같이 array는 array에 들어갈 원소의 type과 수로 정의함.<br>
타입은 어떤 타입이 들어와도 상관이 없고, 배열의 길이는 integer constant면 다 괜찮음.<br>
배열의 길이는 중간에 수정될 수 있는데, 이는 macro definition을 통해 이루어짐.<br>
<pre>
# define N 10
...
int a[10]
</pre>

**Array Subscripting**<br>

배열의 원소에 접근하는 것을 subscripting 혹은 indexing 이라고 함.<br>
원소의 index는 항상 0부터 시작함.<br>
배열의 어떤 원소가 T타입이라면, 나머지 원소도 T타입으로 다루어짐.<br>
C에서는 subscript하는 범위에 제한을 두지 않아서, 범위가 넘어가버릴 수도 있음.<br>
범위가 넘어가면 예상치 못한 오류가 나타날 수 있음.<br>

<pre>
int a[10], i;

for (i=1; i<=10; i++)
  a[i] = 0;
</pre>
일부 컴파일러에서 i=10일 때 배열에 10을 위한 공간이 없어서 0으로 다시 돌아가서 무한 루프에 걸릴 수 있음.<br>

<pre>
a[i+j*10] = 0;
</pre>
위와 같이 integer expression으로 subscript 할 수도 있음.<br>

<pre>
i = 0;
while (i < N)
  a[i] = b[i++];
  
for (i=0; i < N; i++)
  a[i] = b[i];
</pre>
위와 같이 적으면 i의 연산 순서에 대한 오류 때문에 undefined behavior가 발생할 수 있음.<br>
따라서 아래와 같이 subscript에 있는 increment를 따로 빼서 적어주는 것이 좋음.<br>

**Array Initialization**<br>

array initializer는 constant expression이 들어있는 리스트임.<br>
<pre>
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int a[10] = {1, 2, 3, 4, 5, 6} /* 실제 결과는 {1, 2, 3, 4, 5, 6, 0, 0, 0, 0} */
</pre>

이 특성을 이용하여 0으로 가득찬 array를 손쉽게 만들 수 있음.<br>
<pre>
int a[10] = {0);
</pre>
initializer를 비우는 건 안 됨. 그래서 0을 넣어준 것임.<br>
array의 길이를 빼먹으면 initializer의 길이로 결정이 됨.<br>
<pre>
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
</pre>

**Designated Initializers**<br>

<pre>
int a[15] = {0, 0, 29, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 48};
int a[15] = { [2] = 29, [9] = 7, [14] = 48 };
</pre>
designator를 이용하면 위를 아래와 같이 표현할 수 있음.<br>
순서는 상관이 없으며 지정한 수 외에는 다 0으로 채워짐.<br>
괄호 안에 있는 숫자는 n개의 원소를 가지고 있는 array의 경우 0부터 n-1까지만 허용이 됨.<br>
array의 길이가 정의되지 않은 경우에는 designator 중 가장 큰 수를 기준으로 array의 길이가 결정이 됨.<br>

<pre>
int a[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};
</pre>
0번, 1번, 2번이 5, 1, 9이고 4번이 3, 5번이 7, 6번이 2, 8번이 6이란 뜻임.<br>
<pre>
int a[] = {4, 9, 1, 8, [0] = 5, 7};
int a[] = {5, 7, 1, 8}; 
</pre>
둘 다 같은 표현이며, 배열의 길이는 4임.<br>

**Using the sizeof Operator with Arrays**<br>

a[10]일 때 sizeof(a)는 40임.<br>
이는 각 원소를 4바이트로 가정하기 때문임.<br>
sizeof(a) / sizeof(a[0])는 array의 길이를 나타냄.<br>
<pre>
for (i=0; i < sizeof(a)/sizeof(a[0]); i++)
  a[i] = 0;
</pre>
이 때 sizeof(a) / sizeof(a[0])는 unsigned int이고 i는 int라서 오류가 발생할 수 있음.<br>
이를 위해 casting을 활용해서 (int) (sizeof(a) / sizeof(a[0]))와 같이 써줄 수 있음.<br>
macro를 활용할 수도 있음. 
<pre>
#define SIZE ((int) (sizeof(a) / sizeof(a[0]))
for (i=0; i < SIZE; i++)
  a[i] = 0;
</pre>

**:pushpin: 다차원 배열**

array는 다차원으로 쓸 수 있는데, 몇 차원이든 상관없음.<br>
<pre>
int m[5][9];
</pre>
5행 9열이라는 뜻임.<br>
m[i]는 i행 전체를 가리키는 말이고, m[i][j]는 i행 j열에 있는 원소를 가리키는 말임.<br>
m[i,j]로 쓰면 콤마가 연산자로 쓰여서 m[j]와 같음.<br>
C는 array를 row-major order로 저장함.<br>
0~8은 0번 row, 9~17은 1번 row, 36~44는 4번 row임.<br>
맨 앞에 const를 붙임으로써 수정 불가능한 array를 만들 수 있음.<br>

**Initializing a Multidimensional Array**<br>

<pre>
int m[3][3] = { {1, 1, 1}, {0, 1, 1}, {0, 0, 1} };
int m[3][3] = { {1, 1, 1} }; /* { {1, 1, 1}, {0, 0, 0}, {0, 0, 0} } */
int m[3][3] = { {1, 2}, {1, 2, 3}, {1} }; /* { {1, 2, 0}, {1, 2, 3}, {1, 0, 0} } */
int m[3][3] = { 1, 2, 3, 1, 2 }; /* { {1, 2, 3}, {1, 2, 0}, {0, 0, 0} } */
</pre>

C99에서는 designated initializer를 이용할 수 있음.<br>
<pre>
double ident[2][2] = { [0][0] = 1.0, [1][1] = 1.0 };
</pre>
저장되지 않는 수들은 0이 됨.<br>

**random 함수**<br>

<time.h>의 time 함수는 1970년 1월 0시 0분 0초 이후 경과된 초를 반환함.<br>
<stdlib.h>의 srand 함수는 C의 random number generator를 초기화시키는데 seed값에 따라서 초기화시킴.<br>
<stdlib.h>의 rand 함수는 random number generator에 따라서 random number를 생성함.<br>

<pre>
srand( (unsigend) time(NULL) );
rand();
</pre>

**:pushpin: 가변 길이 배열**

<pre>
scanf("%d", &n);
int a[n];
</pre>
VLA(Variable length array, 가변 길이 배열)은 컴파일 할 때가 아니라 프로그램 실행 중에 계산이 됨.<br>
괄호 안에 3*i + 5와 같이 expression이 들어가도 됨.<br>
multidimensional로 사용해도 됨.<br>
VLA은 static storage duration(정적 기억 존속 시간)은 아님.<br>
정적 기억 존속 시간은 프로그램이 실행되는 전체 시간 동안 존속되는 것을 의미함.<br>
또한 initializer를 가질 수 없음.<br>

**배열의 복사**<br>

<pre>
a = b; /* a and b are arrays */

for (i = 0; i < N; i++)
  a[i] = b[i];
</pre>
위는 illegal 아래는 legal임.<br>
for문보다 더 빨리 복사하는 방법은 <sting.h>의 memcpy(memory copy)를 사용하는 것임.<br>
memcpy는 byte를 옮기는 low level function임.<br>
memcpy(a, b, sizeof(a));<br>

<h2><a id="9">:pencil2: Chapter 9. Functions</a></h2>

**:pushpin: 함수의 정의 및 호출**

<pre>
double average(double a, double b)
{
  return (a+b)/2;
}
</pre>
average 앞에 있는 double은 return 타입임.<br>
double a, double b와 같이 parameter 앞에는 각각 따로 따로 타입을 명시해줘야 함.<br>
함수의 호출은 average(x,y)와 같이 씀.<br>
함수 호출 시 x/2, y/3등 argument expression이 들어갈 수 있음.<br>
함수는 main 함수 이전에 정의되어야 함.<br>

<pre>
void print_count(int n)
{
  printf("T minus %d and counting\n", n);
}
</pre>
void는 값을 return하지 않을 때 쓰는 return 타입임.<br>
body에 return이 없어도 되며, 쓰일 때는 print_count(i)와 같이 단독으로 쓰임.<br>

<pre>
void print_pun(void)
{
  printf("To C, or not to C: that is the question.\n");
}
</pre>
parameter 자리에 void가 들어가는 것은 argument를 받지 않겠다는 뜻임.<br>
출력할 때는 print_pun();과 같이 씀.<br>
argument가 없어도 ()는 적어줘야 함.<br>

**general form**<br>

<pre>
return-type function-name (parameters)
{
  declarations
  statements
}
</pre>
array를 return 할 수는 없음.<br>
return type을 명시하지 않았을 경우 C89에서는 int로 설정하고, C99에서는 illegal임.<br>
return type을 윗줄에 적어도 되는데, 이는 unsigned long int와 같이 return type이 길 경우 유용함.<br>
함수 내에서 선언된 변수는 함수 외부에서 수정하거나 접근하지 못 함.<br>
C89에서 declaration은 무조건 statement 앞에 나와야 했으나, C99에서는 해당 변수를 쓰기 전까지만 선언되면 상관없음.<br>

<pre>
void print_pun(void)
{
}
</pre>
함수를 아예 비워둘 수도 있는데, 나중에 채워넣을 함수를 표시하기 위해서 유용함.<br>

**function calls**<br>

()가 생략되면 function call이 되지 않음. 함수 이름만 쓰면 포인터를 가리키는 것에 불과하여 아무 효과가 없지만 legal이긴 함.<br>
호출된 후에 값이 어딘가에 저장되지 않을 경우, 그 값은 버려지게 되는데 이를 명시적으로 표시하기 위해서 void로 casting 해줌.<br>

<pre>
(void) printf("Hi");
</pre>

**:pushpin: 함수 선언**

함수 정의가 반드시 main 함수에 선행되어야 하는 것은 아님.<br>
뒤에 써줄 수도 있지만 main 함수에서 해당 함수를 먼저 마주칠 경우에는 아무 정보가 없는 상태임.<br>
implicit declaration으로 return 타입이 int일 것이라고 가정하고, argument는 default argument promotion으로 처리함.<br>
나중에 함수의 return type이 double인 것이 밝혀지는 등 implicit declaration이 정해놓은 것과 다르다는 것이 확인되면 오류가 남.<br>

**function declaration**<br>

함수를 main 함수에 선행해서 적어주는 것이 베스트이겠지만 불가능한 경우 function declaration을 활용함.<br>

<pre>
double average(double a, double b); /* declaration */

int main(void)
{
  double x, y;
  
  printf("Enter three numbers: ");
  scanf("%lf%lf", &x, &y);
  printf("Average of %g and %g: %g\n", x, y, average(x,y));
  
  return 0;
}

double average(double a, double b) /* definition */
{
  return (a+b) / 2;
}
</pre>
function declaration은 괄호 안이 비어있는 올드 버전(C89 이전)이 있는데, 이를 제외한 것이 function prototypes임.<br>
function prototype은 argument가 몇 개 들어가야 하는지, 타입이 뭔지, return 타입이 뭔지 다 명시해줌.<br>
argument의 이름은 명시해주지 않고, 타입만 명시해줘도 됨.<br>
argument의 이름을 정하지 않음으로써 macro와 이름이 겹쳐서 생기는 불상사 등을 방지할 수 있음.<br>

**:pushpin: Arguments**

parameter는 함수를 정의할 때 쓰이는 말이고, argument는 함수를 호출할 때 쓰이는 말임.<br>
parameter는 argument의 값을 복사해서 쓰므로, argument에 영향을 미칠 수 없음.<br>

**argument conversions**<br>

argument의 type이 parameter의 type과 일치하지 않아도 함수 호출이 가능함.<br>
prototype이 function call 이전에 있는 경우에는 parameter 타입에 맞게 argument 타입이 converted됨.<br>
function call 이전에 prototype이 없으면 default argument promotions가 진행됨.<br>
float은 double로, char와 short는 int로 바뀜.(C99의 integral promotions와 동일함.)<br>

<pre>
#include <stdio.h>

int main(void)
{
  double x = 3.0;
  printf("Square: %d\n", square(x));
  return 0;
}

int square(int x)
{
  return n*n;
}
</pre>
x는 double이므로 double이 double로 바뀌는 것은 아무 의미가 없고, int가 아니므로 함수 호출에 실패함.<br>
따라서 casting으로 타입을 바꿔줄 필요가 있음.<br>
<pre>
printf("Square: %d\n", square((int) x);
</pre>
그러나 C99에서는 애당초 declaration이나 definition이 없으면 에러가 뜸.<br>

**array arguments**<br>

array는 타입만 맞으면 수는 비워놔도 됨.<br>
<pre>
int f(int a[])
{
  ...
}
</pre>

array의 size를 활용하기 위해서 sizeof(a)/sizeof(a[0])을 활용하고 싶겠지만 적용하기 어려울 때도 있음.<br>
<pre>
int sum_array(int a[], int n)
{
  int i, sum = 0;
  for (i=0; i < n; i++)
    sum += a[i]
   return sum;
}
</pre>
위와 같이 사이즈를 parameter에 넣어서 사용하는 것이 좋음.<br>
그러나 size가 array의 size에 맞는지, 안 맞는지는 확인할 수 없음.<br>
array의 size보다 작은 경우에는 큰 문제가 되지 않지만, 넘치는 경우에는 에러가 발생할 수 있음.<br>

<pre>
void store_zeros(int a[], int n)
{
  int i;
  for (i=0; i < n; i++)
    a[i] = 0;
}
store_zeros(b, 100);
</pre>
다른 변수와 다르게 배열은 함수로 인해 값이 변할 수 있음.<br>
<pre>
int sum_two_dimensional_array(int a[][len], int n)
{
  ...
}
</pre>

1차원 배열과 다르게 다차원 배열의 경우 첫 번째 dimension 칸만 비워놓을 수 있음.<br>
C는 배열을 row-major order로 저장해놓는데, row를 몇 칸 단위로 끊을 지 미리 정해놔야 원소를 저장하는 포인터를 지정해줄 수 가 있어서 그런 것임.<br>

**(C99) Variable Length Array Parameters**

int sum_array(int a[], int n)은 n이 array의 사이즈일 것이란 보장이 없음.<br>
int sum_array(int n, int a[n])은 n이 array의 사이즈임.<br>
int sum_array(int a[n], int n)은 틀린 문장으로 배열의 크기를 선언하기 전에 n이 먼저 정의되어야 함.<br>

<pre>
int sum_array(int n, int a[n]);
int sum_array(int n, int a[*]);
int sum_array(int, int [*]);
int sum_array(int n, int a[]);
int sum_array(int, int a[]);
</pre>
위 prototype들은 다 똑같은 의미임.<br>
*는 앞의 숫자가 size라는 것을 명시적으로 보여주기 위해서 써주는 것이지 별 의미는 없음.<br>
숫자에 이름을 붙이지 않으면 들어온 순서대로 size에 들어감.<br>

<pre>
int concatenate(int m, int n, int a[m], int b[n], int[m+n]);
</pre>
size에 expression이 들어가도 됨.<br>
VLA를 사용하면 다차원 배열의 크기도 미리 정하지 않아도 됨.<br>

<pre>
int sum(int n, int m, int a[n][m]);
int sum(int n, int m, int a[*][*]);
int sum(int n, int m, int a[][m]);
int sum(int n, int m, int a[][*]);
</pre>
모두 같은 표현임.<br>

**static**<br>

<pre>
int sum_array(int a[static 3], int n);
</pre>
static 3은 array의 길이가 최소 3은 된다는 것을 의미함.<br>
multidimensional array의 경우 static은 첫 번째 괄호에만 쓸 수 있음.<br>

**compound literals**<br>

<pre>
int b[] = {3, 0, 3, 4, 1};
total = sum_array(b, 5);

total = sum_array( (int []) {3, 0, 3, 4, 1}, 5);
</pre>

위와 아래는 같은 표현이고, 아래는 compound literal을 활용한 것임.<br>
compound literal을 쓰면 array b를 따로 생성해주지 않아도 됨.<br>
array의 길이를 명시해주지 않으면 들어있는 원소의 개수에 맞춰 생성됨.<br>
initializer를 다 채워주지 않으면 나머지는 0으로 생성됨.<br>
(int [5]) {3, 2}은 (int [5]) {3, 2, 0, 0, 0}과 같음.<br>

<pre>
total = sum_array( (int []) {2*i, i+j, j*k}, 3);
</pre>

원소에는 expression이 들어가도 됨.<br>
배열을 고정시켜 놓고 싶으면 (const int[])와 같이 const를 붙여서 사용함.<br>

**:pushpin: return문**

<pre>
return expression;
</pre>

return n>=0?n:0;와 같이 사용해주는 것도 가능함.<br>
expression 타입이 return 타입과 일치하지 않는 경우, expression 타입이 return 타입으로 implicitly converted됨.<br>
return 타입이 void인 것은 return;와 같음.<br>
void 타입에서 return을 반드시 쓸 필요는 없음.<br>
body의 마지막 문장 수행 후에 자동으로 return이 됨.<br>
non-void는 C89에서는 return이 실패했는데 혹은 return 할 것이 없는데도 return 값을 활용하려고 하면 undefined behavior가 발생함.<br>
몇몇 컴파일러는 control reaches end of non void function이라는 오류 메시지를 전송함.<br>
C99에서는 non-void 함수에서 return expression이 없으면 아예 illegal임.<br>
main 함수에서도 return이 없으면 오류가 생기는데 return 0;을 해주면 해결이 되고, C99에서는 자동으로 0을 return해줘서 오류가 생기지 않음.<br>

**:pushpin: 프로그램 종료**

main 함수에도 return 타입이 있어야 함.<br>
main의 return 타입은 int임.<br>
이전 C 프로그램에서는 main 앞에 있는 int를 관행적으로 생략할 수 있었지만, C99에서는 그럴 수 없음.<br>
괄호 안에 있는 void를 생략하는 것은 legal임.<br>
main은 status code를 return함.<br>
이상이 없는 경우 0, 이상이 있는 경우 0이 아닌 숫자를 return함.<br>

**the exit function**<br>

exit은 main에서 return과 비슷함.<br>
<pre>
exit(0); /* moral termination return 0; */
exit(EXIT_SUCCESS); /* 위와 같은 값 */
exit(EXIT_FAILURE); /* abnormal termination return 1; */
</pre>

EXIT_SUCCESS와 EXIT_FAILURE는 <stdlib.h>에 marcro로 정의되어 있음.<br>
return은 main에 있을 때만 프로그램을 종료시키고, exit은 어느 함수에서 부르든 프로그램을 종료시킴.<br>

**:pushpin: 재귀**

<pre>
int power(int x, int n)
{
  if (n==0)
    return 1;
  else
    return x * power(x, n-1);
}

int power(int x, int n)
{
  return n==0?1:x*power(x,n-1);
}
</pre>
위 함수를 아래 함수처럼 줄여서 표현할 수 있음.<br>

**quicksort**<br>

<pre>
#include <stdio.h>
#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
  int a[N], i;
  printf("Enter %d numbers to be sorted: ", N);
  for (i=0; i < N; i++)
    scanf(%d", &a[i]);
    
  quicksort(a, 0, N-1);
    
  printf("\n sorted order: ");
    
  for (i=0; i < N; i++)
    printf("%d ", a[i]);
  printf("\n");
    
  return 0;
}
    
void quicksort(int a[], int low, int high)
{
  int middle;
    
  if (low >= high) return;
  middle = split(a, low, high);
  quicksort(a, low, middle-1);
  quicksort(a, middle+1, high);
}
    
int split(int a[], int low, int high)
{
  int part_element = a[low];
    
  for(;;) {
    while (low < high && part_element <= a[high]) high--;
    if (low >= high) break;
    a[low++] = a[high];
    
    while (low < high && a[low] <= part_element) low++;
    if (low >= high) break;
    a[high--] = a[low];
  }
    
  a[high] = part_element;
    
  return high;
}
</pre>

<h2><a id="10">:pencil2: Chapter 10. Program Organization</a></h2>

**:pushpin: 지역 변수**

함수 내에서 선언된 변수를 지역 변수라고 함.<br>
지역 변수는 automatic storage duration임. 따라서 enclosing function이 호출될 때 공간이 할당되었다가 return될 때 반납됨.<br>
지역 변수는 block scope임. 지역 변수를 선언한 줄부터 enclosing function이 끝나는 지점까지가 적용 범위임. C99에서는 변수의 선언이 뒷줄에서 이루어질 수 있으므로 scope의 범위가 줄어들 수 있음.<br>
block scope는 자신만의 값을 가지지 않아서 다른 함수 내에서 동일한 이름의 지역 변수를 써도 됨.<br>
parameter도 똑같이 automatic storage duration, block scope임.<br>

**static storage duration**<br>

지역 변수 앞에 static을 붙이면 static storage duration이 됨.<br>
enclosing function이 return되어도 자원이 해제되지 않고 프로그램이 실행되는 동안은 자신만의 값을 유지함.<br>
따라서 다시 동일한 함수를 호출할 경우 해당 자원을 활용할 수 있음.<br>
그러나 static 지역 변수도 block scope이므로 다른 함수에서는 invisible함.<br>
이를 이용해 다른 함수가 접근하지 못 하도록 데이터를 숨기는 데 쓸 수도 있음.<br>

**:pushpin: 전역 변수**

external variable(외적 변수) 혹은 global variable(전역 변수)라고 함.<br>
static storage duration임.<br>
선언된 지점부터 파일이 끝나는 지점까지 적용되는 file scope임.<br>

**:pushpin: block과 scope**

compound statement는 {statements} 뿐만 아니라 {declarations statements}로도 쓰일 수 있음.<br>
<pre>
/* block 예시 */
if (i>j) {
  int temp = i;
  i = j;
  j = temp;
}
</pre>
block에서 선언된 변수는 automatic storage duration, block scope임.<br>
static을 붙이면 static storage duration으로 만들 수 있음.<br>

**scope**<br>

file scope나 enclosing function 안에 있는 변수가 block 안에서 같은 이름으로 선언된 경우, block에 있는 함수가 바깥에 있는 변수를 잠시 숨김.<br>
블록을 벗어나면 바깥에 있는 변수가 다시 사용됨.<br>

<h2><a id="11">:pencil2: Chapter 11. Pointers</a></h2>

**:pushpin: 포인터 변수**

메인 메모리는 바이트 단위로 나누어져 있음.<br>
각각의 바이트들은 고유의 주소를 가지고 있음.<br>
각각의 변수들은 메모리 안에서 1개 혹은 여러 개의 바이트를 차지하고 있음.<br>
변수가 시작되는 첫 번째 바이트의 주소가 바로 변수의 주소임.<br>
주소는 숫자 하나로 표현되는데, 범위는 숫자 하나로 가리킬 수가 없음.<br>
이처럼 포인터 변수가 항상 주소만을 나타내는 것만은 아닌데, word의 경우 6비트짜리 character로 나뉠 수도 있고, 9비트짜리 character로 나뉠 수도 있음. 이 경우에 포인터 변수는 주소와 character의 위치 모두를 포함하는 개념임.<br>

**Declaring Pointer Variables**<br>

포인터 변수 앞에는 *를 붙임.<br>
int *p; 는 p가 포인터 변수이고, int 타입의 object를 가리킬 수 있음을 나타냄.<br>
variable이 아니라 object라 쓴 이유는 포인터가 변수 뿐만 아니라 메모리의 특정 부분도 가리킬 수 있기 때문임.<br>
<pre>
int i, j, a[10], b[20], *p, *q;
</pre>
이처럼 포인터 변수는 다른 변수와 같이 선언될 수 있음.<br>
특정 타입으로 선언되면 해당 타입의 object만 가리킬 수 있음.<br>
타입에 제한은 없으며, 포인터 변수로 포인터 변수를 가리킬 수도 있음.<br>

**:pushpin: 주소와 indirection operator**
    
변수의 주소를 찾기 위해서는 & 연산자를 사용함.<br>
&X는 X가 저장되어 있는 메모리에서 X의 주소를 가리킴.<br>
object에 접근하기 위해서는 *(indirection) 연산자를 사용해야 함.<br>
*p는 p가 가리키고 있는 object를 나타냄.<br>
    
**The Address Operator**<br>
    
<pre>
int *p;
</pre>

포인터 변수를 선언하는 것은 특정 object를 가리키는 것이 아니라, 포인터 변수를 위한 공간을 만들어 놓는 것임.<br>
    
<pre>
int i, *p;
....
p = &i;
    
int i, *p = &i;
</pre>
    
포인터 변수를 초기화 할 때는 연산자를 이용하여 변수의 주소를 할당해줌.<br>
선언과 동시에 초기화해줄 수도 있는데, 이 때 *는 indirection 연산자가 아니라 p의 타입을 나타냄.<br>
    
**The Indirection Operator**<br>
    
<pre>
int i, *p;
....
p = &i;
j = *&i;
</pre>

여기서 *p는 i와 똑같음. *p는 i의 alias(가명)으로 *p가 변경되면 i도 따라서 변경됨.<br>
*는 &의 reverse로 *&i는 i와 같으므로 j에는 i가 할당됨.<br>
    
<pre>
int *p;
printf("%d", *p) /* wrong */
*p = 1; /* wrong */
</pre>
    
포인터 변수를 초기화시키지 않고 사용하면 undefined behavior가 생김.<br>
또한 포인터 변수를 초기화시키지 않고, *p에 값을 배정하면 임의의 주소에 할당되어 있는 값을 변경시킬 수 있어 오류가 발생함.<br>

**포인터 할당**<br>
    
C에서는 같은 타입일 경우 copy pointer의 할당을 허용함.<br>
<pre>
int i, j, *p, *q;
p = &i;
q = p;
</pre>
    
포인터를 copy하는 것은 몇개든 가능함.<br>

**:pushpin: 포인터 argument**

함수에서 argument는 parameter로부터 복사되어 쓰이기 때문에 값을 변경시킬 수 없음.<br>
그러나 포인터를 이용하면 변경시킬 수 있음.<br>
<pre>
void decompose(double x, long *int_part, double *frac_part)
{
  *int_part = (long) x;
  *frac_part = x - *int_part;
}
    
/* 함수의 선언을 다음과 같이 해도 됨 */
void decompose(double, long *, double *);
</pre>
    
실제로 함수에 넣어서 쓸 때는 &연산자를 붙어서 사용해야 함.<br>
    
<pre>
decompose(3.14159, &i, &d);

</pre>
    
scanf도 포인터 변수를 argument로 쓰는 예임.<br>
    
<pre>
scanf("%d", &i);
p = &i;
scanf("%d", p);
</pre>

둘은 같은 의미임.<br>
    
**Using const to Protect Arguments**<br>
    
보통 f(&x);를 쓸 때는 f가 x의 값을 변경하려고 한다 생각하겠지만 아닐 수 있음.<br>
argument의 값을 복사해서 쓰는 것보다 포인터로 접근하는게 더 빠르기 때문에 쓰는 경우도 있음.<br>
argument로 들어온 값을 변경시키고 싶지 않으면 아래와 같이 쓰면 됨.<br>
<pre>
void f(const int *p)
{
  *p = 0; /* wrong */    
}
</pre>
    
p는 constant interger를 가리키는 포인터이므로 *p의 값은 바뀔 수 없음.<br>
그러나 p = &j;와 같이 p자체를 바꾸는 것은 가능함. const를 p앞에 놓으면 *p=0은 legal이고 p=&j는 illegal임.<br>
    
**:pushpin: return에 포인터**
    
<pre>
int *max(int *a, int *b)
{
  if (*a > *b)
    return a;
  else
    return b;
}

int *p, i, j;
p = max(&i, &j);
</pre>

max는 i혹은 j의 주소를 return함.<br>
따라서 p는 i나 j을 가리키는 포인터임.<br>
함수는 argument로 들어온 포인터 뿐만 아니라 전역변수 혹은 static으로 감싸진 지역변수를 가리킬 수 있음.<br>

<pre>
int *f(void)
{
  int i;
  ...
  return &i;
}
</pre>

그러나 automatic 지역 변수는 return 하면 안 됨.<br>
i는 f를 return 하자마자 없어지는 변수이기 때문임.<br>

<pre>
int *find_middle(int a[], int n)
{
  return &a[n/2];
}
</pre>

배열의 원소를 가리키는 포인터 변수를 return할 수도 있음.<br>

<h2><a id="12">:pencil2: Chapter 12. Pointers and Arrays</a></h2>

**:pushpin: 포인터 산술**

p = &a[i]일 때 q = p + j로 q가 a[i+j]를 가리키도록 할 수 있음. 또한 더하기 뿐만 아니라 빼는 것도 가능함.<br>
포인터끼리 빼는 것도 가능함. p = &a[i]; q = &a[j]; p-q는 i-j임.<br>
이 때 배열의 원소를 지목하고 있지 않은 포인터로 산술을 하면 undefined behavior가 발생할 수 있음.<br>
같은 배열을 사용하지 않는 원소들끼리의 산술도 마찬가지로 undefined behavior를 일으킬 수 있음.<br>

**Comparing Pointers**<br>

포인터끼리도 관계 연산(<, <=, >, >=)과 동등 연산(==, !=)이 가능함.<br>
<pre>
int a[] = {3, 0, 3, 4, 1};
int *p = &a[0];

int *p = (int []) {3, 0, 3, 4, 1};
</pre>

compound literal을 쓰면 위 두 문장을 아래로 축약할 수 있음.<br>
p는 동일하게 배열의 첫번째 원소를 가리킴.<br>

**:pushpin: 배열에서의 포인터 활용**

<pre>
#define N 10
...
int a[N], sum, *p;
...
sum = 0;
for (p = &a[0]; p < &a[N]; p++)
  sum += *p;
</pre>
a[N]이 실제로 존재하지는 않지만 (0부터 N-1까지이므로) legal임.<br>
루프는 &a[0]부터 &a[N-1]까지 돌고, &a[N]이 되는 순간 종료됨.<br>

<pre>
int a[10];
*a = 7; /* stores 7 in a[0] */
*(a+1) = 12; /* stores 12 in a[1] */
</pre>
배열의 이름은 배열의 첫 번째 원소를 가리키는 포인터임.

<pre>
for (p = &a[0]; p < &a[N]; p++)
  sum += *p;
  
for (p = a; p < a+N; p++)
  sum += *p;
</pre>
이를 이용하면 위의 식을 아래 식으로 쓸 수 있음.<br>

<pre>
while (*a != 0)
  a++; /* wrong */
p = a
while (*p != 0)
  p++; /* legal */
</pre>
배열의 이름에 새로운 값을 부여하는 것은 안 되지만 a를 다른 포인터 변수에 복사해서 쓰는 건 가능함.<br>

**:pushpin: 포인터와 다차원 배열**

C의 n차원 array는 row-major order이므로 1차원으로 펼쳐서 생각해볼 수 있음.<br>

<pre>
int row, col;
...
for (row = 0; row < NUM_ROWS; row++)
  for (col = 0; col < NUM_COLS; col++)
    a[row][col] = 0;
    
int *p;
...
for (p = &a[0][0]; p < &a[NUM_ROWS-1][NUM_COLS-1]; p++)
  *p = 0;
</pre>

위 식과 아래 식은 동일함.<br>

**Processing the Rows of a Multidimensional Array**<br>

p = &a[i][0];와 p = a[i];는 같음.<br>
a[i]는 *(a+i)와 같음.<br>
따라서 &a[i][0]는 &(*a[i] + 0)과 같고 이는 &*a[i]이니 a[i]임.<br>

<pre>

int a[NUM_ROWS][NUM_COLS], *p, i;
...
for (p = a[i]; p < a[i] + NUM_COLS; p++)
  *p = 0;
  
</pre>

이와 같은 방식으로 활용해줄 수 있음.<br>

**Processing the Columns of a Multidimensional Array**<br>

<pre>
int a[NUM_ROWS][NUM_COLS], (*p)[NUM_COLS], i;
...
for ( p = &a[0]; p < &a[NUM_ROWS]; p++)
  (*p)[i] = 0;
</pre>

*p[NUM_COLS]는 포인터가 들어있는 array를 가리키며, (*p)는 array를 가리키는 포인터임.<br>
p++를 진행하면 &a[0], &a[1], ..., &a[NUM_ROWS-1]까지 진행됨.<br>
a[0]은 0번째 row 전체를 의미함.<br>
(*p)[i]는 해당 row에 있는 i번째 원소를 의미하지만, *p[i]는 *(p[i])여서 의미가 다름.<br>

**Using the Name off a Multidimensional Array as a Pointer**<br>

int a[NUM_ROWS][NUM_COLS];일 때 a는 a[0][0]을 가리키지 않음.<br>
a[0]을 가리키는데 이는 1번 row 전체를 의미하는 1차원 배열임.<br>
따라서 a의 타입은 int(*)[NUM_COLS]임.<br>

**:pushpin: 포인터와 가변 길이 배열**

<pre>
void f(int m, int n)
{
  int a[m][n], (*p)[n];
  p = a;
  ...
}
</pre>

p를 variably modified type이라고 함.<br>
(*p)[m]으로 선언해도 되지만 n과 m이 정확히 일치할 때만 제대로 컴파일 됨.<br>
m과 n이 다르면 undefined behavior가 발생함.<br>
variably modified type은 함수의 body나 function proto type에서 정의되어야 하는 제약이 있음.<br>

<pre>
Q&A
포인터 p에 j를 더하면 실제 주소가 j만큼 더해지는 것은 아님.
int 타입은 4바이트이므로 j*4만큼, double은 8바이트이므로 j*8만큼 더해짐.
*a와 a[]은 동일한 표현임.
</pre>

<h2><a id="13">:pencil2: Chapter 13. Strings</a></h2>

**:pushpin: String Literals**

string literal은 ""로 닫혀진 문자열임.<br>
반면 character constant(문자형 상수)는 ''로 닫혀 있으며 단일 문자로 이루어짐.<br>
string literal은 character constant처럼 escape sequence도 포함할 수 있음.<br>
octal이나 hexadecimal escape도 포함될 수 있으나 자주 쓰이지는 않음.<br>

<pre>
printf("When you come to a fork, \
take it.");

printf("When you come to a fork, " "take it."); 
</pre>

한 줄로 끝내기 어려울만큼 긴 string literal은 마지막에 \(백슬래쉬)를 붙이고, 바로 다음 줄에 이어서 쓰면 여러 줄로 나눠서 쓸 수 있음.<br>
그러나 바로 다음 첫 번째 자리에 이어서 써야하므로 indent의 통일성을 깰 수 있음.<br>
이를 방지하고 싶으면 ""를 연달아 쓰면 됨.<br>

**How string literals are stored**<br>

C는 string literal을 character array로 취급함.<br>
n길이의 string literal은 n+1 바이트의 메모리를 가지고 있는데, 이는 마지막에 null character가 포함되어 있기 때문임.<br>
null character는 바이트를 구성하고 있는 비트가 모두 0이고 \0을 의미함. 이는 아스키 코드 상에서도 0이며, 아스키 코드 상으로 48인 숫자 0과는 다름.<br>
"abc"는 abc\0, ""는 \0으로 저장되어 있음.<br>
그 자체로 array이므로 포인터 취급을 당함. 그래서 char * 타입임.<br>
printf("abc");는 abc의 주소를 printf로 전달한다는 의미임.<br>

**Operations on String Literals**<br>

<pre>
char *p;
p = "abc";
</pre>

이는 abc를 copy하는 것이 아니라 abc를 담고 있는 메모리를 가리키고 있다는 뜻임.<br>

<pre>
char ch;
ch = "abc"[1];
</pre>

이와 같이 subscript하는 용도로도 쓸 수 있음.<br>

<pre>
char *p = "abc";
*p = 'd'; /*** wrong ***/
</pre>

string literal을 수정하면 undefined behavior가 발생할 수 있음.<br>
string literal은 읽기 전용 메모리에 저장되어 수정할 수 없기 때문임.<br>

**string literals versus character constants**<br>
문자가 1개만 있는 string literal도 character constant와는 다름.<br>
string literal이 null character를 포함하고 있어서 그럴 뿐만 아니라, 포인터 타입이기 때문임.<br>
반면 character constant는 int 타입임.<br>

**:pushpin: String 변수**

<pre>
#define STR_LEN 80
...
char str[STR_LEN+1];
</pre>

string을 저장할 때는 string의 길이보다 1을 더해서 여유를 두는데, 이는 null character를 위한 공간임.<br>
반드시 STR_LEN만큼 다 채운다는 건 아니지만, null_character를 위해 남겨두었다는 것을 명시적으로 표시한 것이기도 함.<br>
string의 길이는 null character가 어디있는지를 파악하는 걸로 찾는 것이 가장 빠름.<br>

**Initializing a String Variable**<br>

<pre>
char date1[8] = "June 14";
</pre>
이 경우에 June 14\0으로 저장되어 있음.<br>
string literal이 아니라 string variable이며 {'J', 'u', 'n', 'e', ' ', '1', '4', '\0')와 같음.<br>

<pre>
char date2[9] = "June 14";
</pre>
이 경우에는 남은 공간에 null character가 채워짐.<br>

<pre>
char date3[7] = "June 14";
</pre>
원래 공간이 부족하면 illegal인데, null character만 빼고 딱 맞아 떨어지면 illegal은 아님.<br>
그렇지만 string으로 활용할 수는 없음.<br>

<pre>
char date4[] = "June 14";
</pre>
length를 명시해주지 않은 경우 알아서 8을 계산해서 넣어줌.<br>
8이 가변 길이라고 생각할 수도 있는데 그건 아니고 8로 길이가 고정됨.<br>

**Character Arrays versus Character Pointers**<br>

<pre>
char date[] = "June 14";
char *date = "June 14";
</pre>

array 버전은 수정할 수 있고, pointer 버전은 수정할 수 없음.<br>
array 버전의 date는 array의 이름이지만, pointer 버전은 단순 date의 포인터임. 따라서 다른 곳을 가리킬 수도 있음.<br>

**:pushpin: String 읽기, 쓰기**

**Writing strings Using printf and puts**<br>

<pre>
char str[] = "Are we having fun yet?";
printf("%s\n", str);
</pre>

결과는 Are we having fun yet?임.<br>
printf는 \0을 찾을 때까지 하나씩 출력함.<br>

<pre>
printf("%.6s\n", str);
</pre>

결과는 Are we임.<br>
%ms면 m개 글자를 무조건 출력해줌.<br>
m개보다 많으면 전부 출력해주고, m개보다 적으면 오른쪽에 글씨가 쏠림.<br>
m앞에 -를 붙이면 왼쪽으로 쏠림.<br>

<pre>
printf("%10.1s\n, str);
</pre>
결과는 (공백9칸)A임.<br>
%m.ps에서 p만큼 글자가 출력됨.<br>

**Reading Strings Using scanf and gets**<br>

<pre>
scnaf("%s", str);
</pre>
str이 이미 포인터이므로 &이 필요없음.<br>
scanf는 white space를 다 뛰어넘음.<br>
다음 white space가 오기 전까지 저장하고, 마지막에는 null character를 추가함.<br>
string이 white space로 분절되어 있으면 full line을 다 가져올 수가 없음.<br>
따라서 gets가 필요함.<br>

<pre>
char sentence[SENT_LEN + 1];

printf("Enter a sentence:\n");
scanf("%s", sentence);
gets(sentence);
</pre>

입력이 To C, or not to C.일 경우 scanf는 To만 받아옴.<br>
gets는 다 받아옴.<br>
그러나 scanf와 gets모두 문제가 있는데 str가 꽉 찼는지 확인할 방법이 없다는 것임.<br>
꽉 차면 array를 넘어 저장하고 이는 undefined behavior를 일으킴.<br>
scanf는 %ns를 써서 maximum number를 n으로 제한할 수 있음.<br>
gets는 그런게 없어서 오버플로에 취약함.<br>
따라서 fgets를 쓰는데, fgets는 n-1글자를 읽고 끝에 null character를 추가하는 식으로 오버플로를 방지함.<br>

**:pushpin: String 원소 접근**

String에 있는 공백을 count하는 함수를 다음과 같이 쓸 수 있음.<br>

<pre>
int count_spaces(const char s[])
{
  int count = 0, i;
  
  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == ' ')  count++;
    
  return count;
}
</pre>

string이기 때문에 length를 알려주는 argument 없이 null character가 등장하는 지점까지 subscript하면 됨.<br>

<pre>
int count_spaces(const char *s)
{
  int count = 0;
  
  for (; *s != '\0'; s++)
    if (*s == ' ')  count++;
      
  return count;
</pre>

string을 포인터로 사용할 수 있다는 점을 고려하면 위와 같이 쓸 수 있음.<br>
const가 있다고 해서 s에 increment를 할 수 없는 건 아님.<br>
s가 가리키고 있는 대상을 수정할 수 없다는 뜻임.<br>

**:pushpin: String 라이브러리**

<pre>
char str1[10], str2[10];
str1 = "abc"; /*** wrong ***/
str2 = str1; /*** wrong ***/
</pre>

string을 character array에 =을 써서 copy하는 건 불가능함.<br>
array를 =의 lvalue로 쓰면 안되는 이유와 일맥상통함.<br>
array에 값을 지정하면 element를 index로 지정해줘야 함.<br>

<pre>
char str[10] = "abc"
</pre>

그러나 이와 같이 선언과 동시에 초기화해주는 건 legal임.<br>

<pre>
if (str1 == str2) ... /*** wrong ***/
</pre>
비교는 할 수 있으나 str1이나 str2이나 다 포인터이기 때문에 array에 있는 contents를 비교하는 것이 불가능함.<br>
두 포인터가 다른 주소를 가졌기 때문에 결과는 항상 0임.<br>

<pre>
#include <string.h>
</pre>

string parameter는 char * 타입으로 선언되어야 함.<br>
string parameter는 const로 선언되는 것이 좋은데 함수 호출 중 수정될 수 있기 때문임.<br>

**The strcpy(string copy) Function**<br>

<string.h> 헤더를 추가해야 쓸 수 있고 strcpy의 prototype은 char *strcpy (char *s1, const char *s2);임.<br>
s2가 가리키고 있는 곳을 s1이 가리키도록 하며, s2에서 첫번째 null character가 나오는 지점까지를 return함.<br>
s2는 const이므로 수정되지 않음.<br>

<pre>
str2 = "abcd"; /*** wrong ***/
strcpy(str2, "abcd"); /*** str2 now contains "abcd" ***/
</pre>

str2의 값을 str1에 옮기는 것도 가능한데, 이 과정을 축약하면 다음과 같이 쓸 수 있음.<br>

<pre>
strcpy(str1, str2);
strcpy(str1, strcpy(str2, "abcd"));
</pre>

그러나 strcpy는 argument 들의 길이를 체크하지 않음.<br>
str1이 str2보다 길면 상관없지만 짧거나 같으면 문제가 생김.<br>

**The strlen(string length) Function**<br>

<pre>
size_t strlen(const char *s)
</pre>

size_t는 unsigned int 타입임.<br>
strlen은 s안에 있는 character의 수를 return하는데, 첫 번째 null character까지 셈.<br>

<pre>
int len;

len = strlen("abc"); /* len is now 3 */
len = strlen(""); /* len is now 0 */
strcpy(str1, "abc");
len = strlen(str1); /* len is now 3 */
</pre>

**The strcat(String concatenation) Function**<br>

<pre>
char *strcat(char *s1, const char *s2);
</pre>

s1에 s2를 붙이고, s1을 반환함.<br>

<pre>
strcpy(str1, "abc");
strcat(str1, "def"); /* str1 now contains "abcdef") */
</pre>

return된 결과를 활용할 수도 있음.<br>

<pre>
strcpy(str1, "abc");
strcat(str2, "def");
strcat(str1, strcpy(str2, "ghi")); /* str1 now contains "abcdefghi" */
</pre>

strcat(str1, str2)에서 str1이 str2를 받아줄 만큼 공간이 없으면 undefined behavior가 일어남.<br>

<pre>
char str1[6] = "abc";
strcat(str1, "def"); /* wrong */
</pre>

이를 방지하기 위해 strncat을 사용함.<br>

<pre>
strncat(str1, str2, sizeof(str1)-strlen(str2)-1);
</pre>

3번째 argument는 복사될 수 있는 character의 수를 의미함.<br>
복사된 후에는 null character로 종결됨.<br>

**The strcmp(string comparison) Function**<br>

<pre>
int strcmp(const char *s1, const char *s2)

if (strcmp(str1, str2) < 0) /* is str1 < str2 ? */
</pre>

strcmp는 사전 편찬식으로 비교함.<br>
i번째까지 일치하는데 i-1번째에 s1이 s2보다 작은 경우 예시로 abd < abe가 있음.<br>
다 일치하는데 s1이 s2보다 짧은 경우는 abc < abcd가 있음.<br>
numerical 코드도 비교함.<br>
A-Z는 65-90, a-z는 97-122, 숫자는 48-57, 공백은 32임.<br>

<pre>
sprintf(day_str, "%2d", day);
</pre>

day에 있는 숫자를 string으로 바꿔줌.<br>
끝에는 null character가 추가됨.<br>

**:pushpin: String 배열**

<pre>
char planets[][8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
</pre>

위와 같이 String을 저장하면 길이가 8이 안 되는 string은 나머지 공간을 null character로 채움.<br>
따라서 공간을 낭비하게 됨.<br>

<pre>
char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
</pre>

planets에 있는 원소들은 array를 가리키고 있는 포인터를 담게 됨.<br>
따라서 공간 낭비가 없음.<br>

<pre>
for (i = 0; i < 9; i++)
  if (planets[i][0] == 'M')
    printf("%s begins with M\n", planets[i]);
</pre>

M으로 시작하는 String을 찾는 코드는 위와 같음.<br>


<h2><a id="14">:pencil2: Chapter 14. The Preprocessor</a></h2>

**:pushpin: Preprocessing Directives**

Preprocessing Directives는 일반적으로 3가지로 분류됨.<br>
Macro definition, File inclusion, Conditional compilation임.<br>
Macro definition에서 #define은 macro를 define하고, #undef는 macro를 remove함.<br>
File inclusion에서 #include는 특정 파일의 contents를 프로그램에 포함시킴.<br>
Conditional compilation은 #if, #ifdef, #ifndef, #elif, #else, #endif 등 컨디션에 따라 block을 포함시킬지 말지 결정함.<br>
<br>
Directive에 대한 rule은 다음과 같음.<br>
directive는 #로 시작함. line의 시작에서부터 #가 들어갈 필요는 없고, 그 앞에 white space는 있어도 됨.<br>
#define N 1000과 같이 tab이나 space는 얼마든지 들어가도 됨.<br>
일반적으로 첫 번째 new line character에서 directive가 끝남. 하지만 \를 붙이면 다음 줄에서도 이어갈 수 있음.<br>
<pre>
#define DISK_CAPACITY (SIDES * \
TRACKS_PER_SIDE *)
</pre>
directive는 프로그램 시작 부분에서만 있어야 하는 것은 아님.<br>
directive에 대한 comment는 같은 줄에 있는 것이 좋음.<br>

**:pushpin: Macro Definitions**

**simple macros**<br>
<pre>
#define identifier replacement-list
</pre>
simple macro는 위와 같은 형식임.<br>
#define N = 100과 같이 등호나 #define N 100;과 같이 세미콜론을 사용하지 말 것.<br>

**Parameterized Macors**<br>
<pre>
#define identifier(x1, x2, ..., xn) replacement-list
</pre>
x1~xn은 macro의 parameter들임.<br>
identifier와 ()사이에는 공백이 있으면 안 됨.<br>
공백이 있으면 ()를 replacement-list로 간주함.<br>

<pre>
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define IS_EVEN(n) ((n) % 2 == 0)
</pre>
위 함수는 다음과 같이 쓰임.<br>

<pre>
i = MAX(j+k, m-n);
if (IS_EVEN(i)) i++;
i = ( (j+k) > (m-n) ? (j+k) : (m-n) );
if (( (i) %2 == 0 )) i++;
</pre>

<pre>
#define getchar() getc(stdin)
</pre>
위와 같이 ()안을 비워놔도 됨.<br>
별다른 의미를 더하지는 않지만 함수와 같은 느낌을 줌.<br>

**macro의 장단점**<br>

macro는 argument 타입을 가리지 않음. 따라서 MAX macro에는 int, long, float 등 여러가지가 올 수 있음.<br>
함수에 비해서 overhead가 적어서 빠름.<br>
그러나 macro는 replacement list를 그대로 갖다 쓰기 때문에 compile 된 후에는 program이 커질 수 있음.<br>
함수는 포인터로 지목당할 수 있는데 포인터는 그럴 수 없음.<br>

<pre>
n = MAX(i++, j);
n = ( (i++) > (j) ? (i++) : (j) );
</pre>

위와 같이 macro는 argument를 1번 이상 소환하여 undefined behavior를 일으킬 수 있음.<br>
반면 함수는 argument를 딱 1번만 호출함.<br>

<pre>
#define PRINT_INT(n) printf("%d\n", n)
</pre>

printf("d\n", i);를 너무 자주 사용할 경우에 parameterized macro로 대체하여 사용할 수도 있음.<br>

**# operator**<br>

#은 macro의 argument를 string literal로 바꿔줌.<br>

<pre>
#define PRINT_INT(n) printf(#n"=%d\n", n)
PRINT_INT(i/j);
printf("i/j" "=%d\n", i/j);
printf("i/j=%d\n", i/j);
</pre>

**## operator**<br>

<pre>
#define MK_ID(n) i##n
int MK_ID(1), MK_ID(2), MK_ID(3);
Int i1, i2, i3;
</pre>

위와 같이 ##는 paste할 때 쓰임.<br>

<pre>
#define GENERIC_MAX(type) \
type type##_max(type x, type y)\
{ \
  return x > y ? x : y; \
}
</pre>

이 경우에는 다음과 같이 응용할 수 있음.

<pre>
GENERIC_MAX(float);
float float_max(float x, float y) { return x > y ? x : y; };
</pre>

**Macro의 일반적인 특성들**<br>

<pre>
#define PI 3.14159
#define TWO_PI (2 * PI)
</pre>

TWO_PI를 컴파일할 때는 2 * PI로 인식하고 PI 값을 찾기 위해 rescan함.<br>

<pre>
#define SIZE 256
int BUFFER_SIZE;
if (BUFFER_SIZE > SIZE) puts("Error: SIZE exceeded");
</pre>

이는 compile 후 아래와 같이 변함.

<pre>
#define SIZE 256
int BUFFER_SIZE;
if (BUFFER_SIZE > 256) puts("Error: SIZE exceeded");
</pre>

token으로써 쓰일 때에만 replacement되고 그 외에는 영향을 받지 않음.<br>
macro가 함수 안에서 선언된다고 해서 그 함수에게 local한 것은 아님. file의 끝까지 영향을 줌.<br>
macro는 똑같지 않은 이상 2번 정의될 수는 없음. 2번 되려면 아예 똑같아야함.<br>

<pre>
#undef identifier
#undef N
</pre>

#undef N은 N을 define했던 것을 취소시킴.

**Parentheses in Macro Definitions**<br>

<pre>
#define TWO_PI (2*3.14159)
</pre>

위와 같이 operator가 들어갈 때는 괄호를 넣어줘야 함.<br>

<pre>
#define TWO_PI 2*3.14159
conversion = 360 / TWO_PI;
conversion = 360 / 2 * 3.14159;
</pre>

그렇지 않으면 위와 같이 원하지 않는 결과를 가져올 수 있음.<br>

<pre>
#define SCALE(x) ( (x) * 10 )
</pre>

parameter가 있을 때도 마찬가지임.<br>

**Creating Longer Macros**<br>

<pre>
#define ECHO(s) (gets(s), puts(s))
ECHO(str); /* becomes (gets(str), puts(str)); */
</pre>

<pre>
#define ECHO(s) { gets(s); puts(s); }
if (echo_flag)
  ECHO(str);
else
  gets(str);
</pre>

이를 compile하면 다음과 같음.<br>

<pre>
#define ECHO(s) { gets(s); puts(s); }
if (echo_flag)
  { gets(s); puts(s); };
else
  gets(str);
</pre>

이 경우 {}뒤에 있는 ;때문에 오류가 생김.<br>
;를 빼면 성립하지만 보기에 안 좋음.<br>

<pre>
#define ECHO(s) \
do { gets(s); puts(s); } while (0)
</pre>

while문이 항상 거짓이 되도록 쓰면 이 문제를 해결할 수 있음.<br>

**Predefined Macros**<br>

__DATE__와 __TIME__의 쓸모는 다음과 같음.<br>

<pre>
printf("Wacky Windows (c) 2010 Wacky Software, Inc. \n");
printf("Compiled on %s at %s\n", __DATE__, __TIME__);

acky Windows (c) 2010 Wacky Software, Inc.
Compiled on Dec 23 2010 at 22:18:48
</pre>

__LINE__과 __FILE__의 용도는 다음과 같음.<br>

<pre>
#define CHECK_ZERO(divisor) \
if (divisor == 0) \
printf("*** Attempt to divide by zero on line %d " \
on line %d "\
"of file %s ***\n", __LINE__, __FILE__)
</pre>

<pre>
CHECK_ZERO(j);
k = i/j;
*** Attempt to divide by zero on line 9 of file foo.c***
</pre>

__STDC__는 C89 혹은 C99면 1을 return함.<br>

**C99에서 쓰이는 predefined macros**<br>

<pre>
__STDC__HOSTED__
</pre>
hosted implementation이면 1, freestanding이면 0을 return함.<br>
C99의 implementation은 hosted와 freestanding으로 나뉨.<br>
hosted는 C99에 부합하는 프로그램들을 모두 accept함.<br>
freestanding은 complex type을 사용하는 program 혹은 몇 가지 standard 헤더만 compile함.<br>
os에 쓰이는 프로그램 등을 작성할 때 쓰임.<br>

<pre>
__STDC__VERSION__
</pre>

C standard가 어떤 버전인지 확인시켜줌.<br>
C89의 value는 199409L이고 C99의 value는 199901L임.<br>

<pre>
__STDC__IEC__559__
</pre>

compiler가 IEC 60559에 따라 실수 연산을 수행하면 1을 return함.<br>

<pre>
__STDC__IEC__559__COMPLEX__
</pre>

compiler가 IEC 60559에 따라 complex 연산을 수행하면 1을 return함.<br>

<pre>
__STDC__ISO__10646__
</pre>

wchar_t 타입의 value가 ISO/IEC 10646 standard 코드와 맞으면 yyyymmL(199712L)을 retrun함.<br>

**Empty Macro Arguments in C99**<br>

<pre>
#define ADD(x, y) (x+y)
i = ADD(,k);
i = (+k);
</pre>

argument를 비우는 건 상관없지만 comma 갯수는 맞춰야 함.<br>

<pre>
#define MK_STR(x) #x
char empty_string[] = MK_STR();
char empty_string[] = "";
</pre>

#는 stringized 하는데 이 경우 argument를 비우면 ""이 됨.<br>

<pre>
#define JOIN(x, y, z) x##y##z
...
int JOIN(a,b,c), JOIN(a,b,), JOIN(a,,c), JOINC(,,c);
int abc, ab, ac, c;
</pre>

##operator 자리가 비면 place marker가 들어옴.<br>
멀쩡한 token과 place marker가 합쳐지면 멀쩡한 token만 남음.<br>
place marker 2개가 합쳐지면 1개가 됨.<br>

**Macros with a Variable Number of Arguments in C99**<br>

C89에서는 argument의 수를 fix했어야 함.<br>
C99에서는 제한을 두지 않음.<br>

<pre>
#define TEST(condition, ...) ( (condition) ? \
printf("Passed test: %s\n", #condition) : \
printf(__VA_ARGS__))
</pre>

...token을 ellipsis라고 함.<br>
__VA_ARGS__에 들어감.<br>

<pre>
TEST(voltage <= max_voltage, "Voltage %d exceeds %d\n", voltage, max_voltage);

((voltage <= max_voltage ? printf("Passed test: %s\n", "voltage <= max_voltage") : printf("voltage %d exceeds %d\n", voltage, max_voltage)); 
</pre>

이 경우 voltage가 max_voltage보다 낮으면 Passed test : voltage <= max_voltage를 출력함.<br>
voltage가 max_voltage보다 크면 voltage 125 exceeds 120을 출력함.<br>

**The __func__ identifier in C99**<br>

<pre>
static const char __func__[] = "function-name";
</pre>

function-name은 현재 사용되고 있는 항목의 이름을 의미함.<br>

<pre>
#define FUNCTION_CALLED() printf("%s called\n", __func__);
#define FUNCTION_RETURNS() printf("%s returns\n", __func__);

void f(void)
{
  FUNCTION_CALLED(); /* f called */
  FUNCTION_RETURNS(); /* f returns */
}
</pre>

**:pushpin: 조건부 Compilation**

**The #if and #endif Directives**<br>

<pre>
#define DEBUG 1
#if DEBUG
printf("value of i: %d\n", i);
printf("value of j: %d\n", j);
#endif
</pre>

DEBUG가 non-zero면 #if, #endif line만 사라지고 printf line은 남음.<br>
그러나 DEBUG가 zero면 #if부터 #endif까지 다 사라짐.<br>

<pre>
#if constant-expression
</pre>

만약 constant-expression 자리에 undefined identifier가 올라오면 이를 0으로 처리함.<br>

<pre>
#if DEBUG /* fail */
#if !DEBUG /* success */
</pre>

**The Defined Operator**<br>

<pre>
defined(DEBUG)
defined DEBUG
</pre>

defined는 macro가 define되어 있는지 아닌지만 판단함.<br>
define 되어 있으면 1, 아니면 0임.<br>
괄호를 생략해도 됨.<br>

<pre>
#define DEBUG
</pre>

DEBUG에 value를 할당하지 않아도 define하기만 하면 되므로 defined에서는 1로 처리됨.<br>

<pre>
#ifdef identifier
#if defined(identifier)
</pre>

위 둘은 같음.<br>

<pre>
#ifndef identifier
#if identified(!identifier)
</pre>

위 둘도 같음.<br>

**The #elif and #else Directives**<br>

<pre>
#if expr1
Lines to be included if expr1 is nonzero
#elif expr2
Lines to be included if expr1 is zero but expr2 is nonzero
#else
LInes to be included otherwise
#endif
</pre>

**conditional compilation의 활용**<br>

<pre>
#if defined(WIN32)
...
#elif defined(MAX_OS)
...
#elif defined(UNIX)
...
#endif
</pre>

OS별로 portable하게 프로그램을 짤 수 있음.<br>

<pre>
#if __STDC__
Function prototypes
#else
Old style function declarations
#endif
</pre>

compiler별로 다른 프로그램을 짤 수 있음.<br>

<pre>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 256
#endif
</pre>

macro에 default 값을 줄 수 있음.<br>

<pre>
#if 0
Lines containing comments
#endif
</pre>

/* ... */처럼 활용할 수 있음.<br>
이를 conditioning out이라고 함.<br>

**:pushpin: 다양한 Directives**

<pre>
Error directive: message
#error message
</pre>

위와 같은 형식을 가지고 있음.<br>

<pre>
#if defined(WIN32)
...
#elif defined(MAX_OS)
...
#else
#error NO operating system specified
#endif
</pre>

이와 같이 활용할 수 있음.<br>

**The # line directive**<br>

<pre>
#line n
#line n "file*
</pre>

n은 integer임.<br>
#line 정보를 반영하여 __LINE__과 __FILE__ macro도 바뀜.<br>

<pre>
#line 10 "bar.c"
</pre>

foo.c 파일의 첫번째 줄이 저 문장이라고 가정함.<br>
5번째 줄에서 오류가 나면 bar.c의 13번째 줄에서 오류가 났다고 말할 것임.<br>
첫번째 줄은 directive이고 바로 아래줄이 N번째 줄이 되기 때문임.<br>

**The #pragma directive**<br>

<pre>
#pragma tokens
#pragma data(heap_size >= 1000, stack_size >= 2000)
</pre>

#pragma의 command는 컴파일러마다 다름.<br>
C89에서는 standard pragma가 없었지만 C99에서는 있음.<br>
STDC를 첫 번째 token으로 씀.<br>
FP_CONTRACT, CX_LIMITED_RANGE, FENV_ACCESS가 있음.<br>

<pre>
__Pragma(string literal)
</pre>

C99에서는 pragma operator가 있음.<br>
__Pragma는 destringizes 시킴.<br>

<pre>
__Pragma("data(heap_size >= 1000, stack_size >= 2000)")
#pragma data(heap_size >= 1000, stack_size >= 2000)
</pre>

둘다 같은 문장임.<br>

<pre>
#define DO_PRAGMA(x) _Pragma(#x)
DO_PRAGMA(GCC dependency "parse.y")
#pragma GCC dependency "parse.y"
</pre>

<h2><a id="15">:pencil2: Chapter 15. Writing Large Programs</a></h2>

**:pushpin: 헤더 파일**

header file과 include file은 같은 말임.<br>
header file은 .h와 같은 extension을 가지고 있음.<br>
include는 2가지 형식이 있음.<br>

<pre>
#include <filename>
</pre>

이는 시스템 헤더 파일이 있는 폴더를 뒤져보는 헤더 형식임.<br>

<pre>
#include "filename"
</pre>

이는 현재 파일이 있는 폴더를 뒤져보는 헤더 형식임.<br>
현재 디렉토리를 뒤진 다음에는 시스템 파일 디렉토리를 뒤져봄.<br>
-Ipath command를 이용하면 뒤져보는 폴더를 바꿀 수 있음.<br>

<pre>
#include <mychecker.h> /*** wrong ***/
</pre>

현재 디렉토리에 있는 파일을 찾을 때 <>를 쓰면 찾을 수가 없음.<br>

<pre>
#include "C:\cprogs\utils.h" /* Windows path */
#include "/cprogs/utils.h" /* UNIX path */
</pre>

디렉토리의 path를 위와 같이 명시해줄 수도 있으나 좋지 않음.<br>
""로 덮혀 있어서 string literal로 보이지만 그렇지 않음.<br>
만약 string literal이면 \c나 \u가 escape sequence로 간주되었을 것임.<br>

<pre>
#include "d:utils.h"
#include "\cprogs\include\utils.h"
#include "d:\cprogs\include\utils.h"
</pre>
이렇게 쓸 수도 있지만 아래와 같이 쓰는 것이 좋음.<br>

<pre>
#include "utils.h"
#include "..\include\utils.h"
</pre>

#include tokens와 같은 형식으로 쓸 수도 있음.<br>

<pre>
#if defined(IA32)
  #defined CPU_FILE "ia32.h"
#elif defined(IA64)
  #defined CPU_FILE "ia64.h"
#elif defined(AMD64)
  #defined CPU_FILE "amd64.h"
#endif

#include CPU_FILE
</pre>

**Sharing Macro Definition and Type Definition**<br>

<pre>
#define BOOL int
#define TRUE 1
#define FALSE 0

#include "boolean.h"
</pre>

boolean.h를 include함으로써 macro를 공유할 수 있음.<br>
#define BOOL int대신 typedef int BOOL;을 써도 됨.<br>

**Sharing Function PRototypes**<br>

다른 파일에서 define된 함수를 call할 때는 prototype이 있어야 함.<br>
prototpye을 안 써주면 int 타입으로 설정되고 argument의 수와 parameter의 수가 맞아야 하는 등 tandard form에 맞게 가공되어 사용됨.<br>
그렇지만 prototype을 일일이 다 써주는 것은 번거로울 뿐만 아니라 유지 보수가 어려움.<br>
그래서 prototype만 모아놓은 헤더 파일을 만들어주고 include함.<br>
이 헤더 파일은 함수를 define하는 파일에도 include되어 있어야 함.<br>
f에 엮여있는 함수들의 prototype도 헤더 파일 안에 들어가 있어야 함.<br>
그러나 관련이 없는 함수의 prototype은 들어가면 안 됨.<br>

**Sharing Variable Declarations**<br>

<pre>
int i;
</pre>

이는 i를 declare함과 동시에 define한 것임.<br>
특정 값을 주지는 않았더라도 값을 넣기 위해 공간을 할당했기 때문임.<br>

<pre>
extern int i;
</pre>

i를 declare하기는 했지만 공간을 할당하지 않은 상태임.<br>
extern은 모든 타입의 변수에 적용됨.<br>

<pre>
extern int a[];
</pre>
array에 공간 할당 할 필요가 없어서 length를 생략할 수 있음.<br>
함수처럼 변수도 declaration이 있어야 사용할 수 있음.<br>
shared variable의 declaration도 마찬가지로 헤더 파일 안에 들어가 있어야 함.<br>
역시 마찬가지로 변수를 define 하는 파일에도 헤더 파일이 include 되어 있어야 함.<br>

**Nested Includes**<br>

<pre>
bool is_empty(void);
bool is_full(void);
</pre>

int 대신 bool을 쓰고 싶을 때는 헤더 파일 안에 또 헤더 파일(stdbool.h)을 넣어야함.<br>
이를 nested include라고 함.<br>
nested include는 가능하면 피하는 것이 좋음.<br>

**Protecting Header Files**<br>

소스 파일에 같은 헤더 파일을 2번 이상 include하면 오류가 생길 수 있음.<br>
p.c가 1.h와 2.h를 include 했는데, 1.h와 2.h모두 3.h를 include하고 있으면 p.c는 3.h를 2번 부르는 셈임.<br>
항상 오류가 나는 건 아님. macro definition, function prototype, variable declaration만 있으면 괜찮음.<br>
type definition이 있으면 컴파일 에러가 뜸.<br>
헤더 파일을 protect하기 위해 #ifndef, #endif 쌍을 활용할 수 있음.<br>

<pre>
#ifndef BOOLEAN_H
#define BOOLEAN_H
#define TRUE 1
#define FALASE 0
typedef int Bool;
#endif
</pre>

macro의 이름은 그렇게 중요한 건 아닌데 파일 이름이랑 비슷한 게 좋음.<br>
BOOLEAN.H로 할 수 없으니 BOOLEAN_H로 함.<br>
