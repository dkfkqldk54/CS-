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

<a href="#10">:pencil2: Chapter 10. 색인과 이진 검색 트리</a>
- 검색 트리
- 이진 검색 트리의 특성
- 이진 검색 트리 알고리즘과 구현: 검색
- 이진 검색 트리 알고리즘과 구현: 삽입
- 이진 검색 트리 알고리즘과 구현: 삭제
- 이진 검색 트리의 성질
- 순회

<a href="#11">:pencil2: Chapter 11. 균형 검색 트리</a>
- AVL 트리 개요
- AVL 트리 수선
- AVL 트리 구현
- 레드 블랙 트리 개요
- 레드 블랙 트리 수선
- 레드 블랙 트리 정리
- B 트리 필요성
- B 트리 개요
- B 트리 알고리즘: 검색
- B 트리 알고리즘: 삽입
- B 트리 알고리즘: 삭제
- B 트리 성능

<a href="#12">:pencil2: Chapter 12. 해시 테이블</a>
- 해시 테이블 개요
- 해시 함수
- 충돌 해결: 체이닝
- 충돌 해결: 개방 주소 방법
- 개방 주소 방법 유형
- 체이닝과 개방 주소 방법 비교

<a href="#13">:pencil2: Chapter 13. 그래프</a>
- 그래프란?
- 그래프의 표현: 인접 행렬
- 그래프의 표현: 인접 리스트
- 그래프의 표현: 인접 배열
- 그래프의 표현: 인접 해시 테이블
- 너비 우선 탐색: BFS
- 깊이 우선 탐색: DFS
- 최소 신장 트리란?
- 프림 알고리즘
- 크루스칼 알고리즘
- 위상 정렬
- 최단 경로
- 다익스트라 알고리즘
- 벨만-포드 알고리즘
  
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
def mergeSort(arr):
  if len(arr) <= 1:
    return arr
  left = 0
  right = len(arr)-1
  mid = (left+right)//2
  return merge(mergeSort(arr[left:mid+1]), mergeSort(arr[mid+1:]))

def merge(a, b):
  global cnt
  a1, b1 = len(a), len(b)
  i, j = 0, 0
  tmp = []
  while i < a1 and j < b1:
    if a[i] <= b[j]:
      tmp.append(a[i]); i+=1
    else:
      tmp.append(b[j]); j+=1;
  if i == a1:
    tmp.extend(b[j:])
  else:
    tmp.extend(a[i:])
  return tmp
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

**추가: 연습문제 17번**<br>
동일한 원소가 많을 경우 성능을 향상시키는 방법은 아래와 같음.<br>
<pre>
def new_quickSort(a, start, end):
  if start < end:
    x, y = new_partition(a, start, end)
    new_quickSort(a, start, x)
    new_quickSort(a, y, end)

def new_partition(a, start, end):
  mid = start
  pivot = a[end]
  while mid <= end:
    if a[mid] < pivot:
      a[start], a[mid] = a[mid], a[start]
      start += 1
      mid += 1
    elif a[mid] > pivot:
      a[mid], a[end] = a[end], a[mid]
      end -= 1
    else:
      mid += 1
  return start-1, end
</pre>

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

<h2><a id="10">:pencil2: Chapter 10. 색인과 이진 검색 트리</a></h2>

레코드: 개체에 대한 모든 정보가 들어 있음. 사람 레코드라면 주민 번호, 이름, 집 주소 등등.<br>
필드: 레코드의 속성을 나타내는 일부분.<br>
키: 검색 키라고도 하며 다른 레코드와 중복되지 않으면서 각 레코드를 구분할 수 있는 필드를 색인으로 사용하는데 이를 키라고 함.<br>
색인을 통해 어떤 레코드에 접근하기 위해서는 그 레코드의 키와 레코드가 저장된 위치에 대한 정보가 필요함.<br>

**:pushpin: 검색 트리**

한 분기점에서 최대 2개까지만 분기할 수 있는 트리를 이진 검색 트리, 3개 이상 분기할 수 있는 트리를 다진 검색 트리라고 함.<br>
저장되는 장소에 따라 내장 검색 트리와 외장 검색 트리로 나뉨.<br>
내장 검색 트리는 검색 트리가 메인 메모리 내에 존재하는 것이고, 외장 검색 트리는 검색 트리가 외부(주로 디스크)에 존재하는 것임.<br>
검색 트리 전체를 메인 메모리에 불러놓고 쓸 수 없는 경우, 디스크 공간에 저장된 상태로 검색해야 함. 이런 외장 검색 트리는 디스크 접근 시간이 효율을 좌우함.<br>

**:pushpin: 이진 검색 트리의 특성**

각 노드는 키 값을 하나씩 가짐. 각 노드의 키 값은 모두 다름.<br>
최상위 레벨에 루트 노드가 있고, 각 노드는 최대 2개의 자식 노드를 갖음.<br>
임의 노드의 키 값은 자신의 왼족 아래에 있는 모든 키 값보다 크고, 오른쪽 아래에 있는 모든 노드들의 키 값보다 작음.<br>
이진 검색 트리에 대한 접근은 루트 노드로부터 시작하는데, 이는 루트 노드의 값에 따라 나머지 노드가 좌측에 위치할지, 우측에 위치할지가 결정되기 때문임.<br>
루트 노드를 밟은 다음, 다음 링크(left 또는 right)를 타고, 다음 다음 노드에 접근함.<br>
이진 검색 트리 객체는 트리의 노드들을 저장할 필요가 없고, 트리의 루트 노드에 접근할 수 있는 레퍼런스만 있으면 됨.<br>
이진 검색 트리의 핵심 작업은 검색, 삽입, 삭제임.<br>

**:pushpin: 이진 검색 트리 알고리즘과 구현: 검색**

<pre>
search(t, x):
  if (t=null||t.item=x)
    return t
  else if (x < t.item)
    return search(t.left, x)
  else
    return search(t.right, x)
</pre>

**:pushpin: 이진 검색 트리 알고리즘과 구현: 삽입**

이진 검색 트리가 이상적으로 균형이 잡히면 최악의 경우에도 검색 시간은 Θ(log n)임.<br>
가장 나쁘게 기울면 평균 검색 시간이 Θ(n)임.<br>
평균 검색 시간은 Θ(log n)이며, 삽입은 실패하는 검색 후 상수 시간의 후처리를 하므로 점근적 수행 시간은 검색과 동일함.<br>

<pre>
insert(x):
  root <- insertItem(root,x)
  
insertItem(t, x):
  if (t=null)
    r.item <- x; r.left <- null; r.right <- null;
    return r
  else if (x < t.item)
    t.left <- insertItem(t.left, x)
    return t
  else
    t.right <- insertItem(t.right, x)
    return t
</pre>

**:pushpin: 이진 검색 트리 알고리즘과 구현: 삭제**

case 1: r이 리프 노드인 경우(자식이 없는 경우)임. r이 삭제되어도 r의 아래쪽에는 영향을 미치지 않음. r의 부모 노드에서 r을 가리키고 있던 링크를 null 로 바꿔줘야 함.<br>
case 2: r의 자식 노드가 1개인 경우. r의 부모 노드에서 r을 가리키고 있던 링크를 r의 자식을 가리키도록 바꿔주면 됨.<br>
case 3: r의 자식 노드가 2개인 경우. 우선 자리에 옮겨놓아도 이진 검색 트리의 성질을 전혀 깨지 않는 원소를 찾음. 좌서브 트리의 원소들보다 크고, 우서브 트리의 원소들보다 작아야 하므로 트리 전체에 딱 2개 있음. 좌서브 트리에서 가장 큰 원소 혹은 우서브 트리에서 가장 작은 원소임. 해당 원소 s를 기준으로 하면 r을 삭제한 후 직후 원소와 바꾼 후 s의 부모가 s의 오른자식을 가리키도록 노드를 바꿔줌. s는 왼자식을 가질 수 없음.(우서브 트리에서 가장 작은 원소이기 때문임.)<br>

