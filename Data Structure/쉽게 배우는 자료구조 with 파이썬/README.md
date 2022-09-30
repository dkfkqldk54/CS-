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
- 배열 리스트와 연결 리스트의 비교
- 원형 연결 리스트
- 가변 파라미터일 때 i번 원소 삭제하기
- 순회자
- 양방향 연결 리스트

<a href="#6">:pencil2: Chapter 6. 스택</a>
- 가상 메모리 구조
- 리스트를 이용한 스택
- 연결 리스트를 이용한 스택

<a href="#7">:pencil2: Chapter 7. 큐</a>
- 리스트를 이용한 큐
- 연결 리스트를 이용한 큐
- 큐 응용: 좌우동형 문자열 체크

<a href="#8">:pencil2: Chapter 8. 우선순위 큐: 힙</a>
- 힙이란?
- 원소 삽입
- 원소 삭제
- 힙 생성
- 기타 작업
- 힙 수행 시간
  
<a href="#9">:pencil2: Chapter 9. 정렬</a>
- 기본 정렬 알고리즘: 선택 정렬, 버블 정렬, 삽입 정렬
- 고급 정렬 알고리즘: 병합 정렬
- 고급 정렬 알고리즘: 퀵 정렬
- 고급 정렬 알고리즘: 힙 정렬
- 고급 정렬 알고리즘: 셸 정렬
- 데이터 특성을 잘 이용하는 정렬 알고리즘: 계수 정렬, 기수 정렬, 버킷 정렬
  
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

**:pushpin: 배열 리스트와 연결 리스트의 비교**

배열 리스트는 i번 원소를 찾을 때 i값으로 즉시 접근할 수 있으나, 연결 리스트는 헤드 노드에서부터 시작하여 링크를 i번 따라간 다음에야 i번 원소를 찾을 수 있음.<br>
배열 리스트의 시간 복잡도는 Θ(1), 연결 리스트의 시간 복잡도는 Θ(i)임.<br>
연결 리스트는 next를 위한 공간이 더 필요하고, 배열 리스트는 필요한 공간이 상대적으로 작음.<br>
배열 리스트는 배열에 들어올 원소의 총 수를 미리 알 수 없어 충분히 큰 크기로 선언해야 해서 공간 낭비가 있음.<br>
또한 중간에 더 큰 배열을 할당받아 원소를 새로 옮겨야 함.<br>
원소들이 크기 순으로 정렬되어 있다면 배열 리스트에서는 최악의 경우에도 Θ(log n) 시간에 검색이 가능하나 연결 리스트는 Θ(n)의 시간이 소요됨.<br>
Θ(log n) 시간에 검색할 수 있게 해주는 이진 탐색 알고리즘은 아래와 같음.<br>

<pre>
binarySearch(A[], p, r, x): # 배열 A[p, ..., r]에서 원소 x의 인덱스를 리턴한다.
  if (p > r) return NOT_FOUND
  else
    q <- (p+2)/2
    if (x=A[q]) return q
    else if (x < A[q]) return binarySearch(A, p, q-1, x)
    else binarySearch(A, q+1, r, x)
</pre>

**:pushpin: 원형 연결 리스트**

기존의 연결 리스트는 첫 노드는 단번에 접근할 수 있는 반면 마지막 노드는 링크를 끝까지 따라가야 접근할 수 있음.<br>
이를 개선하기 위해 마지막 노드에 대한 레퍼런스 __tail을 두고, 마지막 노드가 맨 앞의 더미 헤드 노드를 링크한 원형 연결 리스트가 등장함.<br>
더미 헤드 노드는 __tail 노드로부터 링크 하나만 따라가면 바로 접근되므로 __head가 필요없음.<br>
단방향 연결 리스트에서는 마지막 노드를 판별할 때 링크가 None인지 아닌지로 판별했는데, 원형 연결 리스트에서는 링크가 더미 헤드 노드를 가리키는지로 판별함.<br>
빈 원형 연결 리스트는 더미 헤드 노드가 자신을 링크함.<br>
맨 뒤에 원소를 삽입하는 append()는 __head로부터 시작해 연결 리스트를 따라 끝까지 가는 작업이 없어짐.<br>
prev 노드인 맨 뒤쪽 노드를 레퍼런스 __tail이 가리키고 있어 prev를 찾는 시간 Θ(n)이 소요되지 않음.<br>
append()로 인해 비효율적이었던 extend(), copy(), reverse()가 가벼워짐.<br>

**:pushpin: 가변 파라미터일 때 i번 원소 삭제하기**

