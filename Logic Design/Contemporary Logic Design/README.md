<h1>:green_book: Contemporary Logic Design</h1>

<a href="#1">:pencil2: 1. Introduction</a>
-Logic Design<br>
-Computation: Switches, Relays, and Circuits<br>

<h2><a id="1">1. Introduction</a></h2>

**:pushpin: Logic design**

상호 연결된 스위치의 집합을 회로라고 부름.<br>
디지털 컴포넌트는 input wire와 output wire를 가지고 있으며, wire는 digital logic value를 전달함.<br>
wire는 0또는 1의 값을 전달하는데, 특정 전압 이하에서는 0, 이상에서는 1이 되는 방식임.<br>
트랜지스터는 input wire의 전압에 반응함. 전압의 변화는 전도도의 변화를 일으켜서 트랜지스터의 상태를 변화시킴. 따라서 결과적으로 output wire에게 전해지는 전압에 변화를 일으킴.
조합 논리 회로는 입력 값이 직접적으로 출력 값의 변화를 일으킴. 더하기, 빼기 등 연산을 하는데 이용됨.<br>
순차 논리 회로의 출력 값은 입력 값 뿐만 아니라 이전의 입력 값에도 영향을 받음. 따라서 현재의 입력 값과 과거의 입력 값에 대한 history를 담고 있을 메모리가 필요함.<br>

**용어 해설**<br>

전도도(conductivity): 도체에 흐르는 전류의 크기를 나타내는 상수.<br>
도체(conductor): 한 방향이나 여러 방향으로 전류, 즉 전기의 흐름이 가능한 물체나 물질.<br>


**:pushpin: Computation: Switches, Relays, and Circuits**

스위치는 전구를 배터리로부터 끊어지게 하는 역할을 함.<br>
스위치가 열리면 회로에 전류가 흐르지 않아서 전구가 꺼짐.<br>
스위치가 닫히면 배터리의 전류가 전구로 흘러 전구가 켜짐. 전구에 흘렀던 전기는 다시 배터리로 돌아감.<br>
스위치를 A라 하고, A를 부울 대수로 표현할 때 0은 열린 상태, 1은 닫힌 상태임.<br>
전구를 Z라 하고, Z를 부울 대수로 표현할 때 0은 꺼진 상태, 1은 켜진 상태임.<br>
스위치가 하나 밖에 없는 경우 Z=A로 표현할 수 있음.
스위치가 하나 더 있는 경우 Z = A and B 혹은 A or B로 표현할 수 있음.

**계전기(relay)**<br>

릴레이는 전기로 작동하는 스위치임.<br>
스위치는 수동으로 온/오프 해주지만, 릴레이는 자동으로 온/오프 해줄 수 있음.<br>
내부에 전자석을 포함하고 있고, 전자석에 전류가 흐르면 자화되어서 옆에 있는 철판을 끌어 당겨 스위치를 킴.<br>
낮은 전압, 낮은 전류를 이용해서 더 높은 전압, 더 높은 전류를 제어하는 곳에 사용됨.<br>
릴레이를 이용한 회로는 크고, 느려서 대규모의 컴퓨팅 머신을 만들기에는 역부족이었음.<br>
이를 보완하기 위해 진공 튜브가 만들어졌으나 역시 역부족이었음.<br>
그래서 등장한 것이 metal oxide semiconductor, MOS 트랜지스터임.<br>

**트랜지스터**<br>