<pre>
delete(t, x):
  if (t=null)
    에러("item not found!")
  else if (x = t.item)
    t <- deleteNode(t)
    return t
  else if (x < t.item)
    t.left <- delete(t.left, x)
    return t
  else
    t.right <- delete(t.right, x)
    return t
 
deleteNode(t):
  if (t.left = null && t.right = null)
    return null
  else if (t.left = null)
    return t.right
  else if (t.right = null)
    return t.left
  else
    (minItem, node) <- deleteMinItem(t.right)
    t.item <- minItem
    t.right <- node
    return t

deleteMinItem(t):
  if (t.left = null)
    return (t.item, t.right)
  else
    (minItem, node) = deleteMinItem(t.left)
    t.left <- node
    return (minItem, t)
</pre>

**:pushpin: 이진 검색 트리의 성질**

**정수 h>=1에 대해, 높이 h인 포화 이진 트리의 리프 노드의 총 수 l(h)=2^(h-1)이다.**<br>
1. 베이스 케이스: h=1일 때 리프 노드 1개이므로 2^(1-1) = 1이다.<br>
2. 귀납적 가정: h=k일 때 리프 노드가 2^(k-1)이라고 가정한다.<br>
3. 귀납적 전개: h=k+1일 때의 리프 노드는 h=k일 때의 리프 노드가 2배로 있는 것과 같으므로 2^(k-1)*2 = 2^k이므로 증명 완료.<br>

**정수 h>=0에 대해, 높이 h인 포화 이진 트리의 총 노드 수 n(h)=2^h - 1이다.**<br>
1. 베이스 케이스: h=1일 때 노드가 1개 이므로 2^1 - 1 = 1이다.<br>
2. 귀납적 가정: h=k일 때 노드가 2^k - 1개라고 가정한다.<br>
3. 귀납적 전개: h=k+1일 때의 노드는 h=k일 때의 서브 트리가 두 개 있고, 그 위에 루트 노드가 있는 것과 마찬가지이다. 따라서 2*(2^k - 1) + 1 = 2^(k+1) - 1이므로 증명 완료.<br>

**정수 h>=0에 대해 높이 h인 이진 트리는 2^h-1개 이하의 노드를 갖는다.**<br>

**총 n개의 노드를 가진 이진 트리의 높이는 적어도 h >= [log2(n+1)]이다.**<br>

**총 n개의 노드를 가진 이진 트리의 최대 높이는 n이다.**<br>

**:pushpin: 순회**

이진 검색 트리에서 모든 노드를 방문하는 것을 순회라고 함.

<pre>
preOrder(r):
  if (r!=null)
    r.visited = true
    preOrder(r.left)
    preOrder(r.right)
    
inOrder(r):
  if (r!=null)
    inOrder(r.left)
    r.visited = true
    inOrder(r.right)
    
postOrder(r):
  if (r!=null)
    postOrder(r.left)
    postOrder(r.right)
    r.visited = true
</pre>

<h2><a id="11">:pencil2: Chapter 11. 균형 검색 트리</a></h2>

균형 이진 검색 트리는 최악의 경우에도 이진 트리의 군형이 잘 맞도록 유지해서 작업들이 항상 O(log n) 시간을 보장함.<br>

**:pushpin: AVL 트리 개요**

AVL 트리는 트리 내의 어떤 노드도 좌서브 트리와 우서브 트리의 높이 차가 1보다 크지 않은 상태로 유지되는 이진 검색 트리임.<br>
노드의 필드는 이진 검색 트리의 노드에 있는 item, left, right에 더하여 서브 트리의 높이인 height가 있음.<br>
어떤 노드의 높이란 그 노드를 루트로 하는 서브 트리의 높이를 말함.<br>
AVL 트리의 균형이 깨지는 서브 트리는 하나일 수도 있지만 둘 이상이 될 수도 있음.<br>
여러 서브 트리에서 균형이 깨진 경우, 균형이 깨진 서브 트리 중 가장 낮은 곳에 있는 것부터 수선을 시작함.<br>

**:pushpin: AVL 트리 수선**

AVL 트리의 좌회전
<pre>
좌회전(t):
  Rchild = t.right
  RLchild = Rchild.left
  Rchild.left = t
  t.right = RLchild
  Rchild.height = max(Rchild.right.height, Rchild.left.height) + 1
  t.height = max(t.right.height, t.left.height) + 1
</pre>

AVL 트리의 우회전
<pre>
우회전(t):
  Lchild = t.left
  LRchild = Lchild.right
  Lchild.right = t
  t.left = LRchild
  Lchild.height = max(Lchild.right.height, Lchild.left.height) + 1
  t.height = max(t.left.height, t.right.height) + 1
</pre>

t를 루트로 하는 트리 수선 작업은 t의 네 손자 서브 트리 중 가장 깊은 것에 따라 다음 네 가지 유형으로 나뉨.<br>
LL: t.left.left가 가장 깊음. t를 기준으로 우회전하여 해결함.<br>
LR: t.left.right가 가장 깊음. t.left를 기준으로 좌회전 후 t를 기준으로 우회전하여 해결함.<br>
RR: t.right.right가 가장 깊음. t를 기준으로 좌회전하여 해결함.<br>
RL: t.right.left가 가장 깊음. t.right를 기준으로 우회전 후 t를 기준으로 좌회전하여 해결함.<br>
때로는 이렇게 서브 트리 t의 균형을 해결한 결과로 t의 상위 트리에서 새롭게 균형이 깨질 수도 있음.<br>
운이 나쁘면 아래쪽에서 생긴 균형 문제가 재귀적으로 루트까지 반복하여 생길 수 있음.<br>
이런 일은 삭제 직후에만 발생하는데, 삭제 후 깊이가 얕아져서 수선 후 서브 트리 전체의 깊이가 낮아질 수 있어 상위 트리에서 균형이 깨질 수 있기 때문임.<br>
삽입을 하면 깊이가 깊어져서 문제가 발생하는데, 이 때는 해당 타입에 대해 한 번만 수선하면 깊이가 얕아지므로 추가 문제가 발생하지 않음.<br>

**:pushpin: AVL 트리 구현**

핵심 원리는 삽입과 삭제 과정에서 높이에 변화가 생길 가능성이 있는 모든 곳에서 AVL 균형을 체크하고, 만일 균형이 깨지면 균형 맞추기 작업을 하는 것임.<br>
None이 아닌 AVLNode 타입의 노드 NIL을 생성하여 모든 None 레퍼런스가 이 노드를 가리키게 하였음.<br>
이는 서브 트리의 높이 계산을 위한 필드 height를 쉽게 처리하기 위해서임.<br>
x가 None이면 x.height는 존재하지 않는 필드라 에러가 남.<br>
NIL을 사용하면 노드 x가 None이어도 NIL.height가 존재하여 다른 노드들과 높이 관련 작업을 동일하게 처리할 수 있음.<br>
NIL.height의 값은 0으로 초기화해두는데, 이런 방식으로 사용하는 노드를 흔히 경계 노드(sentinel)이라 함.<br>

**:pushpin: 레드 블랙 트리 개요**

RB 트리에서는 통상적인 리프 노드 다음에 null 리프 노드가 한 층 더 있다고 가정함. RB 트리에서 리프 노드란 이 null 리프를 가리키는 것임.
RB 트리는 모든 노드에 레드 또는 블랙의 색을 칠함.<br>
RB 특성은 다음 4가지임.<br>
1. 루트는 블랙이다.<br>
2. 모든 리프 노드는 블랙이다.<br>
3. 루트로부터 임의의 리프 노드에 이르는 경로에 레드 노드가 2개 연속으로 출현하지 못 한다.<br>
4. 루트 노드에서 임의의 리프 노드에 이르는 경로에서 만나는 블랙 노드의 수는 모두 같다.<br>

**:pushpin: 레드 블랙 트리 수선**

