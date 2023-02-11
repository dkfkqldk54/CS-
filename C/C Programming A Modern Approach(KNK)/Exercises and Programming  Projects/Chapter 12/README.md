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

**:pushpin: 7번**

**:pushpin: 8번**

**:pushpin: 9번**

**:pushpin: 10번**

**:pushpin: 11번**

**:pushpin: 12번**

**:pushpin: 13번**

**:pushpin: 14번**

**:pushpin: 15번**

**:pushpin: 16번**

**:pushpin: 17번**

**:pushpin: 18번**

