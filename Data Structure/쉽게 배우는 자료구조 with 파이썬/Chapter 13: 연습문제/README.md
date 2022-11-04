<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

필요한 공간의 크기는 n^2에 비례하므로 O(n^2)이고, 두 정점의 인접 여부를 알기 위해 소요되는 점근적 시간은 O(1)이다.

**:pushpin: 2번**

필요한 공간의 크기는 V, 2E, 레퍼런스, 가중치 등이 포함되므로 O(V+2E) = O(V+E)이다.<br>
두 정점의 인접 여부를 알기 위해 소요되는 점근적 시간은 최악의 경우 한 노드에 모든 간선이 다 매달려 있을 수도 있으므로 O(V)이다.

**:pushpin: 3번**

인접 배열을 사용하면 된다. 인접 배열은 인접 리스트처럼 간선에 비례하는 공간을 차지하며, 레퍼런스가 없기 때문에 오히려 공간을 절약할 수 있음.<br>
배열이 정렬되어 있는 경우 인접 여부를 확인하기 위해서 이진 탐색을 사용할 수 있어 O(log k)의 시간이 소요됨.<br>

**:pushpin: 4번**

인접 해시 테이블을 사용하면 된다. 인접 해시 테이블은 마찬가지로 간선의 비례하는 공간을 차지한다.<br>
인접 배열의 2배정도 되는 크기의 공간에 노드를 적재해놓으면 평균 2번의 비교로 찾을 수 있어 두 정점의 인접 여부를 알기 위해 θ(1)의 시간이 필요함.<br>

**:pushpin: 5번**

인접 행렬을 사용할 것이다.<br>
공간 측면에서 인접 행렬은 가장 작은 경우 n^2의 공간만 있으면 되지만, 인접 리스트, 인접 배열, 인접 해시테이블은 2n^2 이상의 공간이 필요하다.<br>
탐색 측면에서 인접 행렬은 θ(1)의 시간이면 탐색이 완료되므로, 인접 리스트, 인접 배열보다 빠르다. 인접 해시테이블과 점근적 시간은 동일하지만 인접 행렬은 평균 1의 시간이 소요되지만, 인접 해시테이블은 평균 2의 시간이 소요되므로 역시 인접 행렬이 더 빠르다.<br>

**:pushpin: 6번**

인접 리스트를 사용할 것이다.<br>
공간 측면에서 인접 행렬은 O(n^2), 인접 리스트는 O(V+E)가 필요하므로 인접 리스트가 더 효율적이다.<br>
탐색 측면에서는 인접 행렬이 θ(1)로 인접 리스트보다 더 빠르겠지만, 희소 그래프이기 때문에 실제로는 인접 리스트와 큰 차이가 없을 것이다.<br>

**:pushpin: 7번**

![제목 없음](https://user-images.githubusercontent.com/63328796/199647004-23ec74d0-d919-4a53-812b-1e106e8f3aa5.jpg)

**:pushpin: 8번**

2번

**:pushpin: 9번**

1. 3번<br>
2. 5개<br>

**:pushpin: 10번**

최대 14, 최소 6<br>

**:pushpin: 11번**

1. n-1<br>
2. 1<br>

**:pushpin: 12번**

프림<br>
![프림 1](https://user-images.githubusercontent.com/63328796/199694122-7a045f59-9cec-4b0a-a934-a28e488eb3bb.jpg)
![프림 2](https://user-images.githubusercontent.com/63328796/199694161-17304cb4-fa98-4863-9d12-8fbaba055ede.jpg)

크루스칼<br>
![크루스칼 1](https://user-images.githubusercontent.com/63328796/199694220-289be6b1-842a-4e55-a138-59580a5a5af1.jpg)
![크루스칼 2](https://user-images.githubusercontent.com/63328796/199694254-170724be-409a-4cad-8790-86cc32926fc1.jpg)

**:pushpin: 13번**

**:pushpin: 14번**

10개

**:pushpin: 15번**

(a) 4번<br>
(b) ![das](https://user-images.githubusercontent.com/63328796/199927117-40802d77-56b2-4e5b-9af2-9b3229177165.jpg)<br>
(c) cost가 변했다는 것은 cost가 더 낮은 간선이 발견되었다는 뜻이다. 이 간선을 heap에 추가하고 percolateUp 해주는 작업이 O(log V)의 시간이 걸리는 것이다.

**:pushpin: 16번**

42

**:pushpin: 17번**


![다익스트라1](https://user-images.githubusercontent.com/63328796/199942005-7c43390c-f4d4-4e28-9504-7c10b8652a76.jpg)
![다익스트라2](https://user-images.githubusercontent.com/63328796/199942011-656b1dcd-b617-4260-8aa5-96ec5d09d984.jpg)

**:pushpin: 18번**

![18](https://user-images.githubusercontent.com/63328796/199953216-b3ba4737-fbfa-41f3-91f4-3d0632c18d2f.jpg)

**:pushpin: 19번**
**:pushpin: 20번**

**:pushpin: 21번**
**:pushpin: 22번**