RB 트리에서 하는 검색은 트리 내용을 변경하지 않으므로 이진 검색 트리에서 하는 검색과 동일함.<br>
삽입과 삭제도 기본적으로 이진 검색 트리와 동일하나 삽입이나 삭제 후 RB 특성을 위반하는 경우가 생김.<br>
다음은 삽입 시 균형이 깨지는 경우의 수선임.<br>

RB 트리에서 노드를 삽입할 때는 먼저 이진 검색 트리의 삽입 알고리즘에 따라 삽입한 다음 새 노드의 색상을 일단 레드로 칠함. 이 노드를 x라 하자.<br>

**x의 부모 노드 p가 블랙일 경우**<br>
어떤 경우든 x에 레드를 칠한 것으로 인해 특성 3과 4를 깨지 않아서 x의 색상을 레드로 칠하면 삽입이 완료됨.<br>

**x의 부모 노드 p가 레드일 경우**<br>
특성 3과 4에 의해 p의 자식 노드는 둘 다 NIL일 수 밖에 없음.
또한 p의 부모 노드인 p2는 반드시 블랙임.<br>
x 주변에서 레드나 블랙 두 가지가 다 가능한 건 p의 형제 노드 s뿐임.<br>

case1: s가 레드<br>
p와 s의 색상을 레드에서 블랙으로 바꾸고, p2의 색상을 블랙에서 레드로 바꿈.<br>
만약 p2이 루트면 p2의 색상을 다시 블랙으로 바꾸고 끝냄.<br>
p2이 루트가 아니면 p2의 부모 색상을 확인해야 함.<br>
p2의 부모가 블랙이면 RB 특성이 만족되어서 끝나지만, 레드면 3이 위반되어 처음과 같은 문제가 발생함.<br>
p2를 문제 발생 노드로하여 재귀적으로 다시 시작함.<br>

case2: s가 블랙<br>

case2-1: x가 p의 왼자식<br>
p2를 중심으로 우회전하고 p와 p2의 색상을 맞바꿔줌.<br>

case2-2: x가 p의 오른자식<br>
p를 중심으로 좌회전하면 case 2-1이 됨.<br>
case2-1와 같이 문제를 해결함.<br>

**:pushpin: 레드 블랙 트리 정리**

RB 트리는 최악의 경우에도 깊이가 O(log n)임.<br>
루트에서 임의의 리프 노드에 이르는 경로에 존재하는 블랙 노드의 개수는 log n을 넘을 수 없음.<br>
특성 3에 의해 임의의 리프에 이르는 경로상에서 레드 노드의 수가 블랙 노드의 수보다 많을 수는 없음.<br>
따라서 가장 긴 경로라고 해도 2log n을 넘지않음.<br>
검색 시간은 O(log n)이고 삽입과 삭제도 O(log n)임.<br>
case2는 상수 시간에 끝나고, case1은 case1을 재귀적으로 호출해 루트 노드까지 올라갈 수 있으나 깊이가 O(log n)이고 상수 시간이 드는 작업을 O(log n)번 반복하면 O(log n)의 시간이 들음.<br>

**:pushpin: B 트리 필요성**

디스크 접근은 메인 메모리 접근에 비해 많은 시간이 들음.<br>
디스크에 있는 데이터를 읽고 쓰기 위해서는 블록 단위로 접근해야 함.<br>
한 바이트만 읽거나 쓰고 싶어도 한 블록을 통째로 읽어오거나 써야함.<br>
디스크 한 블록은 물리적으로 4k 바이트가 표준임.<br>
파일 시스템이나 응용 프로그램에서는 더 큰 사이즈의 논리적 블록을 쓸 수 있는데, 이 블록을 소프트웨어 레벨에서는 페이지라고 부름.<br>
페이지는 32K바이트나 64K바이트 블록도 가능함.<br>
이진 검색 트리는 모두 메인 메모리에 올려서 사용한다고 가정했는데, 이런 색인을 내장 색인이라고 함.<br>
색인의 규모가 너무 크거나 메인 메모리가 충분하지 않을 때는 디스크에 두고 사용할 수 밖에 없는데, 이렇게 메인 메모리 외부에 놓고 사용하는 색인을 외장 색인이라고 함.<br>
디스크에 색인을 두어야 한다면 디스크의 특성을 최대한 활용하여 디스크 접근 시간으로 인한 비효율을 최대한 줄여야함.<br>
이런 동기에서 나온 대표적인 색인이 B트리임.<br>

**:pushpin: B 트리 개요**

디스크에 있는 상태로 사용되는 검색 트리를 외장 검색 트리라고 함.<br>
분기의 수가 2개를 넘으면 다진 검색 트리라고 함.<br>
B 트리는 외장 다진 검색 트리임.<br>
검색 트리의 분기 수를 늘리면 검색 트리의 기대 깊이를 낮출 수 있음.<br>
B 트리의 한 노드에는 최대 K개까지의 키가 크기순으로 저장되어 있음.<br>
키가 K개 있으면 이 노드는 K+1개의 자식을 가짐.<br>
이들 각각에 대응되는 서브 트리를 T0, T1, ...라고 하면 Ti의 모든 키들은 keyi-1보다 크고 keyi보다 작음.<br>

**B트리의 특성**<br>

1. 루트를 제외한 모든 노드는 [K/2] ~ K개의 키를 가짐.<br>
2. 모든 리프 노드는 같은 깊이를 가짐.<br> 

B 트리는 분기의 수를 가능하면 늘리되 노드의 활용도를 높이기 위해 각 노드가 채울 수 있는 최대 허용량에서 반 이상이 키를 채우도록 강요함.<br>
임의의 키가 검색키와 일치했을 때, 해당 키를 가진 레코드에 접근할 수 있는 페이지 번호가 있어야함.<br>
또한 부모 노드의 레퍼런스 1개, 각각의 자식 노드에 대한 레퍼런스가 있어야 하며 이들은 모두 페이지 번호로 나타냄.<br>
예를 들어 디스크의 한 블록이 4096바이트이고, 키의 크기가 16바이트, 페이지 번호가 4바이트면, 각 블록은 최대 170개의 키를 가질 수 있음.<br>
디스크 블록 크기와 노드의 크기를 일치시키는 이유는 디스크에서 정보를 읽어올 때 블록(페이지) 단위로 읽어오기 때문에 최대한 효율을 높이기 위해서임.<br>
페이지 번호는 디스크에서 레코드의 구체적인 위치가 아닌 해당 레코드가 저장된 페이지의 번호임.<br>
페이지 번호를 이용해서 해당 페이지를 통째로 메인 메모리로 가져온 후 그 안에서 해당 레코드를 찾아서 처리함.<br>
메인 메모리에서 해당 레코드를 찾는데 걸리는 시간은 디스크에서 가져오는 시간에 비하면 무시할 수 있을 정도로 작음.<br>

**:pushpin: B 트리 알고리즘: 검색**

이진 검색 트리에서는 검색 키가 노드의 유일한 키와 일치하는지 확인하는 반면, B트리에서는 노드의 여러 키 중 검색 키와 일치하는 것이 있는지 확인함.<br>
노드에서 Keyi-1 < x < Keyi인 두 키를 찾아서 분기해야 할 자식 노드를 찾음.<br>
자식으로 분기하고 나면 깊이만 하나 내려간 똑같은 검색 문제를 재귀적으로 풀음.<br>

**:pushpin: B 트리 알고리즘: 삽입**

1. x를 삽입할 리프노드를 찾는다.<br>
2. 노드 r에 공간 여유가 있으면 키를 삽입하고 끝낸다.<br>
3. 노드 r에 여유가 없으면 형제 노드에 공간 여유가 있는지 살펴본다. 형제 노드에 공간 여유가 있으면 키를 하나 넘기고 끝낸다.<br>
4. 형제 노드에 여유가 없으면 노드를 2개로 분기한다. 분기 작업은 부모 노드로 키를 하나 넘기는 작업을 포함한다. 부모 노드로 넘기는 키는 분할하는 노드의 키들 중 중앙값으로 한다.<br>