메서드나 함수의 파라미터에 *args와 같이 파라미터 앞에 *를 붙이면 파라미터를 튜플로 받을 때 인자의 개수를 가변적으로 받을 수 있음.<br>
파라미터 이름이 꼭 args일 필요는 없고, 가변적으로 붙여도 됨.<br>
<pre>
def pop(self, *args):
  if self.isEmpty():
    return None
  if len(args) != 0:
    i = args[0]
  if len(args) == 0 or i == -1:
    i = self.__numItems - 1
  if ( i >= 0 and i <= self.__numItems-1):
    prev = self.getNode(i-1)
    retItem = prev.next.item
    prev.next = prev.next.next
    self.__numItems -= 1
    return retItem
  else:
    return None
</pre>

**:pushpin: 순회자**

for 루프를 돌 때 필요한 작업은 대상 객체의 원소를 하나하나 차례로 훑는 것임.<br>
이런 성질을 가진 객체를 순회 가능 객체라고 함.<br>
연결 리스트를 파이썬의 기본 내장 리스트와 튜플, 딕셔너리 등과 동등하게 사용하려면 이를 순회 가능한 클래스로 만들어 줘야 함.<br>
순회 가능한 클래스가 되려면 __iter__()와 __next__() 이 두 메서드가 있어야 함.<br>
"for element in a"와 같은 표현이 있으면 파이썬은 객체 a의 메서드 __iter__()를 호출하여 순회자를 생성함.<br>
순회자는 생성되면서 자신의 생성 메서드 __init__()을 수행하여 순회자의 첫 위치를 연결 리스트의 더미 헤드 노드에 두고 다음 노드로 이동할 준비를 함.<br>
객체 자체가 순회자 역할을 할 수도 있고, 순회자 객체를 따로 만들 수도 있음.<br>
"...in a"에서 객체 a의 원소를 차례로 보기 위해 __next__()를 계속 수행함.<br>
__next__()는 다음 원소를 리턴하는 메서드임.<br>
reverse() 로직 개선 코드는 아래와 같음.<br>
<pre>
def reverse(self) -> None:
  __head = self.__tail.next # 더미 헤드
  prev = __head; curr = prev.next; next = curr.next # 더미는 prev, 0번 노드는 curr, 1번 노드는 next로 설정함.
  curr.next = __head; __head.next = self.__tail; self.__tail = curr # 0번 노드를 마지막 노드로, 마지막 노드를 0번 노드로 만듦.
  for i in range(self.__numItems-1):
    prev = curr; curr = next; next = next.next # 1번 노드가 prev, 2번 노드가 curr, 3번 노드가 next 이런 식으로 자리를 하나씩 밀어냄.
    curr.next = prev # 1번 노드의 링크가 0번에게, 2번 노드의 링크가 1번에게, ... 한번 훑으면서 링크를 거꾸로 바꿈
</pre>
__iter와 CircularLinkedListIterator의 코드는 아래와 같음.<br>
<pre>
def __iter__(self):
  return CircularLinkedListIterator(self)
  
class CircularLinkedListIterator:
  def __init__(self, alist):
    self.__head = alist.getNode(-1) # 더미 헤드
    self.iterPosition = self.__head.next # 0번 노드
  def __next__(self):
    if self.iterPosition == self.__head:: #순환끝
      raise StopIteration
    else: # 현재 원소를 리턴하면서 다음 원소로 이동
      item = self.iterPosition.item
      self.iterPosition = self.iterPosition.next
      return item
</pre>

**:pushpin: 양방향 연결 리스트**

양방향 연결 리스트는 각 노드가 다음 노드 뿐만 아니라 직전 노드에 대한 링크도 가져 한 노드만 알면 앞뒤로 자유롭게 이동할 수 있음.<br>
원형 양방향 연결 리스트는 마지막 노드의 next가 헤드 노드를 가리키고, 헤드 노드의 prev가 마지막 노드를 가리킴.<br>
빈 리스트의 레퍼런스 __head는 더미 헤드 노드를 가리키고, 더미 헤드는 prev와 next 모두 자신을 링크함.<br>
양방향 연결 리스트의 클래스는 아래와 같음.<br>
<pre>
class BidirectNode:
  def __init__(self, x, prevNode:'BidirectNode', nextNode:'BidirectNode'):
    self.item = x
    self.prev = prevNode
    self.next = nextNode
</pre>

<h2><a id="6">:pencil2: Chapter 6. 스택</a></h2>

**:pushpin: 가상 메모리 구조**

