 <h1>:green_book: HW4 관련 정리</h1>

**:pushpin: important.h**
<pre>
int foo(int a, int b, int c);
</pre>

**:pushpin: important.o**
<pre>
/* 코드에 대한 메타 데이터 */
/* 링커와 로더에게 코드의 섹션, 정렬, 심볼의 가시성, 타입에 대한 정보를 제공함. */
/* 이를 활용하여 링커와 로더는 프로그램의 메모리 레이아웃을 올바르게 구성할 수 있음. */

  .text                  /* 이어지는 코드가 텍스트일 것을 지정함. */
  .align      2          /* 메모리 주소가 2의 거듭제곱(2^2=4)로 정렬되도록 함. 이어지는 코드는 4바이트 경계에 정렬됨. */
  .globl      foo        /* foo 심볼이 전역 심볼로 선언됨. 다른 오브젝트 파일에서도 참조 가능함. */
  .type foo,  @function  /* foo 심볼의 타입이 함수임을 나타냄. */

foo:
  mul a4, a1, a2
  mv a3, a0
  li a5, 2
  sub a5, a5, a2
  sll a0, a1, a5
  mul a2, a2, a3
  add a4, a4, a3
  add a4, a4, a0
  ble a2, a4, .LI
  mv a0, a1

.LI:
  ret
</pre>

**:pushpin: 명령어 설명**

**mv**
<pre>
mv는 레지스터 간 값을 복사하는데 사용됨
mv rd, rs
소스 레지스터의 값을 목적 레지스터에 복사함.
addi rd, rs, 0와 같음.
</pre>

**li**
<pre>
li는 load immediate임.
즉시 값을 레지스터에 로드함.
상수 값을 레지스터에 저장하는데 사용됨.
li rd, imm
li x5, 42
42를 x5에 로드한다는 뜻임.
</pre>

**ret**
<pre>
ret은 return의 약자임.
함수 호출 스택에서 반환 주소를 가져와 프로그램 실행을 반환 주소로 이동시킴.
</pre>