<pre>
#알고리즘 스케치
BTreeInsert(t,x):
  x를 삽입할 리프 노드 r을 찾는다.
  x를 r에 삽입 시도한다.
  if (r에 오버플로우 발생) clearOverflow(r)
  
ClearOverflow(r):
  if (r의 형제 노드 중 여유가 있는 노드가 있음)
    r의 남는 키를 넘긴다.
  else
    r을 둘로 분할하고 가운데 키를 부모 노드로 넘긴다.
    if (부모 노드 x에 오버플로우 발생) clearOverflow(x)
</pre>

**예시 1**<br>

부모 노드: [7,13,25,34]<br>
자식 노드: [1,2,3,4,6], [8,9,10],..<br>

여기서 5를 삽입하면 오버플로우가 발생함.<br>
6을 형제노드에 바로 넘기면 검색 트리의 성질이 깨지므로, 부모 노드에 있는 7을 형제 노드에 넘기고, 6을 부모 노드에 넘김. 이를 재분배라고 함.<br>

**예시 2**<br>

부모 노드: [6,13,25,34]<br>
자식 노드: ..., [27,28,30,31,33], [37,38,40,41,45]<br>

39를 삽입하면 오버플로우가 발생함.<br>
형제 노드에도 공간의 여유가 없으므로 노드를 분할해야 함.<br>
40을 부모 노드에 넘기고 [37,38,39]와 [41,45]로 분할함.<br>

**예시 3**<br>

부모 노드: [6,13,25,34,40]<br>
자식 노드: ..., [15,17,19,20,23], [27,28,30,31,33], [35,36,37,38,39], ...<br>

32를 삽입하면 오버플로우가 발생함.<br>
양쪽 형제 노드에 공간 여유가 없으므로 31을 부모 노드에 보내고 분할함.<br>

부모 노드: [6,13,25,31,34,40]<br>
자식 노드: ..., [27,28,30], [32,33], ...<br>

부모 노드에서 오버플로우가 발생하므로 31을 루트 노드로 보내고 [6,13,25], [34,40]으로 분할함.<br>

**:pushpin: B 트리 알고리즘: 삭제**

1. x를 키로 갖고 있는 노드를 찾는다.<br>
2. 이 노드가 리프 노드가 아니면 x의 직후 원소 y를 가진 리프 노드 r을 찾아 x와 y를 맞바꾼다.(직후 원소 y는 반드시 리프 노드에 있다.)<br>
3. 리프 노드 r에서 x를 제거한다.<br>
4. x를 제거한 후 노드에 언더플로우가 발생하면 적절히 해소한다.<br>

<pre>
BTreeDelete(t,x,r):
  if (x가 리프 노드가 아님)
    x의 직후 원소 y를 가진 리프 노드를 찾는다.
    x와 y를 맞바꾼다.
  리프 노드에서 x를 제거하고 이 리프 노드를 r이라 한다.
  if (r에서 언더플로우 발생) clearUnderflow(r)
  
clearUnderflow(r):
  if (r의 형제 노드 중 키를 하나 내놓을 수 있는 여분을 가진 노드가 있음)
    r이 키를 넘겨받는다.
  else
    r의 형제 노드와 r을 병합하고 부모의 키를 하나 넘겨받는다.
    if (부모 노드 p에 언더플로우 발생) clearUnderflow(p)
</pre>

**예시 1**<br>

부모 노드: [4,8]<br>
자식 노드: [1,2,3], [5,6], [9,10]<br>

4를 삭제하려면 4와 5를 교환하고 삭제한다.<br>
이 때 두 번째 자식 노드에서 언더플로우가 발생한다.<br>

부모 노드: [5, 8]<br>
자식 노드: [1,2,3], [6], [9,10]<br>

형제 노드에서 키를 내놓을 수 있는 여분이 있으므로 3을 가져오는데, 3을 바로 가져올 수가 없음.<br>
따라서 3을 부모 노드에 넣어주고, 부모 노드의 5를 가져옴.<br>

**예시 2**<br>

부모 노드: [3,8]<br>
자식 노드: [1,2], [5,6], [9,10]<br>

9를 삭제하면 언더플로우가 발생함.<br>
따라서 두 번째 자식 노드와 부모 노드의 8과 세 번째 자식 노드를 합침.<br>

루트 노드: [15]<br>
부모 노드: [3], [19,22]<br>
자식 노드: [1,2], [5,6,8,10], [16,18], [20,21], [24,25,26]<br>

부모 노드에서 언더플로우가 발생해 루트 노드와 옆에 있는 형제 부모 노드를 모두 합쳐서 하나의 노드로 만들음.<br>

**:pushpin: B 트리 성능**

B 트리에서 임의의 노드가 최대 d개의 자식을 가질 수 있다면 (d-1개의 키) 최소한 [(d-1)/2] + 1개의 자식을 가져야 함.<br>
그러므로 B 트리의 깊이는 최악의 경우에도 대략 logd/2 n보다 깊을 수 없음.<br>
균형을 잘 맞추면 높이가 logd n에 근접하므로, 높이는 logd n과 logd/2 n 사이에서 결정됨.<br>
따라서 높이는 O(log n)임.<br>
B 트리의 작업 수행 시간은 디스크 접근 횟수를 기준으로 함.<br>
B 트리의 검색 시간은 O(log n)임.<br>
삽입 작업은 실패하는 검색을 수행할 때 O(log n)이 소요되고, 오버플로우가 발생하지 않으면 트리의 맨 아래에 원소 하나를 추가할 때 상수 시간이 듬.<br>
오버플로우가 반복적으로 발생해 루트 노드까지 파급되어도 트리의 높이에 비례하는 상수 시간이 들기 때문에 시간 복잡도는 O(log n)임.<br>
삭제 작업은 삭제 원소 검색과 직후 원소를 찾는 작업에 O(log n)의 시간이 듬.<br>
언더플로우가 발생하지 않으면 노드에서 단순히 키 하나를 제거할 때 상수 시간이 듬.<br>
언더플로우가 반복해서 루트 노드까지 파급되어도 트리 높이에 비례하는 상수 시간이 들어 삭제 작업은 O(log n) 시간이 듬.<br>

<h2><a id="12">:pencil2: Chapter 12. 해시 테이블</a></h2>

**:pushpin: 해시 테이블 개요**

해시 테이블은 저장된 자료의 양에 상관없이 평균 Θ(1) (상수 시간) 작업이 가능하게 하는 효율적인 자료구조임.<br>
키와 키의 비교를 기본으로 하는 알고리즘의 평균 시간은 Ω(log n)이 최선이지만, 해시 테이블은 키끼리의 비교가 아니라 키 자신의 값으로 자리가 결정됨.<br>
임의의 키를 해시 테이블에 저장하려면 해당 키의 해싯값을 계산해야 하는데, 해싯값은 해시 함수에 의해 계산됨.<br>
해시 테이블이 총 m개의 키를 저장할 수 있다면 테이블의 각 자리는 0부터 m-1의 주소값을 가짐.<br>
해시 함수는 임의의 킷값을 입력으로 받아 0, 1, ..., m-1 중 한 값을 리턴함.<br>
이 리턴 값이 바로 해당 키를 저장하는 자리임.<br>
한 주소에 여러 값이 들어가 있는 것을 충돌이라고 함.<br>
해시 테이블에 원소가 차 있는 비율을 적재율이라고 하는데, 해시 테이블의 크기가 m이고, 저장된 키의 총 수가 n이면 적재율은 n/m임. 이를 보통 a라고 함.<br>
적재율이 높을 수록 충돌 확률은 높아져서 해시 테이블의 성능은 나빠짐.<br>

**:pushpin: 해시 함수**

해시 함수는 킷값을 입력으로 받아 해시 테이블 상의 주소를 리턴함.<br>
입력 키는 해시 테이블 전체에 고루 분산시켜 저장해야 함.<br>
두 키가 상대적으로 비슷하다고 해서 다른 키들보다 상대적으로 해싯값이 더 비슷하지 않아야함.<br>
이 성질을 잘 만족해야 서로 다른 두 키가 충돌할 확률이 적어짐.<br>

