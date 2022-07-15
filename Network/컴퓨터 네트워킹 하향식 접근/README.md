<h1>:green_book: <컴퓨터 네트워킹 하향식 접근> 정리</h1>

<a href="#1">:pencil2: Chapter1. 컴퓨터 네트워크와 인터넷</a>
- 회선 교환
- 패킷 교환
- 프로토콜 계층

<a href="#2">:pencil2: Chapter2. 애플리케이션 계층</a>
- 애플리케이션 구조
- TCP와 UDP
- HTTP란?
- 비지속 연결과 지속 연결
- 쿠키
- 웹 캐싱
- 조건부 GET
- 간단한 UDP 서버-클라이언트 구현 코드
- 간단한 TCP 서버-클라이언트 구현 코드
- SMTP
- DNS
- 스트리밍
- CDN

<h2><a id="1">:pencil2: Chapter1. 컴퓨터 네트워크와 인터넷</a></h2>

**:pushpin: 회선 교환**

주파수 분할 다중화(FDA, Frequency Division Mutiplexing) 혹은 시분할 다중화(TDM, Time Division Multiplexing)으로 구현함<br>
요구할 때만 링크의 사용을 할당하는 패킷 교환과 달리 요구에 관계 없이 미리 전송 링크의 사용을 할당함

**:pushpin: 패킷 교환**

패킷 스위치의 종류로는 라우터(네트워크 코어에서 주로 사용)와 링크 계층 스위치(액세스 네트워크에서 주로 사용)가 있음<br>
패킷 스위치는 대부분 저장 후 전달 전송(store and forward transmission) 방식을 사용함<br>
이는 스위치가 출력 링크로 패킷의 첫 비트를 전송하기 전에 전체 패킷을 받아야 한다는 것을 의미함

**패킷 교환 네트워크에서의 지연**

처리 지연: 패킷 헤더를 조사하고, 패킷을 어디로 보낼지 결정하는 시간<br>
큐잉 지연: 큐에 저장되어 링크로 전송되기를 기다리는 시간<br>
전송 지연: 패킷의 모든 비트를 링크로 밀어내는 데 필요한 시간<br>
전파 지연: 링크의 처음부터 다음 라우터에 전파될 때까지 필요한 시간, 빛의 속도와 같거나 약간 작음

**:pushpin: 프로토콜 계층**

인터넷 프로토콜 스택: 애플리케이션 -> 트랜스포트 -> 네트워크 -> 링크 -> 물리<br>
OSI 참조모델: 애플리케이션 -> 프레젠테이션 -> 세션 -> 트랜스포트 -> 네트워크 -> 링크 -> 물리

<h2><a id="2">:pencil2: Chapter2. 애플리케이션 계층</a></h2>

**:pushpin: 애플리케이션 구조**

클라이언트-서버 구조: 서버는 고정된 IP를 가져야하고, 클라이언트는 동적인 IP 주소를 가져도 됨. 클라이언트와 서버는 서로 직접적으로 통신하지 않음(소켓 이용)<br>
P2P 구조: 특정 서버를 통하지 않고, 피어끼리 직접 통신함. 자가 확장성이 있음

**소켓이란?**

프로세스와 컴퓨터 네트워크 사이의 인터페이스임
API(Application Programming Interface)라고도 함

**:pushpin: TCP와 UDP**

**TCP의 특성**

신뢰성 있는 연결<br>
연결 지향(3-way-handshake)<br>
흐름 제어<br>
혼잡 제어

**UDP의 특성**

신뢰성 없는 전송<br>
비연결형<br>
흐름제어 없음<br>
혼잡제어 없음

**TCP와 UDP의 사용**

TCP: SMTP, Telnet, HTTP, FTP
TCP or UDP: HTTP, RTP(인터넷 전화)

**:pushpin: HTTP란?**

Web은 HTTP의 별명임<br>
클라이언트-서버 모델<br>
Request와 Response로 이루어짐<br>
TCP를 사용함<br>
비상태 프로토콜(Stateless, 클라이언트에 대한 정보를 유지하지 않음)

**HTTP 요청 메시지**

(요청 라인) 방식 SP URL SP 버전 CR LF<br>
(헤더 라인) 헤더 필드 이름: SP 값 CR LF<br>
...<br>
(공백 라인) CR LF<br>
(개체 몸체) ...

**HTTP 응답 메시지**

(상태 라인) 버전 SP 상태코드 SP 문장 CR LF<br>
(헤더 라인) 헤더 필드 이름: SP 값 CR LF<br>
...<br>
(공백 라인) CR LF<br>
(개체 몸체) ...