정적 영역에는 컴파일 직후 상대적인 위치를 정할 수 있는 모든 정보가 있고, 동적 영역은 수행을 시작한 후에 알 수 있음.<br>
정적 영역에는 프로그램 수행 코드(기계어 코드)와 프로그램이 끝날 때까지 존재하는 데이터(전역 변수와 정적 변수 등)가 있음.<br>
동적 영역에는 프로그램 수행 중 할당받는 메모리(힙 영역)와 완료되지 않은 함수가 다른 함수를 호출할 때의 정보를 저장하는 영역(스택 영역)이 있음.<br>
생성된 객체들은 힙 영역에 들어가고, 함수의 파라미터와 지역 변수는 수행 중에 동적 영역의 스택에 저장됨.<br>
스택의 맨 위에는 현재 수행 중인 함수 정보가 저장되고, 이 함수를 호출한 함수는 바로 아랫 공간에 저장되어 있음.<br>
수행을 마친 함수가 스택 영역에서 지워지면 원래 함수로 돌아와 다시 시작할 수 있도록 함수의 정보가 스택의 맨 위에 있게 됨.<br>

**:pushpin: 리스트를 이용한 스택**

파이썬에서 리스트는 배열로 구현되어 있으므로 리스트를 이용한 스택은 사실상 배열을 이용한 스택이라 할 수 있음.<br>
리스트 스택의 구조는 아래와 같음.<br>
<pre>
class ListStack:
  def __init__(self):
    self.__stack = []
  def push(self, x):
    ...
  def pop(self):
    ...
  def top(self):
    ...
  def isEmpty(self):
    ...
  def popAll(self):
    ...
</pre>
메서드 __init__()은 클래스의 객체가 생성될 때 수행되는 메서드로 생성자 Constructor라고 함.<br>
원소 삽입 코드는 아래와 같음.<br>
<pre>
def push(self, x):
  self.__stack.append(x)
</pre>
원소 삭제 코드는 아래와 같음.<br>
<pre>
def pop(self):
  return self.__stack.pop()
</pre>
top 코드는 아래와 같음.<br>
<pre>
def top(self):
  if self.isEmpty():
    return None
  else:
    return self.__stack[-1]
</pre>
isEmpty 코드는 아래와 같음.<br>
<pre>
def isEmpty(self)->bool:
  return not bool(self.__stack)
</pre>
스택을 비우는 코드는 아래와 같음.<br>
<pre>
def popAll(self):
  self.__stack = []
</pre>

**:pushpin: 연결 리스트를 이용한 스택**

연결 리스트는 맨 앞을 스택 탑으로 삼는데, 연결 리스트에서는 맨 앞에 있는 원소를 더하거나 삭제하는 것이 더 효율적이기 때문임.<br>
연결 리스트 스택의 구조는 아래와 같음.<br>
<pre>
class LinkedStack:
  def __init__(self):
    self.__list = LinkedListBasic()
  def push(self, x):
    ...
  def pop(self):
    ...
  def top(self):
    ...
  def isEmpty(self):
    ...
  def popAll(self):
    ...
</pre>
원소 삽입 코드는 아래와 같음.<br>
<pre>
def push(self, x):
  self.__list.insert(0, x)
</pre>
원소 삭제 코드는 아래와 같음.<br>
<pre>
def pop(self):
  return self.__list.pop(0)
</pre>
top 코드는 아래와 같음.<br>
<pre>
def top(self):
  if self.isEmpty():
    return None
  else:
    return self.__list.get(0)
</pre>
isEmpty 코드는 아래와 같음.<br>
<pre>
def isEmpty(self) -> bool:
  return self.__list.isEmpty()
</pre>
스택 비우기 코드는 아래와 같음.<br>
<pre>
def popAll(self):
  self.__list.clear()
</pre>

<h2><a id="7">:pencil2: Chapter 7. 큐</a></h2>

**:pushpin: 리스트를 이용한 큐**

리스트 큐의 클래스 구조는 아래와 같음.<br>
<pre>
class ListQueue:
  def __init__(self):
    self.__queue = []
  def enqueue(self, x):
    ...
  def dequeue(self):
    ...
  def front(self):
    ...
  def isEmpty(self) -> bool:
    ...
</pre>
원소 삽입 코드는 아래와 같음.<br>
<pre>
def enqueue(self, x):
  self.__queue.append(x)
</pre>
원소 삭제 코드는 아래와 같음.<br>
<pre>
def dequeue(self):
  return self.__queue.pop(0)
</pre>
top 코드는 아래와 같음.<br>
<pre>
def front(self):
  return self.__queue[0]
</pre>
isEmpty 코드는 아래와 같음.<br>
<pre>
def isEmpty(self) -> bool:
  return (len(self.__queue)==0);