CMOS의 C는 complementary이며, 서로 상호보완적인 n타입과 p타입의 스위치를 활용함.<br>
n타입은 특정 전압 이하에서 열리고, 이상에서 닫힘.<br>
p타입은 특정 전압 이하에서 닫히고, 이상에서 열림.<br>
inverter라고도 불리는 NOT gate는 높은 전압이 입력되면 p타입은 열리고, n타입은 닫히므로 0이 출력되고, 낮은 전압이 입력되면 p타입은 닫히고, n타입은 열리므로 1이됨.<br>
p타입은 높은 전압과 연결될 경우 noise 없이 전압을 잘 전달하고, n타입은 낮은 전압과 연결될 경우 noise 없이 값을 잘 전달함. 따라서 이 두 타입은 회로 안에서 상호 보완적으로 쓰임.<br>
NAND gate는 p타입을 병렬적으로 연결하고, n타입을 직렬적으로 연결함. 따라서 두 개의 입력 값중 둘 중 하나라도 0이 입력되면 높은 전압을 결과 값으로 쓸 수 있음.<br>
NOR gate는 p타입을 직렬적으로 연결하고, n타입을 병렬적으로 연결함. 따라서 두 개의 입력 값중 둘 중 하나라도 1이 입력되면 낮은 전압을 결과 값으로 쓸 수 있음.<br>
트랜지스터 네트워크는 계전기 보다 훨씬 빠름.<br>
스위칭되는 시간은 트랜지스터를 구성하고 있는 반도체 속에서 흐르고 있는 전자의 흐름에 의해서 결정됨.<br>
트랜지스터에서 전자가 흐르는 양상은 수도꼭지를 끄고 트는 것과 비슷함. 수도꼭지를 잠근다고 해서 한번에 물이 멈추는 것이 아닌 것처럼 전자의 흐름도 서서히 느려짐.<br>
트랜지스터는 약간 고장난 수도꼭지와 같아서 전자의 흐름이 완전히 멈추지는 않음.<br>
트랜지스터가 작아지면서 스위칭 속도는 더 빨라지고 있음.

**Digital Representations**<br>

디지털 상으로 전자의 흐름을 정확하게 표현하기는 힘들기 때문에 digital abstraction을 이용함.<br>
출력값의 변화는 즉각적으로 일어나지 않는데, 전자가 충전되는 시간과 빠져나가는 시간이 소요되기 때문임.<br> 
digital logic은 이러한 문제를 특정 전압 이상의 값을 logic 1으로 인식하고, 이하의 값을 logic 0으로 인식하는 방식으로 해결함.<br>
예를 들어 3볼트는 logic 1 혹은 on을 의미하고, 0볼트는 logic 0 혹은 off를 의미할 때, 2볼트 이상은 1, 1볼트 이하는 0으로 인식하는 식임.<br>
디지털 회로는 전압을 정확하게 출력해내지 못 함.<br>
이는 트랜지스터의 제조 과정에서 생기는 오차, 습도, 온도 등 주위 환경에 의한 노이즈 때문임.<br>
입력 전압에 따른 출력 전압의 양상은 non-linear함.<br>
2-3볼트의 입력 전압은 3볼트에 가깝게 출력되고, 0-1볼트의 입력 전압은 0볼트에 가깝게 출력됨.<br>
1-2볼트의 입력 전압은 noise margin이라고 하는데, noise margin에 있는 입력 전압을 주었을 때 출력 전압은 의도한 것과 다르게 나올 수 있음.<br>
 

**용어 해설**<br>
완성 회로(complete circuit): 전압을 가하였을 때 전류가 흐를 수 있는 전체 회로.<br>
MOS 트랜지스터: CPU의 가장 밑바닥을 이루는 부품. N타입을 기준으로 설명하면 gate에 metal이 있으며, 전류가 흐를 수 있는 금속 물질로 되어 있음. oxide는 gate 바로 아래 위치한 부분으로 전류가 흐를 수 없는 절연체로 되어 있음. 그리고 silicon은 나머지 부분을 이루는 N타입 반도체와 P타입 반도체를 가리킴. N타입 MOS 트랜지스터는 NPN으로 되어있음. oxide는 절연체이기 때문에 평소에는 source와 drain 사이에 전류가 흐를 수 없음. 하지만 gate에 양의 전압을 가하면 P타입 반도체에 존재하는 소수의 자유 전자들이 위쪽으로 몰리면서 source와 drain 사이에 전류가 흐를 수 있는 통로가 형성됨. 이렇듯 gate에 1의 신호를 가하면 전류가 흐르고, 0의 신호를 가하면 전류가 흐르지 못한다는 측면에서 스위치와 같이 동작한다고 볼 수 있음.<br> 
oscilloscope: 입력 전압의 변화를 측정하는 장치<br>


**************************


Chapter 2 내용임

s는 sum(합계)이고 carry는 자리올림수임.

1110 + 1101를 자리별로 계산하면 세 번째, 네 번째 자리 계산에서는 carry가 발생하지 않았으나 두 번째 자리 계산에서는 carry가 발생함. 따라서 첫 번째 자리에서는 3개의 비트를 더해야 함. 3개의 비트를 계산할 수 있는 가산기를 전가산기, 2개의 비트만 계산할 수 있는 가산기를 반가산기라고 함.

