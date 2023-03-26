<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

배열 A에 대해 정렬을 완료하면 A[i]에 i번째 작은 원소가 있음.<br>

**:pushpin: 2번**

1. partition 3 2 4 9 8 6 5<br>
2. k = 3이고 i = 5보다 작으므로 9 8 6 5 (4~7)로 관심 범위 축소. select(A, 4, 7, 2)<br>
3. partition 5 8 6 9<br>
4. k = 1이고 i = 2보다 작으므로 8 6 9 (5~7)로 관심 범위 축소. select(A, 5, 7, 1)<br>
5. partition 8 6 9<br>
6. k = 3이고 1 = 1보다 크므로 8 6(5~6)으로 관심 범위 축소, select(A, 5, 6, 1)<br>
7. partition 6 8<br>
8. k = 1, i = 1이므로 6<br>

**:pushpin: 3번**

없음.<br>
i가 0보다 작거나 같은 경우, n보다 큰 경우 모두 p = r인 경우에서 A[p]를 return 하면서 끝남.<br>
p, q가 p <= q가 아닌 범위에서 설정되었다면 partition이 잘 작동하지 않았을 것임. 따라서 select를 호출하기도 전에 오류가 발생할 것임.<br>

**:pushpin: 4번**

상관없음.<br>
배열 A안에서 절대적인 위치 i를 찾아내는 것이기 때문에 같은 원소가 왼쪽에 들어가든, 오른쪽에 들어가든 상관없음.<br>

**:pushpin: 5번**

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