</pre>
큐 비우기 코드는 아래와 같음.<br>
<pre>
def dequeueAll(self):
  self.__queue = []
</pre>

**:pushpin: 연결 리스트를 이용한 큐**

원소 삽입 코드는 아래와 같음.<br>
<pre>
def enqueue(self, x):
  self.__queue.append(x)
</pre>
원소 삭제 코드는 아래와 같음.<br>
<pre>
def dequeue(self):
  return self.__queue.pop(0)
</pre>
top 코드는 아래와 같음.<br>
<pre>
def front(self):
  return self.__queue.get(0)
</pre>
isEmpty 코드는 아래와 같음.<br>
<pre>
def isEmpty(self)->bool:
  return self.__queue.isEmpty()
</pre>
큐 비우기 코드는 아래와 같음.<br>
<pre>
def dequeueAll(self):
  self.__queue.clear()
</pre>
생성자는 아래와 같음.<br>
<pre>
def __init__(self):
  self.__queue = CircularLinkedList()
</pre>

**:pushpin: 큐 응용: 좌우동형 문자열 체크**

좌우동형 문자열은 앞에서부터 읽으나 뒤에서부터 읽으나 같은 문자열을 말함.<br>
임의의 문자열 A를 받으면 A의 문자들을 앞에서부터 읽으면서 스택과 큐에 동시제 저장한 뒤 스택과 큐에서 동시에 하나씩 읽어들이면서 삭제한다.<br>
이 과정에서 스택과 큐에서 읽어 들인 문자가 동일하다면 계속 읽어들이고 중간에 큐가 비면 중단한다.<br>
큐가 비어서 중단했다면 좌우동형이라고 리턴하고, 큐가 아직 비지 않았는데 중단했다면 좌우동형이 아니라고 리턴한다.<br>
큐 대신 스택을 체크해도 된다.<br>
코드는 아래와 같다.<br>
<pre>
from listStack import *
from listQueue import *

def isPalindrome(A) -> bool:
  s = ListStack(); q = ListQueue()
  for i in range(len(A)):
    s.push(A[i]); q.enqueue(A[i])
  while (not q.isEmpty()) and s.pop() == q.dequeue():
    {}
  if q.isEmpty():
    return True
  else:
    return False
</pre>

<h2><a id="8">:pencil2: Chapter 8. 우선순위 큐: 힙</a></h2>

**:pushpin: 힙이란?**

우선순위를 가진 원소를 삽입할 수 있고, 우선순위가 가장 큰 원소를 빼낼 수 있으면 우선순위 큐라고 함.<br> 
우선순위 큐의 추상 데이터 타입은 아래와 같음.<br>
<pre>
원소를 삽입한다.
최대 원소를 알려주면서 삭제한다.
최대 원소를 알려준다.
우선순위 큐가 비어있는지 확인한다.
우선순위 큐를 깨끗이 비운다.
</pre>
배열, 리스트, 연결 리스트, 스택, 큐 등 한 줄로 관리할 수 있는 자료를 일차원적 자료구조 또는 선형 자료구조라고 함.<br>
우선순위 큐를 선형 자료구조로 구성할 수도 있지만 힙을 사용하는 것이 효율적인 방법임.<br>
힙은 완전 이진 트리 구조를 사용함.<br>
모든 노드가 2개 이하의 자식을 갖는 트리를 이진 트리라고 하는데, 이 중에서도 완전 이진 트리를 사용함.<br>
포화 이진 트리는 루트로부터 시작해 모든 노드가 정확히 자식 노드를 2개씩 가지면서 꽉 채워진 트리이며, 노드의 총 수가 2^k - 1개임.<br>
완전 이진 트리는 루트로부터 모든 노드가 자식을 2개씩 가지면서 내려가지만 노드의 수가 2^k -1개가 되지 못 해, 맨 아래 레벨을 모두 채울 수가 없는데, 왼쪽부터 차례로 채운 것임.<br>
힙은 두 가지 조건을 만족해야 함.<br>
<pre>
1. 완전 이진 트리
2. 힙특성(모든 노드는 값을 갖고 자식 노드보다 값이 크거나 같아야 함)
</pre>
리스트는 항상 완전 이진 트리로 해석될 수 있음.<br>
리스트가 A[0]부터 시작된다면 A[k]의 자식은 A[2k+1]와 A[2k+2]임.<br>
A[k]의 부모 노드는 A[|(k-1)/2|]임.
리스트는 1번 조건은 만족시키지만 2번 조건을 항상 만족시키지는 않음. 따라서 2번 조건을 만족시키도록 수선하는 작업이 필요함.<br>
힙 객체의 구조는 아래와 같음.<br>
<pre>
__A[]
insert(x)
deleteMax()
max()
buildHeap()
isEmpty()
clear()
</pre>
힙의 생성자는 아래와 같음.<br>
<pre>
def __init__(self, list):
  if list == None:
    self.__A = []
  else:
    self.__A = list