반가산기: 반쪽짜리 가산기. s는 (~A)B + A(~B) = A xor B이고 carry는 AB = A and B임. 따라서 회로를 만들기 위해서는 and 회로 1개와 xor 회로 1개가 필요함.
전가산기: s는 (~X)(~Y)Z + (~X)Y(~Z) + X(~Y)(~Z) + XYZ = (~X)((~Y)Z+Y(~Z)) + X((~Y)(~Z)+YZ) = (~X)(Y XOR Z) + X(Y NXOR Z)임. Y XOR Z를 K라고 치환하면 (~X)K + X(~K) = X XOR K가 됨. 따라서 X XOR Y XOR Z임. C는 (~X)YZ + X(~Y)Z + XY(~Z) + XYZ = Z((~X)Y+X(~Y)) + XY((~Z)+Z) = Z(X XOR Y) + XY임. 이를 논리 회로를 그려서 확인해보면 전가산기는 2개의 반가산기와 1개의 OR게이트의 조합이라는 것을 알 수 있음.

logic function

2개의 input 변수로 만들 수 있는 함수는 16가지가 있음(AND, OR, ,,, 등등)<br>
<br><h1>:green_book: Contemporary Logic Design</h1>

<a href="#1">:pencil2: 1. Introduction</a>
-Logic Design
-Computation: Switches, Relays, and Circuits

<h2><a id="1">1. Introduction</a></h2>

**:pushpin: Logic design**

상호 연결된 스위치의 집합을 회로라고 부름.<br>
디지털 컴포넌트는 input wire와 output wire를 가지고 있으며, wire는 digital logic value를 전달함.<br>
wire는 0또는 1의 값을 전달하는데, 특정 전압 이하에서는 0, 이상에서는 1이 되는 방식임.<br>
트랜지스터는 input wire의 전압에 반응함. 전압의 변화는 전도도의 변화를 일으켜서 트랜지스터의 상태를 변화시킴. 따라서 결과적으로 output wire에게 전해지는 전압에 변화를 일으킴.
조합 논리 회로는 입력 값이 직접적으로 출력 값의 변화를 일으킴. 더하기, 빼기 등 연산을 하는데 이용됨.<br>
순차 논리 회로의 출력 값은 입력 값 뿐만 아니라 이전의 입력 값에도 영향을 받음. 따라서 현재의 입력 값과 과거의 입력 값에 대한 history를 담고 있을 메모리가 필요함.<br>

**용어 해설**<br>

전도도(conductivity): 도체에 흐르는 전류의 크기를 나타내는 상수.<br>
도체(conductor): 한 방향이나 여러 방향으로 전류, 즉 전기의 흐름이 가능한 물체나 물질.<br>


**:pushpin: Computation: Switches, Relays, and Circuits**

스위치는 전구를 배터리로부터 끊어지게 하는 역할을 함.<br>
스위치가 열리면 회로에 전류가 흐르지 않아서 전구가 꺼짐.<br>
스위치가 닫히면 배터리의 전류가 전구로 흘러 전구가 켜짐. 전구에 흘렀던 전기는 다시 배터리로 돌아감.<br>
스위치를 A라 하고, A를 부울 대수로 표현할 때 0은 열린 상태, 1은 닫힌 상태임.<br>
전구를 Z라 하고, Z를 부울 대수로 표현할 때 0은 꺼진 상태, 1은 켜진 상태임.<br>
스위치가 하나 밖에 없는 경우 Z=A로 표현할 수 있음.
스위치가 하나 더 있는 경우 Z = A and B 혹은 A or B로 표현할 수 있음.

**계전기(relay)**<br>

릴레이는 전기로 작동하는 스위치임.<br>
스위치는 수동으로 온/오프 해주지만, 릴레이는 자동으로 온/오프 해줄 수 있음.<br>
내부에 전자석을 포함하고 있고, 전자석에 전류가 흐르면 자화되어서 옆에 있는 철판을 끌어 당겨 스위치를 킴.<br>
낮은 전압, 낮은 전류를 이용해서 더 높은 전압, 더 높은 전류를 제어하는 곳에 사용됨.<br>
릴레이를 이용한 회로는 크고, 느려서 대규모의 컴퓨팅 머신을 만들기에는 역부족이었음.<br>
이를 보완하기 위해 진공 튜브가 만들어졌으나 역시 역부족이었음.<br>
그래서 등장한 것이 metal oxide semiconductor, MOS 트랜지스터임.<br>

**트랜지스터**<br>