**:pushpin: 비지속 연결과 지속 연결**

HTTP는 비지속 연결과 지속 연결 모두 사용할 수 있음<br>
디폴트 모드는 지속 연결임<br>
비지속 연결은 연결이 다른 객체를 위해 유지되지 않으며, 각 TCP 연결은 하나의 요청 메시지와 하나의 응답 메세지만 전송함<br>
지속 연결은 서버에서 응답을 보낸 후에 TCP 연결을 그대로 유지하며, 같은 클라이언트와 서버 간의 이후 요청과 응답은 같은 연결을 통해 보내짐

**:pushpin: 쿠키**

HTTP는 Stateless임<br>
사용자에 따라 콘텐츠를 제공하거나, 사용자를 확인하고 싶은 욕구가 있어서 쿠키가 활용됨<br>
웹 사이트 방문시 서버는 유일한 식별번호를 만들고, 이 식별번호로 index하는 백엔드 데이터 베이스안에 엔트리를 만들어 놓음<br>
서버는 set-cookie 헤더를 보내고, 클라이언트는 cookie 헤더를 보냄

**:pushpin: 웹 캐싱**

웹 캐시 = 프록시 서버<br>
브라우저는 웹 캐시와 TCP 연결을 설정하고, 웹 캐시에 있는 객체에 대해 HTTP 요청을 보냄<br>
웹 캐시는 객체 사용이 있으면 브라우저로 HTTP 응답 메세지와 함께 객체를 전송함<br>
없으면 원서버에 요청하고, 응답과 객체를 받은 후, 복사본을 클라이언트에게 보내줌<br>
웹 캐시를 사용함으로써 접속 회선을 증설하지 않고 지연을 개선시킬 수 있음

**:pushpin: 조건부 GET**

캐시에서 이미 갖고 있는 객체는 보내지 않도록 하기 위함<br>
캐시가 웹 서버에 객체를 요청할 때 서버는 Last-Modified 헤더와 함께 응답을 보냄<br>
이후 다른 브라우저가 캐시에 동일한 객체를 요구한 경우, 캐시는 If-Modified-Since 헤더와 함께 요청을 보냄<br>
변경되지 않았을 경우 304 Not Modified와 함께 빈 개체 몸체로 응답을 보냄

**:pushpin: 간단한 UDP 서버-클라이언트 구현 코드**

**UDPClient.py**

from socket import *<br>
serverName = 'hostname'<br>
serverPort = 12000<br>
clientSocket = socket(socket.AF_INET, socket.SOCK_DGRAM)<br>
message = raw_input('Input lowercase sentence:')<br>
clientSocket.sednto(message, (serverName, serverPort))<br>
modifiedMessage, serverAddress = clientSocket.recvfrom(2048)<br>
print modifiedMessage<br>
clientSocket.close()

**UDPServer.py**

from socket import *<br>
serverPort = 12000<br>
serverSocket = socket(AF_INET, SOCK_DGRAM)<br>
serverSocket.bind(('', serverPort))<br>
print("The server is ready to receive")<br>
while True:<br>
  message, clientAddress = serverSocket.recvfrom(2048)<br>
  modifiedMessage = message.decode().upper()<br>
  serverSocket.sendto(modifiedMessage.encode().clientAddress)
  
**:pushpin: 간단한 TCP 서버-클라이언트 구현 코드**

**TCPClient.py**

from socket import *<br>
serverName = 'servername'<br>
serverPort = 12000<br>
clientSocket = socket(AF_INET, SOCK_STREAM)<br>
clientSocket.connect((serverName, serverPort))<br>
sentence = raw_input('Input lowercase sentence:')<br>
clientSocket.send(sentence.encode())<br>
modifiedSentence = clientSocket.recv(1024)<br>
print('From Server: ', modifiedSentence.decode())<br>
clientSocket.close()

**TCPServer.py**

from socket import *<br>
serverPort = 12000<br>
serverSocket = socket(AF_INET, SOCK_STREAM)<br>
serverSocket.bind(('', serverPort))<br>
serverSocket.listen(1)<br>
print('The Server is ready to receive')<br>
while True:<br>
  connectionSocket, addr = serverSocket.accept()<br>
  sentence = connectionSocket.recv(1024).decode()<br>
  capitalizedSentence = sentence.upper()<br>
  connectionSocket.send(capitalizedSentence.encode())<br>
  connectionSocket.close()
  
**:pushpin: SMTP(Simple Mail Transfer Protocol)**

