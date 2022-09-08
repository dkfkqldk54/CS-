<h1>:green_book: <쉽게 배우는 자료구조 with 파이썬> 정리</h1>

<a href="#2">:pencil2: Chapter 2. 재귀(자기호출)와 귀납적 사고</a>
  
<a href="#3">:pencil2: Chapter 3. 알고리즘 성능</a>
  
<a href="#4">:pencil2: Chapter 4. 파이썬 기초</a>
- 불변 타입, 가변 타입
- 복사 호출, 참조 호출, 할당 호출

<a href="#5">:pencil2: Chapter 5. 리스트</a>
- 배열 리스트
- 연결 리스트
- 연결 리스트 원소 삽입
- 연결 리스트 원소 삭제
- 노드의 사용
- 연결 리스트의 구현
- 원소 삽입
- 원소 삭제
- 기타 작업
- 연결 리스트 전체 코드

<h2><a id="2">:pencil2: Chapter 2. 재귀(자기호출)와 귀납적 사고</a></h2>

어떤 문제나 함수 등이 자신과 성격이 똑같지만 크기가 더 작은 문제를 하나 이상 포함하고 있을 때 재귀적 구조를 가지고 있다고 말함.<br>
재귀 알고리즘은 반복해서 호출하다가 언젠가 끝나야 하는데 이를 위한 경계 조건을 항상 갖고 있어야 함. 아래는 그 예시임.<br>
<pre>
if n == 1:
  return 1
</pre>
  
<h2><a id="3">:pencil2: Chapter 3. 알고리즘 성능</a></h2>

알고리즘의 복잡도를 나타낼 때는 점근적 표기를 사용함.<br>
점근적 복잡도란 입력의 크기가 충분히 클 때의 복잡도임.<br>
최고차항의 차수만 중요하고 나머지는 다 무시하며, 차수의 대표는 계수가 없는 최고차항임.<br>
빅오 표기: 점근적 상한, O(n^2)은 최고차항의 차수가 n^2을 넘지 않는 모든 함수의 집합임.<br>
오메가 표기: 점근적 하한, Ω(n^2)은 최고차항의 차수가 n^2보다 작지 않은 모든 함수의 집합임.<br>
세타 표기: 점근적 동일, Θ(n^2)은 최고차항의 차수가 정확히 n^2인 모든 함수의 집합임.<br>

<h2><a id="4">:pencil2: Chapter 4. 파이썬 기초</a></h2>

**:pushpin: 불변 타입, 가변 타입**
  
  불변 타입: 숫자, 문자열, 튜플 등<br>
  가변 타입: 리스트 등<br>
  불변 타입은 한 번 값이 할당되면 그 자리에서 절대 값을 변경하지 않음.<br>
  변수가 값을 바꾸면 겉보기에는 원래 자리에서 바꾼 것처럼 보이지만 내부적으로는 다른 장소를 가리킴.<br>
  가변 타입은 그 자리의 내용을 바꿀 수 있음.<br>
  
**:pushpin: 복사호출, 참조호출, 할당호출**
  
  함수를 호출할 때 넘기는 것을 인자(argument), 호출받은 함수에서 넘어온 인자를 받는 변수를 매개변수(parameter)라고 함.<br>
  func(a,b)에서 a와 b는 매개변수, func(1,2)에서 1과 2는 인자임.<br>
  복사호출은 변수 x의 값을 넘기고, 참조호출은 변수 x의 레퍼런스(식별자, 포인터, 주소)를 넘김. 자바나 C는 복사호출을 사용함.<br>
<pre>
def twofold(a):
  a = 2 * a
  
x = 5
twofold(x)
print(x)
</pre>
  위와 같은 상황에서 참조호출에서는 10을 프린트하지만 복사호출에서는 5를 프린트함.<br>
  파이썬은 두 가지 호출 방식을 혼용하고 있으며, 함수의 파라미터가 불변 타입이면 복사 호출, 가변 타입이면 레퍼런스를 복사함.<br>
  이러한 방식을 할당 호출이라고 함.<br>

<h2><a id="5">:pencil2: Chapter 5. 리스트</a></h2>

**:pushpin: 배열 리스트**