CMOS의 C는 complementary이며, 서로 상호보완적인 n타입과 p타입의 스위치를 활용함.<br>
n타입은 특정 전압 이하에서 열리고, 이상에서 닫힘.<br>
p타입은 특정 전압 이하에서 닫히고, 이상에서 열림.<br>
inverter라고도 불리는 NOT gate는 높은 전압이 입력되면 p타입은 열리고, n타입은 닫히므로 0이 출력되고, 낮은 전압이 입력되면 p타입은 닫히고, n타입은 열리므로 1이됨.<br>
p타입은 높은 전압과 연결될 경우 noise 없이 전압을 잘 전달하고, n타입은 낮은 전압과 연결될 경우 noise 없이 값을 잘 전달함. 따라서 이 두 타입은 회로 안에서 상호 보완적으로 쓰임.<br>
NAND gate는 p타입을 병렬적으로 연결하고, n타입을 직렬적으로 연결함. 따라서 두 개의 입력 값중 둘 중 하나라도 0이 입력되면 높은 전압을 결과 값으로 쓸 수 있음.<br>
NOR gate는 p타입을 직렬적으로 연결하고, n타입을 병렬적으로 연결함. 따라서 두 개의 입력 값중 둘 중 하나라도 1이 입력되면 낮은 전압을 결과 값으로 쓸 수 있음.<br>
트랜지스터 네트워크는 계전기 보다 훨씬 빠름.<br>
스위칭되는 시간은 트랜지스터를 구성하고 있는 반도체 속에서 흐르고 있는 전자의 흐름에 의해서 결정됨.<br>
트랜지스터에서 전자가 흐르는 양상은 수도꼭지를 끄고 트는 것과 비슷함. 수도꼭지를 잠근다고 해서 한번에 물이 멈추는 것이 아닌 것처럼 전자의 흐름도 서서히 느려짐.<br>
트랜지스터는 약간 고장난 수도꼭지와 같아서 전자의 흐름이 완전히 멈추지는 않음.<br>
트랜지스터가 작아지면서 스위칭 속도는 더 빨라지고 있음.

**Digital Representations**<br>

디지털 상으로 전자의 흐름을 정확하게 표현하기는 힘들기 때문에 digital abstraction을 이용함.<br>
출력값의 변화는 즉각적으로 일어나지 않는데, 전자가 충전되는 시간과 빠져나가는 시간이 소요되기 때문임.<br> 
digital logic은 이러한 문제를 특정 전압 이상의 값을 logic 1으로 인식하고, 이하의 값을 logic 0으로 인식하는 방식으로 해결함.<br>
예를 들어 3볼트는 logic 1 혹은 on을 의미하고, 0볼트는 logic 0 혹은 off를 의미할 때, 2볼트 이상은 1, 1볼트 이하는 0으로 인식하는 식임.<br>
디지털 회로는 전압을 정확하게 출력해내지 못 함.<br>
이는 트랜지스터의 제조 과정에서 생기는 오차, 습도, 온도 등 주위 환경에 의한 노이즈 때문임.<br>
입력 전압에 따른 출력 전압의 양상은 non-linear함.<br>
2-3볼트의 입력 전압은 3볼트에 가깝게 출력되고, 0-1볼트의 입력 전압은 0볼트에 가깝게 출력됨.<br>
1-2볼트의 입력 전압은 noise margin이라고 하는데, noise margin에 있는 입력 전압을 주었을 때 출력 전압은 의도한 것과 다르게 나올 수 있음.<br>
 

**용어 해설**<br>
완성 회로(complete circuit): 전압을 가하였을 때 전류가 흐를 수 있는 전체 회로.<br>
MOS 트랜지스터: CPU의 가장 밑바닥을 이루는 부품. N타입을 기준으로 설명하면 gate에 metal이 있으며, 전류가 흐를 수 있는 금속 물질로 되어 있음. oxide는 gate 바로 아래 위치한 부분으로 전류가 흐를 수 없는 절연체로 되어 있음. 그리고 silicon은 나머지 부분을 이루는 N타입 반도체와 P타입 반도체를 가리킴. N타입 MOS 트랜지스터는 NPN으로 되어있음. oxide는 절연체이기 때문에 평소에는 source와 drain 사이에 전류가 흐를 수 없음. 하지만 gate에 양의 전압을 가하면 P타입 반도체에 존재하는 소수의 자유 전자들이 위쪽으로 몰리면서 source와 drain 사이에 전류가 흐를 수 있는 통로가 형성됨. 이렇듯 gate에 1의 신호를 가하면 전류가 흐르고, 0의 신호를 가하면 전류가 흐르지 못한다는 측면에서 스위치와 같이 동작한다고 볼 수 있음.<br> 
oscilloscope: 입력 전압의 변화를 측정하는 장치<br>