**나누기 방법**<br>

h(x) = x % m<br>
m은 테이블의 크기이며, 2의 멱수에 가깝지 않은 소수를 택하는 것이 좋음.<br>
m이 2^p라면 입력 키의 하위 p비트에 의해 해싯값이 결정되기 때문에 해싯값을 분산시키기 어려움.<br>
해싯값은 입력 키의 모든 비트를 이용하는 것이 확률적으로 좋은 분포를 갖도록 하는데 유리함.<br>

**곱하기 방법**<br>

나누기 방법은 해시 테이블 크기보다 큰 수를 해시 테이블 범위에 들어오도록 수축시키는 방법임.<br>
곱하기 방법은 입력 값을 0과 1사이의 소수에 대응시킨 후 해시 테이블 크기 m을 곱하여 0부터 m사이로 팽창시킴.<br>
이를 위해 해시 함수의 특성을 결정짓는 0<A<1 범위의 상수 A를 미리 준비해놓아야 함.<br>

1. x에 A를 곱한 다음 소수부만 취한다.<br>
2. 소수부에 m을 곱하여 그 정수부를 취한다.<br>

h(x) = [m(xA % 1)]<br>
곱하기 방법은 나누기 방법과 달리 m을 아무렇게나 잡아도 상관없음.<br>
그럼에도 불구하고 컴퓨터 이진수 환경에 맞게 m = 2^p로 잡는 것이 자연스러움.<br>
이는 컴퓨터 시스템에서 메모리를 할당할 때 흔히 2의 멱수 크기로 할당하기 때문임.<br>
상수 A에 따라 해싯값의 분포가 달라지는데, 크누스는 A값으로 (루트5 - 1) / 2를 제안함.<br>

**:pushpin: 충돌 해결: 체이닝**

같은 주소로 해싱되는 키를 모두 하나의 연결 리스트에 매달아서 관리하는 것.<br>
해시 테이블 크기가 m이면, 최대 m개의 연결 리스트가 존재할 수 있음.<br>
체이닝에서 임의의 키를 삽입할 때는 해싯값이 가리키는 연결 리스트에 맨 앞에 삽입함.<br>
맨 끝에 삽입할 수도 있지만 번거로움.<br>

**:pushpin: 충돌 해결: 개방 주소 방법**

체이닝과 달리 추가 공간을 사용하지 않으며, 충돌이 일어나더라도 어떻게든 주어진 테이블 공간에서 해결함.<br>
따라서 모든 키가 반드시 자신의 해싯값과 일치하는 주소에 저장된다는 보장이 없음.<br>

1. 해시 함수를 계산한 후 해당 주소에 다른 키가 없으면 그 자리에 넣음.<br>
2. 그 자리에 다른 키가 있으면 정해진 규칙에 의해 다음 자리를 찾는데, 이는 빈 자리가 나올 때까지 계속 이어짐.<br>

처음 계산한 해시 함수를 h0(x), 충돌이 일어나서 다음 주소를 계산한 것은 h1(x), ... 로 표현하며 이 중 h0(x)은 h(x)를 뜻함.<br>
개방 주소 방법은 테이블에 주어진 공간만 사용할 수 있으므로 적재율이 1을 넘을 수 없음.<br>
적재율이 어느 정도 이상 높아지면 효율이 급격히 떨어짐. 
따라서 적당한 임계점(보통 1/2)을 설정한 후 그 임계점을 넘으면 해시 테이블의 크기를 두 배로 늘리는 것이 일반적임.<br>
테이블 크기가 바뀌면 해시 함수가 바뀌므로 모든 키를 다시 해싱함.<br>

**삭제 시 처리법**<br>

다른 주소에 저장된 키를 찾을 때 검색하는 경로 중 삭제된 원소가 있다고 가정하자.<br>
이런 경우에는 해당 자리가 비어있으면, 검색 알고리즘은 해당 원소가 없다고 판단할 것이다.<br>
이를 방지하기 위해서 해당 자리에 DELETED라는 상수를 집어넣음.<br>
삭제된 자리마다 DELETED가 있으면 공간 활용이 비효율적이라고 생각할 수 있지만, 삽입 시 DELETED를 제거하고 키를 넣기 때문에 큰 차이는 없음.<br>

**:pushpin: 개방 주소 방법 유형**

**선형 탐색**<br>

충돌이 일어난 자리에서 i에 관한 일차 함수의 보폭으로 점프함.<br>
hi(x) = ( h(x) + ai + b ) % m<br>
테이블의 경게를 넘어갈 때는 맨 앞으로 가면 됨.<br>
특정 영역에 키가 몰릴 때는 치명적으로 성능이 떨어지며, 이런 현상을 1차 군집이라고 함.<br>
영역이 커질 수록 해당 영역으로 해싱될 확률이 커지므로, 군집이 심하지 않은 영역에 비해 영역의 크기가 빨리 커짐.<br>
a=1, b=0이 아닌 경우에도 1차 군집 현상이 일어나며, a간격으로 연속해서 채워진 키들이 1차 군집을 이룸.<br>

**이차원 탐색**<br>

보폭을 이차 함수에 의해 넓혀가는 탐색 방법임.<br>
hi(x) = ( h(x) + ai^2 + bi + c ) % m<br>
1차 군집이 생겨 특정 영역에 키가 몰려도 그 영역을 빨리 벗어날 수 있음.<br>
그러나 여러 개의 키가 동일한 초기 해시 함수 h0를 가지면, 모두 같은 순서로 탐색하게 되므로 보폭이 점점 넓어진다고 해도 비효율을 피할 수 없음. 이를 2차 군집이라고 함.<br>

**더블 해싱**<br>

더블 해싱은 2개의 함수를 사용함.<br>
hi(x) = ( h(x) + i * f(x) ) % m<br>
h(x)와 f(x)는 서로 다른 해시 함수임.<br>
충돌이 생겨 다음에 올 주소를 계산할 때 두 번째 해시 함수값만큼 점프함.<br>
두 키의 첫 번째 해싯값이 같더라도 두 번째 함수값이 같을 확률은 매우 적으므로, 서로 다른 보폭으로 점프하게 됨.<br>
그러므로 2차 군집 문제는 발생하지 않음.<br>
2개의 해시 함수를 정할 때 권장되는 방법은 소수 m에 대하여 h(x) = x % m으로 잡고, m보다 조금 작은 소수 m'에 대해 f(x) = 1 + (x % m')로 잡는 것임.<br>
f(x)는 해시 테이블 크기 m과 서로소여야 하는데, 만일 f(x)가 m이 1보다 큰 최소공약수 d를 가지면 x의 자리를 찾기 위해 해시 테이블 전체 중 기껏해야 1/d밖에 보지 못하기 때문임.<br>
해시 테이블 크기 m을 소수로 잡으면 f(x)의 값이 양수이기만 하면 이들은 항상 서로소이므로 어려운 조건은 아님.<br>

**:pushpin: 체이닝과 개방 주소 방법 비교**

**검색 시간**<br>

체이닝에서 적재율이 a일 때 탐색 횟수의 기대치는 a에 비례함.<br>
이는 적재율이 a면 각 리스트에 저장된 키 수의 기댓값이 a이기 때문임.<br>
개방 주소 해싱에서 검색에 실패할 경우 탐색 횟수의 기대치는 1/(1-a) 이하임(0<=a<=1).<br>
검색에 성공할 경우는 (1/a) * log (1/(1-a)) 이하임.<br>
값에 대한 증명은 생략하지만, a가 1에 가까울 수록 값이 급속히 커진다는 점을 알고 있으면 됨.<br>

이론적으로는 체이닝이 개방 주소 방식보다 좋음.<br>
개방 주소 방식은 충돌이 일어나면 다른 주소에 어떻게든 자리를 잡기 때문에 최초 해싯값이 같이 않은 키일 지라도 검색 과정에서 방해를 할 수 있음.<br>
체이닝은 충동를 일으킨 키만 같은 연결 리스트에 매달기 때문에 충돌을 일으키지 않은 키끼리는 검색에 지장을 주지 않음.<br>
그러나 각 연결 리스트마다 헤드를 하나씩 두어야 하고, 연결 리스트를 만들기 위해 각 키마다 연결을 위한 공간이 더 필요함.<br>
따라서 적재율이 높지 않을 때 (1/2이하)는 개방 주소 방법이 더 선호됨.<br>