파이썬 기본 제공 리스트는 배열로 구현되어 있어 한계가 있음.<br>
원소를 중간에 삽입하는 경우 기준점 오른쪽에 있는 원소들은 모두 우측으로 이동시켜야 함.<br>
중간에 있는 원소를 삭제하는 경우 기준점 오른쪽에 있는 원소들을 모두 좌측으로 이동시켜야 함.<br>
배열은 공간의 크기를 미리 정해서 받을 수 밖에 없음.<br>
크기가 6인 배열에서 insert가 일어나면 새 배열을 할당하고 전체를 복사한 뒤 삽입이 일어남.<br>
사용자가 느끼지는 못 하지만 내부적으로는 이런 작업이 일어나고 있음.<br>

**:pushpin: 연결 리스트**

연결 리스트는 원소가 추가될 때마다 공간을 할당받아 추가하는 동적 할당 방식을 따름.<br>
연결 리스트의 노드는 원소를 저장하는 item 필드와 다음 노드를 가리키는 next 필드로 구성됨.<br>
next 필드는 c언어의 포인터와 비슷함.<br>
첫 번째 노드를 가리키는 레퍼런스 __head가 있으며, 나머지 노드는 첫 번째 노드에서 링크를 따라 접근하며, 맨 마지막 노드의 링크는 뒤에 더 이상 노드가 없다는 의미로 None을 할당함.<br>
필드로는 첫 번째 노드에 대한 레퍼런스 필드 __head와 리스트에 들어있는 원소의 총 수를 저장하는 __numItems가 있음.<br>
언더바가 2개 있는 필드와 메서드는 객체 내부에서 작업을 하는데 쓰이며 이를 프라이빗 필드 혹은 프라이빗 메서드라고 부름.<br>
연결 리스트 객체는 리스트의 노드들을 직접 저장할 필요는 없고, 리스트의 첫 번째 노드에 접근할 수 있는 레퍼런스만 갖고 있으면 됨.<br>

**:pushpin: 연결 리스트 원소 삽입**

중간에 노드를 삽입하려면 삽입 노드의 바로 앞에 있는 직전 노드를 가리키는 레퍼런스인 prev가 있어야 함.<br>
x를 삽입할 원소라고 할 때 코드는 다음과 같음.<br>
<pre>
newNode.item = x
newNode.next = prev.next
prev.next = newNode
__numItems += 1
</pre>

맨 뒤에 노드를 삽입할 때도 동일한 코드임.<br>
맨 앞에 삽입할 때는 아래와 같음.<br>
<pre>
newNode.item = x
newNode.next = __head
__head.next = newNode
__numItems += 1
</pre>

연결 리스트에 원소를 삽입하는 알고리즘은 맨 앞에 삽입하는 경우와 아닌 경우 두 개로 나누어 작성할 수도 있고 더미 헤드 노드를 두는 것도 가능함.<br>
더미 헤드 노드가 있으면 삽입하고자 하는 노드 앞에 항상 직전 노드가 있어 중간 삽입 알고리즘 하나로 충분함.<br>

**:pushpin: 연결 리스트 원소 삭제**

원소 삭제 코드는 다음과 같음.<br>
<pre>
prev.next = prev.next.next
__numItems -= 1
</pre>

연결 리스트의 맨 앞에 있는 노드를 삭제할 때는 prev.next가 없어 저 코드를 쓸 수 없음.
<pre>
__head = __head.next
__numItems -= 1
</pre>

이 경우에도 두 경우로 나눠서 알고리즘을 짤 수도 있지만, 더미 헤드 노드가 있으면 첫 번째 코드만 있어도 작동함.

**:pushpin: 노드의 사용**

노드 객체를 만드는 클래스는 아래와 같음.<br>
<pre>
class ListNode:
  def __init__(self, newItem, nextNode:'ListNode'):
    self.item = newItem
    self.next = nextNode
</pre>

두 개의 객체를 만들고 이를 연결하는 코드는 아래와 같음.<br>
<pre>
t2 = ListNode(y, None)
t1 = ListNode(x, None)
t1.next = t2
</pre>

**:pushpin: 연결 리스트의 구현**

더미 헤드를 가진 연결 리스트의 기초적인 코드는 아래와 같음.<br>

<pre>
from DS.list.listNode import ListNode
# 클래스 ListNode가 다른 파일에 있는 경우임.

class LinkedListBasic:
  def __init__(self):
    self.__head = ListNode('dummy', None)
    self.__numItems = 0
    #위 두 줄은 사용자가 직접 접근할 일이 없어 언더바를 2개 붙임.
  def insert(self, i, newItem):
    ...
  def append(self, newItem):
    ...