**************************


Chapter 2 내용임

s는 sum(합계)이고 carry는 자리올림수임.

1110 + 1101를 자리별로 계산하면 세 번째, 네 번째 자리 계산에서는 carry가 발생하지 않았으나 두 번째 자리 계산에서는 carry가 발생함. 따라서 첫 번째 자리에서는 3개의 비트를 더해야 함. 3개의 비트를 계산할 수 있는 가산기를 전가산기, 2개의 비트만 계산할 수 있는 가산기를 반가산기라고 함.

반가산기: 반쪽짜리 가산기. s는 (~A)B + A(~B) = A xor B이고 carry는 AB = A and B임. 따라서 회로를 만들기 위해서는 and 회로 1개와 xor 회로 1개가 필요함.
전가산기: s는 (~X)(~Y)Z + (~X)Y(~Z) + X(~Y)(~Z) + XYZ = (~X)((~Y)Z+Y(~Z)) + X((~Y)(~Z)+YZ) = (~X)(Y XOR Z) + X(Y NXOR Z)임. Y XOR Z를 K라고 치환하면 (~X)K + X(~K) = X XOR K가 됨. 따라서 X XOR Y XOR Z임. C는 (~X)YZ + X(~Y)Z + XY(~Z) + XYZ = Z((~X)Y+X(~Y)) + XY((~Z)+Z) = Z(X XOR Y) + XY임. 이를 논리 회로를 그려서 확인해보면 전가산기는 2개의 반가산기와 1개의 OR게이트의 조합이라는 것을 알 수 있음.

logic function

2개의 input 변수로 만들 수 있는 함수는 16가지가 있음.(AND, OR 등등)<br>
일반적으로 n개의 input에는 2^(2^n)개의 가능한 함수가 있음.<br>
logic function의 비용은 필요한 스위치의 수에 비례함.<br>
X나 Y는 스위치가 필요없음.<br>
X'와 Y'는 NOT gate가 1개 필요하니 스위치가 2개 필요함.<br>
X nor Y와 X nand Y는 4개의 스위치가 필요함.<br>
X or Y와 X and Y는 6개의 스위치가 필요함.<br>
X=Y와 X xor Y는 16개의 스위치가 필요함.<br>
NOT, NOR, NAND가 가장 저렴한 편이므로, 주로 이 세 지를 이용해서 함수를 만드는 것이 좋음.<br>

Laws and Theorems of Boolean Logic

