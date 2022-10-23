<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

(a) 1<br>
(b) 1<br>
(c) 1<br>
(d) 0<br>

**:pushpin: 2번**

(a) 1<br>
(b) 1<br>
(c) 1<br>
(d) 1<br>

**:pushpin: 3번**

(a) 1 3 4 5<br>
(b) 0 7 8 9<br>
(c) 1 8 8 9<br>
(d) 1 2 1 1<br>

**:pushpin: 4번**

i<j ? -1 : i>j

**:pushpin: 5번**

정상적으로 실행이 되긴 한다.<br>
그러나 n >= 1 <= 10은 (n>=1)<=10이고 좌측은 0 아니면 1이기 때문에 항상 10보다 작거나 같은 수 밖에 없으니 expression의 값은 항상 1이다.<br>
그러므로 언제나 statement를 print하기 때문에 n이 0이든 아니든 print하는 문장과는 아무런 상관이 없다.<br>

**:pushpin: 6번**

이것도 마찬가지로 정상적으로 실행은 된다.<br>
그러나 expression 우변의 값이 -9이고 좌변이 -9가 아닌 이상 statement는 항상 실행되지 않는다.<br>
그러므로 n이 5인지 아닌지는 중요하지 않다.<br>

**:pushpin: 7번**

17이면 i>=0이므로 i가 출력된다. 따라서 17이 출력된다.<br>
반면 -17이면 i<0이므로 -i가 출력되어 17이 출력된다.<br>

**:pushpin: 8번**

if (age >= 13 && age <= 19) teenager = true; else teenager = false;

teenager = age >= 13 && age <= 19;

**:pushpin: 9번**

equivalent

**:pushpin: 10번**

onetwo

**:pushpin: 11번**

switch (area_code) {
  case 229: print("Albany");
            break;
  case 404: case 470: case 678: case 770: 
            print("Altana");
            break;
  case 478: print("Macon");
            break;
  case 706: case 762:
            print("Columbus");
            break;
  case 912: print("Savannah");
            break;
  default : print("Area code not recognized");
}
