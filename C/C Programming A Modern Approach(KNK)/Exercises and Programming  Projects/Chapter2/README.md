<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

CS Academy(https://csacademy.com/workspace/) 컴파일러 상에서는 오류가 발생하지 않았음.<br>
그러나 Statements 맨 마지막에 return 0;이 빠져있어서 오류가 발생할 수 있을 것임.

**:pushpin: 2번**

**(a)**<br>

directives<br>
#include <stdio.h><br>

statements<br>
printf("Parkinson's Law:\nWork expands so as to ");
printf("fill the time\n");
printf("available for its completion. \n");
return 0;

**(b)**<br>

Parkinson's Law:<br>
Work expands so as to fill the time<br>
available for its completion.<br>

**:pushpin: 3번**

**(a)**<br>

int height = 8, length = 12, width = 10;

**(b)**<br>

printf("Dimensional weight (pounds): %d\n", (volume+165)/166);

**:pushpin: 4번**

CS Academy에서는 int는 0, float은 0.000000만 출력했다.<br>
그러나 GCC 환경에서는 다른 값을 return할 수도 있다.<br>

**:pushpin: 5번**

(a), 100_bottles는 숫자부터 시작하기 때문임.<br>

**:pushpin: 6번**

_는 1개인지, 2개인지 구분하기가 어려움.<br>
또한 _는 단어와 단어 사이를 구분하기 위해서 주로 사용되는데, 이는 _를 1개만 사용해도 충분하기 때문임.<br>

**:pushpin: 7번**

for과 while이 키워드임 If는 i가 대문자이기 때문에 키워드가 아님.<br>

**:pushpin: 8번**

14개<br>
anwswer, =, (, 3, *, q, -, p, *, p, ), /, 3, ;

**:pushpin: 9번**

answer = (3*q - p*p) / 3;

**:pushpin: 10번**

int와 main 사이, int와 height 사이, return과 0사이<br>

<h2>:pencil2: Programming Projects</h2>

**:pushpin: 1번**

<pre>
#include <<t>stdio.h>

int main(void)
{
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
    return 0;
}
</pre>

**:pushpin: 2번**
<pre>
#include <<t>stdio.h>
#include <<t>math.h>

int main(void)
{
    float radius, volume;
    radius = 10;
    volume = M_PI * radius * radius * radius * (4.0f/3.0f);
    
    printf("volume: %f\n", volume);
    return 0;
}
</pre>

**:pushpin: 3번**

<pre>
#include <<t>stdio.h>
#include <<t>math.h>

int main(void)
{
    int radius;
    float volume;
    printf("Enter radius of the sphere: ");
    scanf("%d", & radius);
    volume = M_PI * radius * radius * radius * (4.0f/3.0f);
    
    printf("volume: %f\n", volume);
    return 0;
}
</pre>

**:pushpin: 4번**

<pre>
#include <<t>stdio.h>

int main(void)
{
    float dollars, cents;
    
    printf("Enter an amount: ");
    scanf("%f", &dollars);
    
    cents = dollars * 1.05;
    
    printf("With tax added: $%.2f", cents);
    
    return 0;
}
</pre>

**:pushpin: 5번**

<pre>
#include <<t>stdio.h>

int main(void)
{
    float x, answer;
    
    printf("Enter value of x");
    scanf("%f", &x);
    
    answer = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;
    printf("answer is: %.2f", answer);
    
    return 0;
}
</pre>

**:pushpin: 6번**

<pre>
#include <<t>stdio.h>

int main(void)
{
    float x, answer;
    
    printf("Enter value of x");
    scanf("%f", &x);
    
    answer = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("answer is: %.2f", answer);
    
    return 0;
}
</pre>

**:pushpin: 7번**

<pre>
#include <<t>stdio.h>

int main(void)
{
    int dollars, bills_20, bills_10, bills_5, bills_1;
    
    printf("Enter a dollar amount: ");
    scanf("%d", & dollars);
    
    bills_20 = dollars / 20;
    dollars = dollars - bills_20 * 20;
    bills_10 = dollars / 10;
    dollars = dollars - bills_10 * 10;
    bills_5 = dollars / 5;
    dollars = dollars - bills_5 * 5;
    bills_1 = dollars;
    
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);
    
    return 0;
}
</pre>

**:pushpin: 8번**

<pre>
#include \<stdio.h>\

int main (void)
{
    float amount_of_loan, interest_rate, monthly_payment, first_balance, second_balance, third_balance;
    
    printf("Enter amount of loan: ");
    scanf("%f", & amount_of_loan);
    printf("Enter interest rate: ");
    scanf("%f", & interest_rate);
    printf("Enter amount of loan: ");
    scanf("%f", & monthly_payment);
    
    first_balance = amount_of_loan + amount_of_loan * ((interest_rate / 100) / 12) - monthly_payment;
    second_balance = first_balance + first_balance * ((interest_rate / 100) / 12) - monthly_payment;
    third_balance = second_balance + second_balance * ((interest_rate / 100) / 12) - monthly_payment;
    
    printf("Balance remaining after first payment: %f\n", first_balance);
    printf("Balance remaining after second payment: %f\n", second_balance);
    printf("Balance remaining after third payment: %f\n", third_balance);
    
    return 0;
}
</pre>