송신자의 메일 서버로부터 수신자의 메일 서버로 전송하는 데 TCP의 신뢰적인 데이터 전송 서비스를 이용함<br>
두 메일 서버가 멀리 떨어져 있어도 중간 메일 서버를 사용하지 않고 직접 연결함<br>
지속 연결을 사용함<br>
HTTP는 Pull 프로토콜인 반면 SMTP는 Push 프로토콜임<br>
따라서 송신자 에이전트-송신자 메일서버, 송신자 메일서버-수신자 메일서버는 SMTP를 사용하지만, 수신자 메일서버-수신자 에이전트는 SMTP를 사용할 수 없음<br>
수신자 메일서버-수신자 에이전트는 POP3(Post Office Protocol Version 3), IMAP(Internet Mail Access Protocol), HTTP 등을 사용함

**:pushpin: DNS(Domain Name System)**

애플리케이션 프로토콜(HTTP, SMTP, FTP 등)은 사용자가 제공한 호스트 네임을 IP주소로 변환함<br>
호스트 앨리어싱(복잡한 호스트 네임을 가진 호스트는 하나 이상의 별명을 가질 수 있다)<br>
부하 분산(여러 IP주소가 하나의 정식 호스트 네임과 연관되어 있는 중복 웹 서버로 요청할 경우 각 응답에서 주소는 순환적으로 보냄, 여러 중복 서버들 사이에서 트래픽을 분산하는 효과가 있음)<br>
루트 DNS 서버, 최상위 레벨 도메인(TLD) 서버, 책임 DNS 서버로 계층적으로 구성되어 있음

**DNS 캐싱**

로컬 DNS 서버는 호스트 네임과 IP주소 쌍을 저장할 수 있고, 같은 질의가 올 경우 원하는 IP주소를 제공할 수 있음<br>
로컬 DNS 서버는 TLD 서버의 IP주소도 저장할 수 있어서 루트 DNS 서버를 우회할 수도 있음

**DNS 자원 레코드**

DNS 자원 레코드는 호스트 네임을 IP주소로 매핑하기 위해 사용됨<br>
Name, Value, Type, TTL로 구성됨<br>
TTL은 자원 레코드의 생존기간을 의미함<br>
Type=A: Name은 호스트 네임, Value는 IP주소<br>
Type=NS: Name은 도메인, Value는 책임 DNS 서버의 호스트 네임<br>
Type=CName: Name은 별칭 호스트 네임, Value는 정식 호스트 네임<br>
Type=MX: Name은 메일 서버의 별칭 호스트 네임, Value는 메일 서버의 정식 이름

**:pushpin: 스트리밍**

HTTP 스트리밍은 모든 클라이언트들이 가용 대역폭의 차이가 있음에도 불구하고, 똑같이 인코딩된 비디오를 전송받는다는 문제점이 있음<br>
이를 해결하기 위해 DASH(Dynamic Adaptive Streaming over HTTP)가 개발됨<br>
DASH에서 비디오는 서로 다른 비트율과 품질을 가진 서로 다른 버전으로 인코딩됨<br>
클라이언트는 동적으로 서로 다른 버전의 비디오를 비디오 조각(chunck) 단위로 요청함<br>
각 비디오 버전은 서로 다른 URL을 가지고 있음<br>
HTTP 서버는 각 버전의 URL을 제공하는 매니페스트(manifest) 파일을 가지고 있음

**:pushpin: CDN(Contents Distribution Network, 콘텐츠 분배 네트워크)**

다수 지점에 분산된 서버들에 콘텐츠 데이터의 복사본을 저장함<br>
사용자는 가장 적절한 CDN 서버로 연결됨<br>
지역 클러스터에 없는 비디오를 요청하면, 해당 비디오를 중앙 서버나 다른 클러스터로부터 전송받아 서비스 하는 동시에 복사본을 만들어 저장함<br>
저장 공간이 가득 차면 자주 사용되지 않는 비디오 데이터는 삭제됨

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

인터넷 트랜스포트 계층의 개요

IP 서비스 모델은 최선형 전달 서비스를 제공함
이는 IP가 세그먼트를 전달하기 위해 최대한 노력하지만, 순서나 무결성 등 어떤 보장도 하지 않음을 의미함
따라서 IP를 비신뢰적인 서비스라고 부름
TCP와 UDP는 트랜스포트 다중화(Multiplexing)와 역다중화(Demultiplexing)를 제공함
이는 호스트 대 호스트 전달을 프로세스 대 프로세스 전달로 확장시킴

다중화와 역다중화

