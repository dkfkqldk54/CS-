<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

1 (1->1, 1->3)<br>
3 (3->1, 3-> tail)<br>
<br>
12 (12->12, 12->20)<br>
20 (20->12, 20->7)<br>
7 (7->12, 7->9)<br>
9 (9->12, 9->tail)<br>
<br>
12 (12->12, 12->20)<br>
20 (20->12, 20->7)<br>
7 (7->12, 7->9)<br>
9 (9->12, 9->1)<br>
1 (1->12, 1->3)<br>
3 (3->12, 3-> tail)<br>

**:pushpin: 2번**

무게를 고려하지 않으면 어떤 집합에 있던 갱신이 일어날 수 있다.<br>
최악의 경우는 x가 속해있는 집합에 1개짜리 집합이 계속 union해오는 경우이다.<br>
x가 속해있는 집합에서만 갱신이 일어난다고 가정했을 때, 갱신 시점 해당 집합의 원소 갯수가 1~n-1개일 수 있다.<br>
따라서 시간 복잡도는 1 + 2 + ... + n-2 + n-1 = n(n-1)/2임.<br>

**:pushpin: 3번**

b -> a<br>
c -> a<br>
<br>
e -> d -> f<br>
g -> f<br>
h -> f<br>
i -> f<br>
<br>
b -> a ->  f<br>
c -> a<br>
e -> d -> f<br>
g -> f<br>
h -> f<br>
i -> f<br>

**:pushpin: 4번**

랭크가 0일 때 원소는 1임.<br>
랭크가 올라가는 경우는 같은 랭크의 집합이 합쳐지는 경우밖에 없음.<br>
랭크가 낮은 집합과 높은 집합이 합쳐지는 경우에는 원소의 수만 늘어나고 랭크는 오르지 않음.<br>
따라서 랭크가 1일 때 원소는 최소 2개임.<br>
...<br>
랭크가 k일 때 원소는 최소 2^k개임.<br>
원소가 n개일 때 n = 2^k일 때 k의 상한은 ⌊log2n⌋임.<br>

**:pushpin: 5번**

<pre>
find_set(x)
{
    int init_node = x;
    while (x != p[x]) {
        x = p[x];
    }
    while (init_node != p[init_node]) {
        int tmp = p[init_node];
        p[init_node] = x;
        init_node = tmp;
    }
    return x;
}
</pre>

**:pushpin: 6번**

logx = 1인 경우: x = 2^1<br>
log2(logx) = 2인 경우: logx가 2^2이므로 x = 2^4<br>
log2(log2(logx)) = 3인 경우: log2(logx)) = 2^3 = 8, logx = 2^8 = 256 = 2^256<br>
log2(log2(log2(logx))) = 4인 경우: log2(log2(logx)) = 2^4 = 16, log2(logx) = 2^16 = 65536, x = 2^65536<br>
log2(log2(log2(log2(logx)))) = 5인 경우: log2(log2(log2(logx))) = 2^5 = 32, log2(log2(logx)) = 2^32 = 4294967296, log2(logx) = 2^4294967296, logx = 2^(2^4294967296), x = 2^(2^(2^4294967296))<br>
