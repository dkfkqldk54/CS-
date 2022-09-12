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