</pre>

**:pushpin: 원소 삽입**

힙 A[0, ... , n-1]에 새 원소가 들어오면 맨 끝에 추가한 다음 힙 특성을 만족하도록 올라가면서 수선함.<br>
이를 스며오르기라고 하는데 노드 A[i]를 부모의 값과 비교해서 힙 특성을 깨면 둘의 자리를 맞바꾸는 것임.<br>
이런 작업을 힙 특성을 만족하는 최초의 지점까지 또는 더 이상 올라갈 수 없을 때까지 반복함.<br>
<pre>
def insert(self, x):
  self.__A.append(x)
  self.percolateUp(len(self.__A)-1)

def percolateUp(self, i):
  parent = (i -1) // 2
  if i > 0 and self.__A[i] > self.__A[parent]:
    self.__A[i], self.__A[parent] = self.__A[parent], self.__A[i]
  self.percolateUp(parent)
</pre>

**:pushpin: 원소 삭제**

삭제는 무조건 우선순위 값이 가장 큰 원소를 대상으로 함.<br>
힙에서는 가장 큰 원소가 루트에 있으니 A[0, ..., n-1]에서는 무조건 A[0]이 삭제됨.<br>
그러나 무작정 A[0]을 삭제하면 완전 이진 트리가 깨지므로 맨 끝 원소 A[n-1]을 A[0] 자리에 넣음.<br>
힙 특성을 만족시키기 위해서 스며내리기가 필요함.<br>
스며내리기는 어떤 노드의 두 서브 트리가 이미 힙인 상태에서 이 노드로부터 시작해서 수선하는 작업임.<br>
<pre>
def deleteMax(self):
  if not self.isEmpty():
    max = self.__A[0]
    self.__A[0] = self.__A.pop()
    self.percolateDown(0)
    return max
  else:
    return None
  
def percolateDown(self, i:int):
  child = 2 * i + 1
  right = 2 * i + 2
  if child <= len(self.__A)-1:
    if right <= len(self.__A) - 1 and self.__A[right] > self.__A[child]:
      child = right
    if self.__A[i] < self.__A[child]:
      self.__A[i], self.__A[child] = self.__A[child], self.__A[i]
      self.percolateDown(child)
</pre>

**:pushpin: 힙 생성**