텔넷 프로세스 1개, FTP 프로세스 1개, HTTP 프로세스 1개가 실행중일 때, 네트워크로부터 데이터를 수신할 시 트랜스포트 계층은 어떤 프로세스로 데이터를 전달할 지 결정해야 함
트랜스포트 계층은 소켓을 통해 데이터를 전달하는데 소켓에는 식별 번호가 있음
트랜스포트 계층의 세그먼트 데이터를 올바른 소켓으로 전달하는 것을 역다중화, 세그먼트들을 네트워크 계층으로 전달하는 것을 다중화라고 함
소켓은 유일한 식별자를 가져야하며, 세그먼트가 전달될 적절한 소켓을 가리키기 위해 출발지 포트 번호와 목적지 포트 번호가 있어야 함
비연결형 다중화와 역다중화(UDP)는 목적지 IP주소와 목적지 포트 번호로만 UDP 소켓을 식별함
따라서 출발지 IP주소나 출발지 포트 번호가 다를지라도 동일한 프로세스로 할당됨
연결지향형 다중화와 역다중화(TCP)는 출발지 IP주소, 포트 번호, 목적지 IP주소, 포트 번호에 의해 식별됨. 이 4개를 모두 사용함

비연결형 트랜스포트: UDP

UDP를 사용하는 이유는 다양함
무슨 데이터를, 언제 보낼지는 애플리케이션 레벨에서 더 정교하게 제어할 수 있음
연결 설정이 없고, 연결 상태가 없음
TCP는 20바이트, UDP는 8바이트로 작은 패킷 오버헤드를 가짐

UDP 세그먼트 구조
출발지 포트 번호(2바이트)
목적지 포트 번호(2바이트)
길이(2바이트)
체크섬(2바이트)
메시지

UDP 체크섬
3개의 16비트 워드가 있을 때 체크섬은 이 3개를 윤회식 자리올림으로 모두 더하고 1의 보수를 구하는데 이것이 체크섬임
오류가 없는 경우 체크섬을 포함하여 4개의 워드를 모두 더하면 1111 1111 1111 1111이 되고 0이 하나라도 있으면 오류임
링크 계층 프로토콜에서도 체크섬을 하는데 UDP까지 체크섬을 해야하는 이유는 모든 링크가 오류 검사를 한다는 보장이 없기 때문임
  
신뢰적인 데이터 전달 프로토콜의 구축(rdt)

rdt 1.0
완벽하게 신뢰적인 채널 상에서의 신뢰적인 데이터 전송을 가정함
오류가 생길 수 없기 때문에 수신 측이 송신 측에게 어떠한 피드백도 제공할 필요가 없음

rdt 2.0
비트 오류가 있는 채널 상에서의 신뢰적 데이터 전송을 가정함
자동 재전송 요구(Automatic Repeat reQuest, ARQ) 프로토콜을 사용함
오류 검출: 체크섬 사용
수신자 피드백: 긍정 확인응답(ACK)와 부정 확인응답(NAK) 사용함. 0은 NAK, 1은 ACK로 1비트로 표현 가능함
재전송: 오류를 가지고 수신된 패킷은 송신자에 의해 재전송

rdt 2.0은 데이터 송신 후 ACK를 수신할 때까지 새로운 데이터를 보낼 수 없음
이는 NAK 수신시 계속 기다리고, ACK를 대기하고 있는 상태이기 때문임
따라서 이를 전송 후 대기(Stop and Wait) 프로토콜이라고도 함
ACK 또는 NAK 패킷이 손상될 수 있다는 점에서 오류가 발생할 수 있음
이를 해결하기 위해서는 순서번호(Sequence Number)가 필요함
수신자는 수신된 패킷이 재전송인지 확인할 때는 순서번호를 확인하면 됨

rdt 3.0
비트 오류와 손실 있는 채널 상에서의 신뢰적 데이터 전송을 가정함
패킷 손실에 대응하기 위해서 카운트다운 타이머를 활용함
매 패킷이 송신된 시간에 타이머를 시작하고, 타이머 인터럽트에 반응하여 적당한 행동을 취하고, 타이머를 멈춤
보통 타이머는 송신자와 수신자 사이의 왕복지연시간보다 넉넉하게 잡는 경향이 있음

파이프라인 신뢰적 데이터 전송 프로토콜

rdt 3.0은 기능적으로는 정확하나 전송 후 대기 프로토콜이므로 속도가 느림
확인 응답을 기다리지 않고 여러 패킷을 전송하는 것을 파이프라이닝이라고 부름
여러 패킷을 전송하므로 순서 번호의 범위가 커져야 하고, 각각 전송 중인 패킷은 유일한 순서 번호를 가져야함신
송신측과 수신측은 한 패킷 이상을 버퍼링 해야 함

