<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

(a) (공백)(공백)(공백)(공백)86, 1040<br>
(b) (공백)3.02530e+01<br>
(c) 83.1620<br>
(d) 1e-06(공백)<br>

**:pushpin: 2번**

(a) printf("-8.1e", x);<br>
(b) printf("%10.6e", x);<br>
(c) printf("%-8.3f", x);<br>
(d) printf("%6.0f", x);

**:pushpin: 3번**

putting a white-space character in a format string doesn't force the input to contain while-space characters.
따라서 (a), (b), (d)는 동일하나, (c)는 다르다.

**:pushpin: 4번**

i: 10이 i에 배정되고 decimal point는 int에 속할 수 없으므로 put back된다.<br>
x: .3이 x에 배정되고 공백은 숫자에 포함될 수 없으므로 put back된다.<br>
j: 공백을 무시하고 5를 j에 배정하고 공백은 숫자에 포함될 수 없으므로 put back된다.
(공백)6은 다음 scanf를 기다리면서 남아있는다.

**:pushpin: 5번**

x: 12.3이 x에 배정되고 공백은 float에 포함될 수 없으므로 put back된다.
i: 공백을 무시하고 45가 i에 배정되고 decimal point는 int에 포함될 수 없으므로 put back된다.
j: .6이 j에 배정되고 공백은 float에 포함될 수 없으므로 put back된다.
(공백)789는 다음 scanf를 기다리면서 남아있는다.

**:pushpin: 6번**

scanf에 있는 %d/%d를 %d / %d로 바꿔준다.