개방 주소 방법은 적재율이 절대 1을 넘지 못 하는 반면, 체이닝은 제한이 없음.<br>
그렇지만 어떤 경우든 적재율이 높으면 해싱의 효율이 떨어짐.<br>
해시 테이블은 저장과 검색이 궁극적으로 상수 시간을 지향함.<br>
따라서 적절하게 낮은 적재율을 유지할 필요가 있음.<br>

<h2><a id="13">:pencil2: Chapter 13. 그래프</a></h2>

**:pushpin: 그래프란?**

그래프는 현상이나 사물을 정점과 간선으로 표현한 것임.<br>
정점(vertex)는 대상이나 개체를 나타내고, 간선(edge)는 이들 간의 관계를 나타냄.<br>
정점 집합 V와 이들 사이에 존재하는 간선 집합 E로 구성된 그래프 G는 보통 G=(V,E)로 표시함.<br>
정점의 총 수 |V|는 흔히 n으로 표기함.<br>
정점 u와 정점 v를 잇는 간선은 {u, v} 또는 (u, v)로 나타냄.<br>
{u, v}는 주로 두 방향 간선, (u, v)는 방향 간선을 나타낼 때 쓰임.<br>

**:pushpin: 그래프의 표현: 인접 행렬**

G=(V,E)에서 정점의 총 수가 n이면 nxn 행렬을 준비함.<br>
무방향 그래프의 경우 정점 i와 정점 j사이에 간선이 있으면 행렬 (i,j), (i,j)의 원소 값을 1로 할당하고, 나머지 자리에는 0을 할당함.<br>
인접 행렬에서 0이 아닌 원소의 수는 간선 총 수의 2배이며, 대각선을 기준으로 대칭 행렬이 됨.<br>
간선으로 연결된 두 정점을 인접한(adjacent) 정점이라고 함.<br>
방향 그래프의 인접 행렬은 대칭이 아니며, 0이 아닌 원소의 수는 간선 총 수와 같음.<br>

**장점**<br>

이해하기 쉽고, 간선의 존재 여부를 즉각 알 수 있음.<br>
간선의 밀도가 아주 높은 그래프에 적합함.<br>

**단점**<br>

nxn 행렬이 필요하므로 n^2에 비례하는 θ(n^2)의 공간이 필요함.<br>
행렬 준비 과정에서 행렬의 모든 원소를 채우는 데만 n^2에 비례하는 시간이 듦.<br>
간선의 밀도가 낮은 경우 나머지 공간은 모두 0으로 채워져 시간과 공간이 낭비됨.<br>

**:pushpin: 그래프의 표현: 인접 리스트**

각 정점에 인접한 정점들을 리스트로 표현하는 방법.<br>
정점마다 리스트를 하나씩 만드는데, 전통적으로 연결 리스트를 씀.<br>
존재하지 않는 간선은 리스트에 나타나지 않음.<br>
무방향 그래프의 경우 간선 하나에 대하여 노드가 2개씩 만들어지며, 필요한 총 노드의 수는 총 간선 수의 2배임.<br>
각 노드는 <정점 번호, 다음 정점으로 가는 링크>로 구성됨.<br>
방향 그래프에서는 간선 하나당 노드가 하나씩 존재함.<br>
가중치가 더해진 그래프를 인접 리스트로 표현할 때, 각 노드는 <정점 번호, 가중치, 다음 정점으로 가는 링크>로 구성됨.<br>

**장점**<br>

공간이 간선의 총 수에 비례하는 양만큼만 필요해 대체로 행렬에 비해 낭비가 거의 없음.<br>
모든 가능한 정점 쌍에 비해 간선의 수가 적을 때(희소 그래프) 특히 유용함.<br>

**단점**<br>

거의 모든 정점 쌍에 대해 간선이 존재하는 경우, 오히려 연결 리스트의 링크 정보를 표현하기 위한 오버헤드만 더 듦.<br>
정점 i와 j간에 간선이 존재하는지 알아볼 때 리스트에서 차례대로 훑어야하므로 인접 행렬보다 시간이 더 들고, 최악의 경우 n에 비례하는 시간이 듦.<br>

**:pushpin: 그래프의 표현: 인접 배열**

간선의 수에 비례하는 공간을 쓰면서, 인접 리스트보다 간선의 존재 여부를 더 빨리 체크할 수 있음.<br>
각 정점에 연결된 정점들을 연결 리스트로 저장하는 대신 배열로 저장하는 방법임.<br>
연결 리스트에 쓰이는 링크를 위한 공간도 절약하고, 노드들이 메모리에 흩어져서 존재하는 불안감도 해소됨.<br>
그래프는 대부분 한번 만들어지면 변하지 않는 경우가 많아 정적인데, 이런 경우 연결 리스트보다 배열이 효율적임.<br>
배열을 정렬된 형태로 만들면 이진 탐색을 쓸 수 있음.<br>
임의의 정점에 인접한 정점의 수가 k라면 [log2 k] + 1번 이내의 비교로 j의 존재를 알 수 있음.<br>
각 정점의 인접 배열 헤더에 인접 정점이 몇 개인지 표시해두면 쉽게 탐색할 수 있음.<br>
각 정점의 인접 배열을 위해 공간을 각각 할당받을 수도 있고, 하나의 배열을 함께 쓸 수도 있음.<br>
하나의 배열을 쓸 때는 각 인접 배열의 크기를 다 더해 필요한 전체 배열의 크기를 계산한 다음 하나의 배열을 할당받음.<br>
각 헤더에는 자신의 인접 배열이 끝나는 자리를 표시해둠.<br>

**:pushpin: 그래프의 표현: 인접 해시 테이블**

다루어야 할 그래프의 크기가 엄청나면 이진 탐색도 부담스러울 수가 있음.<br>
이 때, 인접 배열을 해시 테이블로 교체할 수 있음.<br>
인접 배열 크기의 2배 정도 되는 공간을 할당하여 적재율을 0.5로 만들면 평균 2번의 비교로 찾을 수가 있음.<br>
해시 테이블을 위한 공간도 인접 배열의 경우와 마찬가지로 정점별로 따로 할당받을 수도 있고, 하나의 배열에 인접 배열 전체의 2배를 할당받아 정점별로 나눠쓸 수도 있음.<br>
각 정점에 연결된 정점 수의 2배 크기에 해당하는 공간을 할당해서 이 크기로 나눈 나머지를 사용하는 선형 탐색을 쓸 수도 있음.<br>
해시 테이블을 쓰면 임의의 정점에 인접한 다른 모든 정점에 순차적으로 접근해야 하는 불편이 따르지만 불가능한 것은 아님.<br>

**:pushpin: 너비 우선 탐색: BFS**

BFS는 루트를 방문한 후, 루트의 자식을 차례로 방문한다. 다음으로 루트에서 2개의 간선을 거쳐서 도달할 수 있는 정점, 루트에서 3개의 간선을 거쳐서 도달할 수 있는 정점, ... 순으로 방문함.<br>
각 정점을 처음 방문할 때 사용하는 간선은 하나이므로 시작점을 제외한 나머지 n-1개 정점 각각에 대해 첫 방문에 사용한 간선을 모으면 n-1개가 됨.<br>
그래프에서 이 간선들만 남기면 BFS 트리가 됨.<br>

<pre>
BFS(G, s):
  for each v ∈ V-{s}
    v.visited <- no
  s.visited <- yes
  enqueue(Q, s)
  while (Q != ∅)
    u <- dequeue(Q)
    for each v ∈ u.adj
      if (v.visited = no)
        v.visited <- yes
        enqueue(Q, v)
</pre>

