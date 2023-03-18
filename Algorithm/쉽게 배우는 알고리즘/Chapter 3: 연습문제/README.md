<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

어떠한 n이라도 n과 5n 사이에 5의 멱수가 하나 있음. 즉,  n <= 5^k <= 5n인 5^k가 하나 존재함.<br>
T(n) = O(n^r)인 경우 T(5n) = O((5^r) * (n^r)) = O(n^r) = T(n)임.<br>
T(n) <= T(5^k) <= T(5n)인데 T(n) = T(5n)이므로 T(n) = T(5^k) = T(5n)임.<br>
따라서 n = 5^k이라고 해도 점근적 분석의 결과는 같음.<br>

**:pushpin: 2번**

<pre>
isThereX(A[], start, end, x)
{
  if x < A[start] 혹은 x > A[end]
    return false
  elif x == A[start] 혹은 x == A[end]
    return true
  else
    point = start와 end 가운데, 만약 start와 end가 붙어있으면 start로
    if x == A[point]
      return true
    elif x < A[point]
      return isThereX(A[], start, point, x)
    else
      return isThereX(A[], point, end, x)
}
</pre>

<pre>
T(n) <= T(n/2) + a의 점근적 복잡도는 O(logn)이다. 즉 충분히 큰 n에 대해서 T(n) <= clogn인 양의 상수 c가 존재한다.
     <= clog(n/2) + a
     = clogn - clog2 + a
     = clogn - (clog2 - a)
     <= clogn
     
clog2 -a >= 0 즉 a <= clog2이기만 하면 이를 만족하는 상수 c가 존재함.
따라서 T(n) = O(nlogn)임.
</pre>

**:pushpin: 3번**

**:pushpin: 4번**

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

**:pushpin: 16번**

**:pushpin: 17번**

**:pushpin: 18번**

**:pushpin: 19번**

**:pushpin: 20번**

**:pushpin: 21번**

**:pushpin: 22번**

**:pushpin: 23번**