NOT, AND, OR의 우선순위는 NOT, AND, OR순임.<br>
boolean expression과 truth table은 사실 같은 것임.<br>
literal은 변수 또는 그것의 보수를 의미함. 예를 들어 ab' + bc'd + e'는 6개의 literal이 있는 것임. <br>
product term은 한 개 또는 여러 개의 literal이 and로 연결된 것을 의미함. 예를 들어 x + y + z, xy + y'z + x'z'모두 3개의 product term임.<br>
sum of products(SOP)는 한 개 또는 여러개의 product term이 or로 연결된 것을 의미함.<br>
standard product term(minterm)은 모든 변수를 포함하고 있는 product term으로 변수 x, y, z가 있을 때 x'yz'는 minterm이지만 xy'는 minterm은 아니고 product term임.<br>
canonical sum(canonical SOP)은 minterm의 합임. 변수 w, x, y, z에서 w'xyz + wx'y'z는 canonical SOP이지만, x + y' + zw는 SOP임.<br>
sum term은 한 개 또는 여러개의 literal이 OR로 연결된 것으로 x'+y, z 등이 있음.<br>
products of sum(POS)은 한 개 또는 여러 개의 sum term이 and로 연결된 것으로 (w+y+z)(w'+x+y+z) 등이 있음.<br>
standard sum term(maxterm)은 모든 변수를 포함하고 있는 sum term으로 변수 x, y, z가 있을 때 x+y+z, x'+y'+z 등이 있음.<br>
canonical product(canonical POS)은 maxterm을 and로 연결한 것으로 4개의 변수 w, x, y, z에서 (w'+x+y+z')(w+x'+y+z') 등이 있음.<br>  

**minimal set**

boolean function의 minimal set of function은 AND, OR, NOT임.<br>
X and Y는 not(X and Y)이고 X or Y는 not(X or Y)임. 따라서 NOT, NOR, NAND만으로도 모든 logic function을 표현할 수 있음.<br>
사실 NAND 혹은 NOR만으로도 모든 걸 표현할 수 있음.<br>
X=0, Y=0일 때 X nor Y, X nand Y 둘다 1이고, X=1, Y=1일 때 X nor Y, X nand Y 둘다 0이므로 NAND(A, A) 혹은 NOR(A, A)는 A'랑 똑같으므로 NOT을 대신할 수 있음.<br>
따라서 NAND 혹은 NOR만 있어도 minimal set라고 할 수 있음.<br>


**duality**

어떤 부울식이 참이면 그 쌍대(duality)도 참임.<br>
쌍대의 원리를 부울 대수에 적용하면 and를 or로, or을 and로, 0을 1로, 1을 0으로 바구어도 그 식은 참으로 성립함.<br>
NAND와 NOR도 쌍대 관계이므로 아래 식이 성립함.<br>
X nand Y = not ( (not X) nor (not Y) )<br>
X nor Y = not ( (not X) nand (not Y) )<br>


**Axioms of Boolean Algebra**<br>

B집합 안에 원소 a, b가 있고 a와 b는 서로 다름. 사용할 수 있는 연산은 +,·, '가 있음.<br>
1. Closure: a + b는 B에 있고, a·b도 B에 있음.<br>
2. Commutative laws(교환법칙): a + b = b + a, a·b = b·a<br>
3. Associative laws(결합법칙): (a + b) + c = a + (b + c) = a + b + c, (a·b)·c = a·(b·c) = a·b·c<br>
4. Identities: a + 0 = a, a·1 = a
5. Distributive laws(분배법칙): a + (b·c) = (a+b)·(a+c), a·(b + c) = (a·b) + (a·c)<br>
6. Complement: a + a' = 1, a·a' = 0<br>
B = {0, 1}이고 logical operation은 OR, AND, NOT이 있을 때 이 모든 조건을 만족함.<br> 

드모르간의 법칙: (a+b)' = a'b', (ab)' = a' + b'<br>
흡수 정리: a + ab = a, a(a + b) = a<br> 

**Useful Theorems**<br>

Operations with 0 and 1<br>
1. X + 0 = X<br>
1D. X·1 = X<br>
2. X + 1 = 1<br>
2D. X·0 = 0<br><br>

Idempotent(멱등) theorem<br>
3. X + X = X<br>
3D. X·X = X<br><br>

Involution theorem<br>
4. (X')' = X<br><br>

Theorem of complementarity<br>
5. X + X' = 1<br>
5D. X·X' = 0<br><br>

Commutative law<br>
6. X + Y = Y + X<br>
6D. X·Y = Y·X<br><br>

Associative law<br>
7. (X+Y)+Z = X+(Y+Z) = X+Y+Z<br>
7D. (X·Y)·Z = X·(Y·Z) = X·Y·Z<br><br>

Distributive law<br>
8. X·(Y+Z) = X·Y + X·Z<br>
8D. X+(Y·Z) = (X+Y)·(X+Z)<br><br>

Simplification theorems<br>
9. X·Y + X·Y' = X<br>
9D. (X+Y)·(X+Y') = X<br>
10. X + X·Y = X<br>
10D. X·(X+Y) = X<br>
11. (X+Y')·Y = X·Y<br>
11D. (X·Y')+Y = X + Y<br> 

DeMorgan's law<br>
12. (X+Y+Z+...)' = X'·Y'·Z'·...<br>
12D. (X·Y·Z·...)' = X' + Y' + Z' + ...<br><br>

General form<br>
13. {f(X1, X2, ..., XN, 0, 1, +,·)}' = {f(X1', X2', ..., XN', 1, 0,·, +)}<br><br>

Duality<br>
14. (X + Y + Z +...)^D = X·Y·Z·...<br>
14D. (X·Y·Z·...)^D = X + Y + Z...<br><br>

General form<br>
15. {f(X1, X2, ..., XN, 0, 1, +,·)}^D = f(X1, X2, ..., X2, 1, 0,·, +)<br><br>

Theorem for multiplying and factoring<br>
16. (X+Y)·(X'+Z) = X·Z + X'·Y<br>
