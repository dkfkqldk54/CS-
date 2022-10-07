<h1>:green_book: C Programming A Modern Approach(KNK) 정리</h1>

<a href="#2">:pencil2: Chapter 2. C Fundamentals</a>
- C's Origin
- Compiling and Linking
- The General Form of a Simple Program
- Variables and Assignment
- Defining Names for constants
- Identifiers
  
<h2><a id="2">:pencil2: Chapter 2. C Fundamentals</a></h2>

**:pushpin: C's Origin**

C는 1970년대 벨 연구소에서 개발된 프로그래밍 언어로 Ken Tompson, Dennis Ritchie 등이 만들었음.<br>
당시 어셈블리어로 작성된 UNIX는 코드를 보수하거나 디버그하는 작업이 상당히 어려웠음.<br>
이를 보완하기 위해 B를 개발하였으나 B는 UNIX에 적합한 언어가 아니었고, B를 업그레이드 한 버전인 C를 개발하게 됨.<br>

**:pushpin: Compiling and Linking**

Preprocessing: #(directives)로 시작하는 커맨드를 처리함.<br>
Compiling: 코드를 기계어로 번역해주는 작업을 의미함. 즉 객체 코드(컴파일러에 의해 기계가 읽을 수 있도록 번역된 프로그램)를 만들어줌.<br>
Linking: 객체 코드와 additional code를 조합시킴. additional code는 printf와 같은 라이브러리 함수를 포함함.<br>

UNIX에서 C의 컴파일러로 보통 cc를 쓰는데 pun.c를 컴파일하고 링크할 때는 아래와 같이 쓸 수 있음.<br>
<pre>% cc pun.c</pre>
컴파일, 링킹 작업이 끝난 뒤에는 a.out(assemler output)이라는 이름의 실행 파일을 자동으로 생성함.<br>
-o 옵션은 실행 파일의 이름을 정할 수 있도록 해주는 옵션임. pun.c를 pun으로 지정하고 싶을 때는 아래와 같이 작성함.<br>
<pre>% cc -o pun pun.c</pre>
컴파일러가 아니라 IDE(Integrated Development Environment)를 쓸 수도 있음.<br>
IDE는 동일한 환경 안에서 편집, 컴파일, 링크, 실행, 디버그 등을 모두 수행할 수 있음.<br>

**:pushpin: The General Form of a Simple Program**

C의 간단한 프로그램 폼은 아래와 같음.
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
main 앞에 int는 main 함수가 integer value를 return할 것이라고 알려주는 것임.<br>
void는 main에 들어가는 인자가 없다는 것을 나타내는 것임.<br>
return 0의 의미는 두 가지가 있음. 하나는 main 함수를 끝내겠다는 의미이고, 다른 하나는 main 함수는 0을 return 했다는 의미임.<br>
만약 return이 없어도 프로그램은 끝나겠지만, 컴파일러가 경고 메세지를 보낼 수도 있음. int를 return해야 하는데 하지 않았기 때문임.<br>

**Statements**<br>
Statement는 세미콜론으로 끝남. 이는 컴파일러에게 문장이 끝났다는 것을 알려주기 위함임.<br>

**Printing Strings**<br>
문장 끝에 \n(new line character)를 붙여줘야 함. 이를 붙이지 않으면 한 줄안에 여러 문장이 함께 출력됨.<br>

**Comments**<br>
코멘트 시작은 /*이고 끝은 */임.<br>
C99은 //(adjacent slashes)로도 코멘트를 남기는데, 문장의 시작 부분에만 써주고 끝 부분에는 써주지 않아도 자동으로 끝맺음해줌.<br>
두 줄 이상의 긴 코멘트는 /* */로 써주는 것이 좋음.<br>

**:pushpin: Variables and Assignment**

**Types**<br>
int와 float 등이 있음.<br>
float은 int보다 계산이 느린데, 이는 float이 라운딩을 통해서 근사치를 보여주고 있어서 그렇지 실제 값은 숫자가 더 길 수도 있기 때문임.<br>

**Declarations**<br>
변수는 사용되기 전에 선언되어야 하고 역시 끝에 세미콜론을 붙여야함.<br>
<pre>
int height;
float profit, loss;
</pre>
main 함수에서 declaration은 statements가 오기 전에 있어야함.<br>
그러나 C99에서는 declaration -> statements -> declaration -> statements와 같은 순서로 사용할 수 있음.<br>

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
위와 같은 방식은 되지만 아래와 같은 방식은 안 됨.
하나의 변수에는 하나의 initializer가 필요함.

**Reading Input**<br>
scanf, printf의 f는 formatted의 f임.<br>
변수는 Type을 선언해야 하는데 scanf 안에서 &을 써줌으로서 이를 대신함. 정수와 실수의 경우 아래와 같이 표현하면 됨.<br>
<pre>
scanf("%d", &i);
scanf("%f", &x;
</pre>

**:pushpin: Defining Names for constants**

자주 쓰는 상수에 이름을 붙여 쓰고 싶을 때는 macro definition을 사용하면 됨.<br>
<pre>#define INCHES_PER_POUND 166</pre>
directive처럼 쓰며 마찬가지로 마지막에 세미콜론을 붙이지 않음.<br>
관습적으로 대문자로 쓰임.<br>
숫자 부분에 (1.0f/3.14f)와 같이 수식을 써도 되나, 괄호를 동반해야 함.<br>
(1.0/3.14)가 아니라 (1.0f/3.14f)로 하는 이유는 전자는 0으로 인식되나 후자는 1/3.14로 인식되기 때문임.<br>

**:pushpin: Identifiers**

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
<pre>inline restrict _Bool _Comlex _Imaginary</pre>
