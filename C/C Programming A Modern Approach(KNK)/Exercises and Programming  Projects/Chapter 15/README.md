<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

(a)<br>
함수와 변수를 하나의 파일에 묶어놓으면 프로그램 구조를 이해하는 것이 쉬움.<br>
소스 파일들이 각각 컴파일 될 수 있어 프로그램이 클 경우 시간을 아낄 수 있음.<br>
함수와 변수를 다른 프로그램에서도 손쉽게 재사용 할 수 있음.<br>

(b)<br>
프로그램을 여러 개의 소스 파일로 쪼개면 이해하기가 오히려 더 어려워질 수도 있음.<br>
여러 개의 소스 파일들을 include함으로써 함수나 변수의 이름이 겹치면 naming conflict가 발생할 수 있음.<br>
소스 파일을 여러개로 분리함으로 인해 logic을 separate될 수 있어서 이해하기가 더 어려워 질 수 있음.<br>

**:pushpin: 2번**

function definition.<br>
헤더 파일의 목적은 소스 파일들이 declaration에 접근할 수 있도록 해주는 것임.<br>
funtion definition이 들어가버리면 각각 파일에 duplicate되어서 symbol error가 발생할 수 있음.<br>

**:pushpin: 3번**

#inlcude "file"을 쓰면 현재 디렉토리를 검사한 후에 시스템 디렉토리를 검사함.<br>
최종적으로는 시스템 디렉토리를 검사하므로, 시스템 헤더를 ""로 쓴다고 해서 문제될 것은 없음.<br>

**:pushpin: 4번**

(a)
<pre>
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
</pre>

(b)
<pre>
Output if DEBUG is not defined:
</pre>

(c)
(a)에서는 DEBUG가 define되어서 debug.h에 ifdef 조건이 참이고, (b)에서는 DEBUG가 define되지 않아서 debug.h에 ifdef 조건이 거짓임.<br>
그에 따라서 PRINT_DEBUG(n)의 define이 달라지기 때문에 output이 달라짐.<br>

(d)
예, #define DEBUG가 #include "debug.h" 이전에 있으면 #ifdef DEBUG가 참인데, 뒤에 있으면 거짓임.<br>

**:pushpin: 5번**

**:pushpin: 6번**