BFS 알고리즘은 시작 정점으로부터 방문할 수 있는 모든 정점을 방문하게 해주나 그래프의 모든 정점을 방문할 수 있는 것은 아님<br>
한번의 BFS()로 끝나지 않으면 아직 방문하지 않은 정점 중 아무거나 골라 새 BFS()를 시작함.<br>
그래프 G가 2개 이상으로 끊겨 있으면 그 개수만큼 BFS()를 수행해야 함.<br>
BFS의 수행 시간은 θ(V+E)임. 이는 BFS를 여러 번 수행해야 할 경우까지 고려해서 이들을 모두 합한 시간임.<br>

**:pushpin: 깊이 우선 탐색: DFS**

DFS는 루트의 자식 정점을 하나 방문한 다음, 아래로 내려갈 수 있는 곳까지 내려감. 더 이상 내려갈 수 없으면 위로 되돌아오다가 내려갈 곳이 있으면 즉각 내려감. DFS를 백트래킹이라고도 함.<br>
DFS도 각 정점을 처음 방문할 때 사용하는 간선은 하나이므로 시작점을 제외한 나머지 n-1개 정점 각각에 대해 첫 방문에 사용한 간선을 모으면 n-1개가 됨.<br>
이 간선들만 남기면 깊이 우선 트리가 됨.<br>

<pre>
DFS(G, v):
  v.visited <- yes
  for each x ∈ v.adj
    if (x.visited = no) DFS(G, x)
</pre>

DFS도 마찬가지로 항상 그래프 G의 모든 정점을 방문하는 것은 아니고, 시작 정점 v로부터 간선을 타고 방문할 수 있는 모든 정점을 방문함.<br>
한번의 DFS()로 끝나지 않으면, 아직 방문하지 않은 정점 중 아무거나 골라 새 DFS()를 시작함.<br>
DFS의 수행 시간은 θ(V+E)임. DFS()를 여러 번 수행해야 하는 경우까지 고려해서 이들을 모두 합한 시간임.<br>

**:pushpin: 최소 신장 트리란?**

간선의 방향이 없는 그래프에서 모든 정점들 간에 간선을 따라 서로 다다를 수 있으면 연결 그래프라고 함.<br>
그래프 G=(V,E)에서 연결 상태를 유지하기 위해서는 |V|-1개의 간선이면 충분함.<br>
트리는 "싸이클이 없는 연결된 그래프"로 최소한의 간선을 사용하면서 연결된 그래프임. 따라서 간선이 |V|-1개임.<br>
연결 그래프 G=(V,E)에서 정점 집합 V를 그대로 두고 간선은 |V|-1개만 남겨 트리로 만든 것을 G의 신장 트리(spanning tree)라고 함.<br>
그래프 간선에 비용이 있으면 신장 트리를 구성하는 간선의 가중치를 다 더한 것을 신장 트리의 비용이라 함.<br>
모든 신장 트리 중 비용이 가장 낮은 트리를 최소 신장 트리라고 함.<br>

**:pushpin: 프림 알고리즘**

아무 간선도 없는 상태에서 간선을 하나씩 더하는 작업을 |V|-1번함.<br>
정점 집합 S는 처음에 시작 정점 r하나로 시작해서 한 번에 정점을 하나씩 더해나감.<br>
정점을 하나 더할 때 대응되는 간선이 하나씩 더해짐.<br>
정점 |V|-1개를 더하면 모든 정점이 집합 S에 들어오게 되고, 이 |V|-1개의 간선이 최소 신장 트리를 이룸.<br>

<pre>
Prim(G, r):
  S <- {r}
  r.cost <- 0
  1.for each u ∈ V-{r}
      u.cost <- w(ru)
  2.while (S != V)
    3.u <- deleteMin(V-S)
      S <- S U {u}
    4.for each v ∈ u.adj
      5.if (v ∈ V-S and w(uv) < v.cost)
        6.v.cost <- w(uv)
        7.v.tree <- u
        
deleteMin(Q):
  집합 Q에서 u.cost 값이 가장 작은 정점 u를 삭제하면서 리턴함.
</pre>

정점의 비용이 여러 번 바뀔 수도 있는데 값이 바뀌는 것을 이완이라고 함.<br>

**수행 시간**<br>

1의 for 루프는 n-1회 반복함. for 루프에서 단순 할당 작업을 하므로 상수 시간이 소요되어 총 θ(V)의 시간이 소요됨.<br>
2의 while 루프는 n-1회 반복됨. <br>
.cost들은 최소 힙으로 구성하면 3의 deleteMin()은 O(log V)안에 가능함. 2의 while 루프가 n-1회 반복되므로 이와 관계된 비용은 O(Vlog V)임.<br>
4는 u와 인접한 간선을 훑어보는데, 어떻게 되든 한 간선은 알고리즘을 통틀어 두 번만 보게 되어있음. 그러므로 for 루프는 while 루프를 통틀어 2|E|번 순환됨.<br>
6에서 .cost 값에 변동이 생기면 힙을 조정해주어야 하는데 이를 위해 O(log V)의 시간이 소요됨. 따라서 4와 관련된 총 비용은 O(Elog V)임.<br>
최초의 힙을 만드는 데는 O(V)면 충분하므로 프림 알고리즘의 수행 시간은 O(Elog V)임.<br>

**:pushpin: 크루스칼 알고리즘**

프림 알고리즘은 하나의 정점 집합(S)를 점점 키워나가는 방식인데 반해, 크루스칼 알고리즘은 여러 정점 집합으로 시작해서 집합들을 합쳐나가는 방식임.<br>
각 정점 집합은 싸이클이 없는 연결된 그래프로 하나의 트리에 해당함.<br>
이런 두 트리를 합쳐서 하나의 트리를 만들려면, 양 끝 점이 두 집합에 걸쳐있는 간선이 필요함.<br>
정점 하나로만 이루어진 n개의 트리로 시작하여, 두 트리를 하나로 합치는 과정을 n-1번 수행하면 하나의 트리가 됨.<br>
한 번 합칠 때마다 간선을 하나씩 사용하므로 n-1개의 간선이 사용되고, 이 n-1개의 간선이 신장 트리를 이룸.<br>

<pre>
Kruskal(G):
  T <- ∅
    1. 각각 단 하나의 정점으로만 이루어진 n개의 집합을 초기화함.
    2. 모든 간선을 가중치의 크기 순으로 정렬하여 배열 A[0, ..., |E|-1]에 저장함.
    3. while (T의 간선의 수 < n-1)
        4. A에서 최소 비용의 간선 (u-v)를 제거한다.
        5. if (정점 u와 v가 다른 집합에 속함)
            6. T <- T U {(u-v)}
            7. 정점 u와 v가 속한 두 집합을 하나로 합친다.
</pre>

크루스칼 알고리즘이 간선을 차례로 보지만 작은 순서로 보므로 일부 간선을 보지 않은 채 끝날 수 있음.<br>
2에서 모든 간선을 정렬하는데 O(Elog E) = O(Elog V)의 시간이 소요됨.<br>
3에서 while 루프는 최소 |V|-1, 최대 |E|회 반복됨.<br>
4는 정렬된 배열에서 맨 앞부터 하나씩 제거하면 되므로 상수 시간이 듦.<br>
5와 7은 두 정점이 다른 집합에 속하는지 확인하는 작업과 두 집합을 하나로 합치는 작업임. 연결 리스트로 구현할 경우 O(E + Vlog V) 시간에 할 수 잇고, 증명은 알고리즘에서 함.<br>
2가 시간을 좌우하며 총 수행시간은 O(Elog E)임.<br>

**안정성 정리**

프림 알고리즘과 크루스칼 알고리즘 모두 n-1개의 간선을 더해가나며, 이렇게 더해나가는 것이 간선이 궁극적으로 최소 신장 트리에 이르는 길을 놓치지 않아 해당 간선을 일단 최소 신장 트리에 포함시키는 것은 안전함.
<pre>
정리
간선의 가중치를 갖는 무방향 그래프 G=(V,E)의 정점들이 임의의 두 집합 S와 V-S로 나누어져 있다고 하자.
간선 (u-v)가 S와 V-S 사이의 최소 교차 간선이면 (u-v)를 포함하는 그래프 G의 최소 신장 트리가 반드시 존재한다.
</pre>