</pre>

**:pushpin: 원소 삽입**
  
연결 리스트에 원소 x를 삽입하는 코드는 아래와 같음.<br>
<pre>
def insert(self, i:int, newItem):
  if i >= 0 and i <= self.__numItems:
    prev = self.__getNode(i-1)
    newNode = ListNode(newItem, prev.next)
    prev.next = newNode
    self.__numItems += 1
  else:
    print("index", i, ":out of bound in insert()")
</pre>
i=0이면 i-1번 노드는 더미 헤드 노드가 되고, i=__numItems면 i-1번 노드는 마지막 노드임.<br>
연결 리스트의 i번 노드를 알려주는 코드는 아래와 같음.<br>
<pre>
def __getNode(self, i:int) -> ListNode:
  curr = self.__head # 더미헤드, index = -1
  for index in range(i+1):
    curr = curr.next
  return curr
</pre>
연결 리스트 끝에 원소 x를 추가하는 코드는 아래와 같음.<br>
<pre>
def append(self.newItem):
  prev = self.__getNode(self.__numItems-1)
  newNode = ListNode(newItem, prev.next)
  prev.next = newNode
  self.__numItems += 1
</pre>

**:pushpin: 원소 삭제**

i번째 원소를 삭제하는 코드는 아래와 같음.<br>
<pre>
def pop(self, i:int):
  if (i>=0 and i<=self.__numItems-1):
    prev = self.__getNode(i-1)
    curr = prev.next
    prev.next = curr.next
    retItem = curr.item
    self.__numItems -= 1
    return retItem
  else:
    return None
</pre>

원소 x를 삭제하는 코드(더미 헤드를 두는 버전)은 아래와 같음.<br>
<pre>
def remove(self, x):
  (prev, curr) = self.__findNode(x)
  if curr != None:
    prev.next = curr.next
    self.__numItems -= 1

def __findNode(self, x) -> (ListNode, ListNode):
  prev = self.__head # 더미 헤드
  curr = prev.next
  while curr != None:
    if curr.item == x:
      return (prev, curr)
    else:
      prev = curr; curr = curr.next
  return (none, none)
</pre>

**:pushpin: 기타 작업**

i번째 원소 리턴하기<br>
<pre>
def get(self, i:int):
  if self.isEmpty():
    return None
  if (i>=0 and i<=self.__numItems-1):
    return self.__getNode(i).item
  else:
    return None
</pre>

원소 x가 리스트의 몇 번 원소인지 알려주기<br>
<pre>
def index(self.x) -> int:
  curr = self.__head.next
  for index in range(self.__numItems):
    if curr.item == x:
      return index
    else:
      curr = curr.next
  return -12345
</pre>

isEmpty, size, clear<br>
<pre>
def isEmpty(self) -> bool:
  return self.__numItems == 0

def size(self) -> int:
  return self.__numItems
  
def clear(self):
  self.__head = ListNode("dummy", None)
  self.__numItems = 0
</pre>

원소 x가 몇 번 나타나는지 세기<br>
<pre>
def count(self, x) -> int:
  cnt = 0
  curr = self.__head.next
  while curr != None:
    if curr.item == x:
      cnt += 1
    curr = curr.next
  return cnt
</pre>

연결 리스트 뒤에 다른 연결 리스트 붙이기<br>
<pre>
def extend(self, a): # a는 self와 같은 타입의 리스트
  for index in range(a.size()):
    self.append(a.get(index))
</pre>

연결 리스트 복사하기<br>
<pre>
def copy(self):
  a = LinkedListBasic()
  for index in range(self.__numItems):
    a.append(self.get(index))
  return a
</pre>

연결 리스트 뒤집기<br>
<pre>
def reverse(self):
  a = LinkedListBasic()
  for index in range(self.__numItems):
    a.insert(0, self.get(index))
  self.clear()
  for index in range(a.size())
    self.append(a.get(index))
</pre>

연결 리스트 정렬<br>
<pre>
def sort(self) -> None:
  a = []
  for index in range(self.__numItems):
    a.append(self.get(index))
  a.sort()
  self.clear()
  for index in range(len(a)):
    self.append(a[index])
</pre>
**:pushpin: 연결 리스트 전체 코드**