파이프라인 N부터 반복(Go Back N, GBN)
송신자는 확인 응답을 기다리지 않고 여러 패킷을 전송할 수 있는데, 최대 허용수는 N이고 N을 윈도우 크기라고 부름
GBN은 슬라이딩 윈도우 프로토콜이라고도 부름
base는 확인 응답이 안 된 가장 오래된 패킷의 순서 번호, nextseqnum은 전송될 다음 패킷의 순서번호로 패킷은 4가지로 구분할 수 있음
[0:base-1]은 이미 전송되었고 확인 응답이 된 패킷, [base:nextseqnum-1]은 송신은 되었지만 아직 확인 응답이 안 된 패킷, [nextseqnum:base+N-1] 상위 계층으로부터 데이터가 도착하면 바로 전송될 수 있는 패킷, [base+N:]은 확인 응답이 도착할 때까지 사용할 수 없는 패킷임
타임아웃 발생시 이전에 전송되었지만 아직 확인응답이 되지 않은 모든 패킷을 다시 전송함
타이머는 전송되었지만 아직 확인응답이 되지 않은 패킷 중 가장 오래된 것에 대한 타이머임
수신자는 누적 확인응답을 사용함. 패킷 N에 대한 ACK를 보냈다는 것은 N-1까지는 다 받았다는 뜻임
순서가 잘못된 패킷은 버림. N이 누락되고 N+1이 왔을 때, N을 요청하면 어차피 N+1도 같이 오므로 잘못된 패킷을 버퍼링할 필요가 없음
  
파이프라인 선택적 반복(Selective Repeat, SR)
송신자는 오류가 발생한 패킷을 수신했다고 의심되는 패킷만을 재전송함
수신자는 패킷의 순서와는 무관하게 손상 없이 수신된 패킷에 대해서만 확인응답함
수신자는 손실된 패킷이 나타날 때까지, 뒤의 패킷을 저장하고 있다가, 앞의 패킷이 수신되면 모두 함께 상위 계층으로 전달함
현재 윈도우 base보다 아래의 특정 순서번호를 가진 이미 수신된 패킷에 대해서도 ACK를 보냄
ACK가 없으면 송신자는 계속 재전송을 할 것이기 때문임
윈도우가 순서번호에 비해 너무 크면 순서번호를 모두 돌고 새 패킷이 오는 건지, 재전송이 되는 것인지 구분하기가 어려움
따라서 윈도우의 크기는 순서번호 크기의 절반보다 작거나 같아야 함
  
연결지향형 트랜스포트: TCP

TCP 연결
TCP는 연결지향형이므로 핸드셰이크를 해야함
TCP는 오직 두 종단 시스템에만 존재하고, 중간의 네트워크 요소들은 TCP를 감지하지 못 함
전이중(Full-Duplex) 서비스를 제공함. TCP 연결되면 송신자이자 수신자가 될 수 있음
단일 송신자와 단일 수신자 사이의 점대점(Point to Point) 연결임

TCP 세그먼트 구조
TCP 헤더는 일반적으로 20바이트임
출발지 포트번호(2바이트), 목적지 포트번호(2바이트)
순서번호(4바이트), 확인응답번호(4바이트)
수신 윈도우(2바이트), 헤더 길이(4비트), 플래그(6비트), 나머지(6비트)
인터넷 체크섬(2바이트), 긴급 데이터 포인터(2바이트)
  
순서번호와 확인응답번호
세그먼트에 대한 순서번호는 세그먼트에 있는 첫번째 바이트의 바이트 스트림 번호임
데이터 스트림이 500,000바이트이고, MSS가 1,000바이트이면 첫번째 세그먼트 순서번호는 0, 두번째는 1,000임
호스트 B가 보내는 확인응답 번호는 호스트 A로부터 기대하는 다음 바이트의 순서번호임
예를 들어 0~535바이트 수신 후 536을 보냄
900~1000바이트를 받았을 경우에도 556을 보내는 누적 확인응답을 제공함
  
왕복시간(RTT, Round Trip Time) 예측과 타임아웃
Sample RTT 세그먼트로 측정하며, 모든 sample을 모두 측정하지 않고, 어떤 시점에서 전송되었지만 현재까지 확인응답이 없는 세그먼트 중 하나만 측정함
재전송된 세그먼트에 대해서는 계산하지 않음
대체로 평균값을 사용함. estimatedRTT = (1-a)*estimatedRTT + a*sampleRTT이고 a는 통상 0.125
RTT의 변화율은 devRTT = (1-b)*devRTT + b*|sampleRTT - estimatedRTT|이고 b는 통상 0.25
적절한 타임아웃 주기는 estimatedRTT보다는 커야함. TimeoutInterval = estimatedRTT + 4*devRTT
  
  