**:pushpin: 위상 정렬**

위상 정렬(Topological Sorting)은 싸이클이 없는 방향 그래프 G=(V,E)에서 V의 모든 정점을 정렬하되 다음 성질을 만족해야 함.<br>
성질: 간선 (i->j)가 존재하면 정렬 결과에서 정점 i는 반드시 정점 j보다 앞에 위치한다.<br>
싸이클이 있다면 성질을 만족시킬 수 없어 위상정렬을 할 수가 없음.<br>
정점 u의 진입 간선이란 u에 인접한 간선들 중 u로 향하는 간서이며, 진출 간섭이란 u에 연결된 간선들 중 u로부터 나가는 간선임.<br>

<pre>
topologicalSort(G):
  for i <- 0 to n-1
    진입 간선이 없는 정점 u를 선택한다.
    A[i] <- u
    정점 u와 u의 진출 간선들을 모두 제거한다.
</pre>

위상 정렬은 가중치를 갖고 싸이클이 없는 방향 그래프의 최단 경로 찾기, 컴파일러의 순차적 작업 처리 등에 사용됨.<br>
for 루프는 n번 반복되고, 반복할 때마다 1개의 정점이 선택되고, 해당 정점에 연결된 진출 간선이 모두 제거됨.<br>
따라서 각 간선은 단 한번씩만 취급되며 총 수행 시간은 θ(V+E)임.<br>
그런데 θ(V+E)는 진입 간선이 없는 정점을 찾는 것이 상수 시간안에 이루어져야 가능함.<br>

**진입 간선 없는 정점 찾기**<br>

그래프를 인접 행렬로 표현하면 행렬를 만드는데만 θ(V^2)의 시간이 소요됨.<br>
따라서 인접 리스트를 사용하고, 간선 (u->v)를 정점 u의 연결 리스트에 달아줌.<br>
이 경우 진입 간선이 없는 정점을 찾기 위해서는 모든 정점의 진출 간선 리스트를 다 보아야 함.<br>
이것만으로도 θ(V+E)의 시간이 걸려서 다른 방법이 필요함.<br>
알고리즘을 시작할 때 배열 C[0, ..., n-1]에 각 정점의 진입 간선의 수를 기록함.<br>
연결 리스트를 한 번 훑으면서 간선(u->v)를 만나면 C[v]를 1 증가시키면 됨.<br>
C[0, ..., n-1]를 한 번 훑어 0의 값을 가진 정점들을 리스트로 만들어줌.<br>
정점 u의 진출 간선(u->v)를 지울 때 C[v]를 1감소시킴.<br>
C[v]값이 0에 이르면 진입 간선 수가 0인 정점 리스트에 삽입함.<br>
진입 간선이 없는 정점을 필요로 할 때마다 이 리스트에서 아무거나 하나씩 빼주면 됨.<br>
따라서 진입 간선이 없는 정점을 찾는 것은 상수 시간에 이루어짐.<br>

**:pushpin: 최단 경로**

임의의 경로는 연속된 간선들로 이루어지며, 경로를 구성하는 간선들의 가중치 합을 해당 경로의 길이라고 함.<br>
최단 경로 문제에서 입력 그래프 유형은 크게 두 가지임.<br>
모든 간선의 가중치가 음이 아닌 경우: 다익스트라 알고리즘<br>
음의 가중치가 존재하는 경우: 벨만 포드 알고리즘<br>
벨만 포드 알고리즘은 음의 가중치는 허용하지만 가중치의 합이 음인 싸이클은 허용하지 않음. 음의 싸이클이 있으면 해당 싸이클을 계속 돌아 경로의 가중치 합을 무한정 낮출 수 있음.<br>
임의의 두 정점 간에 경로가 존재하지 않으면 이 경로의 길이는 무한대로 정의함.<br>

**:pushpin: 다익스트라 알고리즘**

<pre>
Dijkstra(G, r):
  S <- {r}
  r.cost <- 0
  for each u ∈ V-{r}
    u.cost <- w(ru)
  while (S != V)
    u <- deleteMin(V-S)
    S <- S U {u}
    for each v ∈ u.adj
      if (v ∈ V-S and u.cost + w(uv) < v.cost)
        v.cost <- u.cost + w(uv)
        v.prev <- u
        
deleteMin(Q):
  집합 Q에서 u.cost가 가장 작은 정점 u를 리턴한다.
</pre>

v.cost에는 시작 정점 r에서 정점 v에 이르는 거리를 저장함.<br>
다익스트라 알고리즘은 프림 알고리즘과 거의 같으므로 수행시간도 O(Elog V)로 동일함.
가중치가 음이 되면 작동하지 않음. 임의의 정점을 집합 S에 더할 때, r에서 해당 정점까지의 최단 거리는 계산이 끝났다는 확신이 반영되어 있기 때문임.<br>
음의 가중치가 존재한다면 이후에 더 짧은 경로가 존재할 가능성이 있어 다익스트라 알고리즘의 논리적 기반이 무너짐.<br>

**:pushpin: 벨만-포드 알고리즘**

벨만 포드 알고리즘은 그래프 G=(V,E)에서 각 간선의 가중치가 음의 값을 허용하는 임의의 실수인 경우의 최단 경로 알고리즘임. 단, 음의 싸이클은 허용하지 않음.<br>
알고리즘은 간선을 최대 1개 사용하는 최단 경로, 간선을 최대 2개 사용하는 최단 경로, ... , 간선을 최대 n-1개 사용하는 최단 경로까지 구해나간다.<br>

<pre>
BellmanFord(G, r):
  for each u ∈ V
    u.cost <- infinite
  r.cost <- 0
  1.for i <- 1 to n-1
    2.for each (u->v) ∈ E
      3.if (u.cost + w(uv) < v.cost)
        4.v.cost <- u.cost + w(uv)
        5.v.prev <- u
  6.for each (u->v) ∈ E
      if (u.cost + w(uv) < v.cost) output "해 없음: 음의 싸이클"
</pre>

i=k로 1의 for 루프를 수행한 직후 v.cost에는 최대 k개의 간선을 이용해서 v에 이르는 최단 경로가 계산됨.<br>
1의 for 루프를 모두 다 수행하고 나면 최대 n-1개의 간선을 사용하는 최단 경로가 계산됨.<br>
n-1개를 초과하는 경로는 의미가 없음. 간선 수가 n-1개인 경로에는 n개의 모든 정점이 다 포함됨. 간선 수가 n-1개를 초과하면 두 번 이상 포함되는 정점이 생겨 싸이클이 만들어짐.<br>
모든 싸이클은 0 또는 양수이므로 최단 경로에 넣었을 때 도움이 안 됨.<br>
그러므로 최대 n-1개의 간선을 포함하는 최단 경로보다 짧은 경로는 존재할 수 없음.<br>
벨만 포드 알고리즘을 사용해야 하는 곳에 다익스트라 알고리즘을 사용하면 해를 구하지 못 함.<br>
반면 다익스트라 알고리즘을 사용해 해를 구할 수 있는 경우에는 항상 벨만 포드 알고리즘을 사용해도 되나 속도가 느림.<br>

**수행 시간**<br>

1의 for루프는 θ(V)회 반복됨.<br>
2의 for루프는 θ(E)회 반복됨.<br>
3~5는 상수 시간이 소요됨.<br>
6은 상수 시간이 θ(E)회 반복되므로 θ(E)의 시간이 들음.<br>
따라서 벨만 포드 알고리즘의 수행 시간은 총 θ(VE)가 들음.<br>
2에서 (u->v)를 모두 보지 않고, u.cost에서 변동이 생긴 정점 u에 대해서만 u의 진출간선을 살피면 시간이 단축되어 O(VE)의 수행 시간이 걸림.<br>