주어진 리스트를 힙으로 만드는 작업은 맨 마지막 노드의 부모 노드부터 시작함.<br>
스며내리기를 실시하는데 서브 트리의 루트가 되는 노드를 하나씩 앞으로 이동하면서 해당 서브 트리를 힙으로 수선하는 과정을 반복함.<br>
최종적으로 A[0]가 루트가 되는 서브 트리를 수선하면 과정이 끝남.<br>
<pre>
def buildHeap(self):
  for i in range((len(self.__A)-2//2, -1, -1):
    self.percolateDown(i)
</pre>

**:pushpin: 기타 작업**

힙의 최댓값 구하기<br>
<pre>
def max(self):
  return self.__A[0]
</pre>

힙이 비었는지 확인하기<br>
<pre>
def isEmpty(self):
  return len(self.__A) == 0
</pre>

힙 비우기<br>
<pre>
def clear(self):
  self.__A = []
</pre>

**:pushpin: 힙 수행시간**

힙 만들기는 Θ(n)의 시간이 든다.<br>
힙에 원소를 삽입하는 건 A[n]에서 시작하는 한 번의 스며오르기가 전부이므로 O(log n)이 든다.<br>
힙에서 원소를 삭제하는 건 A[0]에서 시작하는 한 번의 스며내리기가 전부이므로 O(log n)의 시간이 든다.<br>

<h2><a id="9">:pencil2: Chapter 9. 정렬</a></h2>

**:pushpin: 기본 정렬 알고리즘: 선택 정렬, 버블 정렬, 삽입 정렬**

기본 정렬의 수행 시간은 Θ(n^2)임.<br>

**선택 정렬**<br>

<pre>
def selectionSort(A):
  for last in range(len(A)-1, 0, -1):
    k = theLargest(A, last)
    A[k], A[last] = A[last], A[k]
    
def theLargest(A, last:int) -> int:
  largest = 0
  for i in range(last):
    if A[i] > A[largest]:
      largest = i
  return largest
</pre>

**버블 정렬**<br>

선택 정렬이 가장 큰 수를 찾아서 가장 오른쪽 숫자와 바꾸는 반면, 버블 정렬은 왼쪽부터 한 칸씩 이동하면서 이웃한 두 수를 비교해서 순서가 제대로 되어 있지 않으면 바꿈.<br>
버블 정렬이 선택 정렬보다 느림<br>

<pre>
def bubbleSort(A):
  for last in range(len(A)-1, 0, -1):
    for i in range(last):
      if A[i] < A[i+1]:
        A[i], A[i+1] = A[i+1], A[i]
</pre>
  
**삽입 정렬**<br>

선택 정렬이나 버블 정렬보다 빠름.<br>
리스트가 거의 정렬된 상태로 입력되면 While 루프는 거의 수행되지 않아 for 루프의 n-1번 순환만 신경쓰면 됨.<br>
따라서 Θ(n)에 가까운 시간이 소요됨.<br>

<pre>
def insertionSort(A):
  for last in range(1, len(A)):
    newItem = A[last]
    loc = last-1
    while loc >= 0 and newItem < A[loc]:
      A[loc+1] = A[loc]
      loc -= 1
    A[loc+1] = newItem
</pre>

**:pushpin: 고급 정렬 알고리즘: 병합 정렬**

병합 정렬은 먼저 입력을 반으로 나눔.<br>
나눈 전반부와 후반부를 각각 독립적으로 정렬함.<br>
마지막으로 정렬된 두 부분을 합쳐서 정렬된 리스트를 얻음.<br>
<pre>
def mergeSort(A, p:int, r:int):
  if p < r:
    q = (p+r) // 2
    mergeSort(A, p, q)
    mergeSort(A, q+1, r)
    merge(A, p, q, r)
    
def merge(A, p:int, q:int, r:int):
  i = p; j = q + 1; t = 0;
  tmp = [0 for i in range(len(A)]
  while i <= q and j <= r:
    if A[i] <= A[j]:
      tmp[t] = A[i]; i += 1; t += 1;
    else:
      tmp[j] = A[j]; j += 1; t += 1;
  while i <= q:
    tmp[t] = A[i]; i += 1; t += 1;
  while j <= r:
    tmp[t] = A[j]; j += 1; t += 1;
  i = p; t = 0
  while i <= r:
    A[i] = tmp[t]; i += 1; t += 1;
</pre>
병합 정렬의 수행 시간은 Θ(nlogn)인데 이는 최악, 평균, 최선 모두 마찬가지임.<br>
리스트 A를 병합하려면 A에 있는 모든 원소를 tmp에 옮겼다가 이를 다시 A로 옮겨야하므로 2n 번의 이동이 일어남.<br>
비교 횟수는 n/2 ~ n-1번이 일어나지만 점근적 분석을 할 때는 중요도가 더 높은 2n을 사용함.<br>
<pre>
T(n) 
= 2T(n/2) + 2n 
= 2(2T(n/4)+n)+2n = 2^2T(n/(2^2)) + 2*2n
= ...
= 2^nT(n/(2^n)) + n*2n
= n * c + 2nlogn
= Θ(nlogn)
</pre>
병합 정렬도 약점이 있음.<br>
주어진 리스트 이외에 추가로 공간을 사용하지 않는 정렬을 내부정렬이라고 하는데 병합정렬은 내부 정렬이 아님.<br>
A에서 tmp로, tmp에서 A로 옮기는 과정을 개선할 수 있음.<br>
A나 TMP가 주 리스트와 보조 리스트의 역할을 매번 바꾸면 10~20%정도 개선됨.<br>

**추가: 연습문제 19번**<br>
주 리스트와 보조 리스트를 바꿔가면서 병합 정렬을 수행하는 코드는 아래와 같음.
<pre>
tmp = b.copy()
def new_mergeSort(p, r, mergelevel):
  if p < r:
    q = (p+r) // 2
    new_mergeSort(p, q, mergelevel+1)
    new_mergeSort(q+1, r, mergelevel+1)
    new_merge(p, q, r, mergelevel)

def new_merge(p, q, r, mergelevel):
  i = p; j = q+1; t = p
  if mergelevel % 2 == 1:
    while i <= q and j <= r:
      if b[i] <= b[j]:
        tmp[t] = b[i]; t += 1; i += 1;
      else:
        tmp[t] = b[j]; t += 1; j += 1;
    while i <= q:
      tmp[t] = b[i]; t += 1; i += 1;
    while j <= r:
      tmp[t] = b[j]; t += 1; j += 1;
  else:
    while i <= q and j <= r:
      if tmp[i] <= tmp[j]:
        b[t] = tmp[i]; t += 1; i += 1;
      else:
        b[t] = tmp[j]; t += 1; j += 1;
    while i <= q:
      b[t] = tmp[i]; t += 1; i += 1;
    while j <= r:
      b[t] = tmp[j]; t += 1; j += 1;
</pre>

**:pushpin: 고급 정렬 알고리즘: 퀵 정렬**

병합 정렬이 먼저 재귀적으로 작은 문제를 해결한 다음 후추러리를 하는데 반해, 퀵 정렬은 선행 작업을 한 다음 재귀적으로 작은 문제를 해결하면서 바로 끝남.<br>
퀵 정렬은 기준 원소를 하나 잡아 기준 원소보다 작은 원소와 큰 원소를 그룹으로 나누어 기준 원소의 좌우로 분할한 다음 각각을 정렬하는 방법임.<br>
기준이 되는 원소는 아무 원소로 해도 상관없음.<br>
<pre>
def quickSort(A, p:int, r:int):
  if p<r:
    q = partition(A, p, r)
    quickSort(A, p, q-1)
    quickSort(A, q+1, r)

def partition(A, p:int, r:int) -> int:
  x = A[r]
  i = p - 1
  for j in range(p, r):
    if A[j] < x:
      i += 1
      A[i], A[j] = A[j], A[i]
  A[i+1], A[r] = A[r], A[i+1]
  return A[i+1]
</pre>
퀵 정렬의 수행 시간은 평균 Θ(nlogn)임.<br>
보통 partition이 절반쯤에서 되면 재귀의 깊이가 logn이기 때문임.<br>
최악의 경우는 한쪽으로 몰리는 경우가 반복되는 것인데 이 경우 Θ(n^2)임.<br>
퀵 정렬은 매우 빨라 필드에서 가장 선호하는 정렬 알고리즘임.<br>
최악의 경우 Θ(n^2)의 시간이 들지만 이런 경우는 이미 정렬되어 있거나 동일한 원소들이 많을 때만 그러함.<br>

**:pushpin: 고급 정렬 알고리즘: 힙 정렬**
리스트 A[0, ... , n-1]를 buildHeap()으로 정렬하고, 원소를 하나씩 제거하면서 percolateDown()으로 수선해주면 됨.<br>
하나씩 빼주면서 차례대로 저정하면 정렬이 됨.<br>
<pre>
def heapSort(A):
  B = [x for x in A]
  h = Heap(B)
  h.buildHeap()
  for i in range(len(B)-1, -1, -1):
    A[i] = h.deleteMax()
</pre>
위 코드는 내부 정렬이 아님. 추가적인 리스트를 사용하지 않는 내부 정렬 구현 힙 정렬은 아래와 같음.<br>
<pre>
def heapSort(A):
  buildHeap(A)
  for last in range(len(A)-1, 0, -1):
    A[last], A[0] = A[0], A[last]
    percolateDown(A, 0, last-1)
 
def buildHeap(A):
  for i in range((len(A)-2)//2, -1, -1):
    percolateDown(A, i, len(A)-1)
    
def percolateDown(A, k:int, end:int):
  child = 2*k + 1
  right = 2*k + 1
  if child <= end:
    if right <= end and A[child] < A[right]:
      child = right
  if A[k] < A[child]:
    A[k], A[child] = A[child], A[k]
    percolateDown(A, child, end)
</pre>
힙 정렬시 수행 시간은 O(nlogn)이며 최악의 경우는 Θ(nlogn)임.<br>
가장 운이 좋은 경우는 Θ(n)로 모든 원소가 동일한 경우임.<br>
힙 정렬은 병합 정렬과 달리 내부 정렬이나 수행 시간은 병합 정렬이 더 빠른 편임.<br>

**:pushpin: 고급 정렬 알고리즘: 셸 정렬**

거의 정렬되어 있으면 삽입 정렬은 Θ(n)밖에 걸리지 않는다는 특성을 이용한 정렬로 마지막에 삽입 정렬로 끝남.<br>
마지막 삽입 정렬을 하기 전에 각 원소가 있어야 할 자리에서 멀리 떨어져 있을 가능성을 현저히 줄여놓음.<br>
간격별로 정렬을 하는데 간격 수열 h0, h1, ...을 갭 수열이라고 함.<br>
<pre>
def shellSort(A):
  H = gapSequence(len(A))
  for h in H:
    for k in range(h):
      stepInsertionSort(A, k, h)
      
def stepInsertionSort(A, k:int, h:int):
  for i in range(k+h, len(A), h):
    j = i-h
    newItem = A[i]
    while j >= 0 and newItem < A[j]:
      A[j+h] = A[j]
      j -= h
    A[j+h] = newItem
    
def gapSequence(n:int) -> list:
  H = [1]; gap = 1
  while gap < n/5:
    gap = 3 * gap + 1
    H.append(gap)
  H.reverse()
  return H
</pre>
셸 정렬은 삽입 정렬을 개선한 것이나 개선의 정도는 획기적임<br>
그렇지만 퀵 정렬에 비하면 다소 느린 편임.<br>
stepInsertionSort가 Ω(n)인데, 갭 수열이 Θ(logn)개 있으니 전체는 Ω(nlogn)임.<br>
갭 수열에 따라 편차가 있는데 가장 좋은 상한은 O(n^1.25)임.<br>

**:pushpin: 데이터 특성을 잘 이용하는 정렬 알고리즘**

정렬을 하려면 모든 원소를 적어도 한번씩은 보아야 하므로 Ω(n)임.<br>
두 원소간 비교를 기본으로 하는 작업에서는 원소 비교 횟수가 최악의 경우 Ω(nlogn)임.<br>
이를 피하려면 두 원소간 비교를 기본으로 하지 않아야 함.<br>
아래 정렬은 Θ(n)을 가능하게 하는 정렬 알고리즘임.<br>

**계수 정렬**<br>

정렬하고자 하는 원소들의 값이 -O(n) ~ O(n) 범위에 있는 정수인 경우에 사용 가능함.<br>
원소들의 값이 모두 0~k 사이에 정수 (k ∈ O(n))를 가진다고 가정함.<br>
계수 정렬은 먼저 리스트에 있는 원소들을 다 훑어서 1부터 k까지의 자연수가 각각 몇 번 나타나는지 셈.<br>
이 정보를 이용해 리스트 A[]의 각 원소가 몇 번째 자리에 놓이면 되는지 계산함.<br>
<pre>
def countingSort(A):
  k = max(A)
  c = [0 for _ in range(k+1)]
  for j in range(len(A)):
    c[A[j]] += 1
  for i in range(1, k+1):
    c[i] = c[i] + c[i-1]
  B = [0 for _ in range(len(A))]
  for j in range(len(A)-1, -1, -1):
    B[c[A[j]]-1] = A[j]
    c[A[j]] -= 1
  return B
</pre>
k가 O(n)을 초과하면 시간은 Θ(k)가 되므로 계수 정렬의 매력이 떨어짐<br>

**기수 정렬**<br>

원소들이 모두 상수 k개 이하의 자릿수를 가진 자연수(혹은 제한된 길이의 알파벳 등)와 같은 특수한 경우에 사용할 수 있는 방법이며 Θ(n)의 시간이 소요됨.<br>
가장 낮은 자릿수만으로 정렬하고, 그 다음번 자릿수로 정렬, ... 마지막까지 하면 완료임.<br>
i번째 자릿수에 대해 안정성을 유지하면서 정렬해야 하는데 이는 값이 같은 원소끼리는 정렬할 때 원래의 순서가 바뀌지 않는 성질을 가리킴<br>
<pre>
import math

def radixSort(A):
  maxValue = max(A)
  numDigits = math.ceil(math.log10(maxValue))
  bucket = [[] for _ in range(10)]
  for i in range(numDigits):
    for x in A:
      y = (x // (10 ** i)) % 10
      bucket[y].append(x)
    A.clear()
    for j in range(10):
      A.extend(bucket[j])
      bucket[j].clear()
</pre>
Θ(kn)의 시간이 들지만 k가 상수면 Θ(n)이 됨.<br>
k가 상수가 아니라면 기수정렬은 매력이 없음.<br>

**버킷 정렬**<br>

정렬하고자 하는 원소들이 균등 분포할 때를 가정함.<br>
정확히 균일한 분포라는 뜻은 아니고 전 영역의 어느 지점이나 데이터가 존재할 확률이 같다는 뜻임.<br>
버킷 정렬은 균등 분포를 이루는 입력에 대해 이론적으로 선형시간 Θ(n)이 소요됨.<br>
그러나 버킷리스트를 생성하고 리스트를 관리하는 오버헤드가 커서 실제로는 Θ(nlogn) 알고리즘보다 느림.<br>
<pre>
import math
from insertionSort import insertionSort

def bucketSort(A):
  n = len(A)
  B = [[] for _ in range(n)]
  for i in ragne(n):
    B[math.floor(n*A[i])].append(A[i])
  A.clear()
  for i in range(n):
    insertionSort(B[i])
    A.extend(B[i])
</pre>
