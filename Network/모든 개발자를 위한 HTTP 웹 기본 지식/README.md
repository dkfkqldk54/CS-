모든 개발자를 위한 HTTP 웹 기본 지식

목차(각 부분에 링크를 달아서 해당 부분을 클릭하면 해당 영역으로 넘어가도록)

Section 1. 인터넷 네트워크
- IP
- TCP
- UDP
- PORT
- DNS

Section 2. URI와 웹 브라우저의 요청 흐름
- URI
- URN
- URL
- 웹 브라우저의 요청 흐름

Section 3. HTTP 기본
- HTTP?
- 클라이언트 서버 구조
- 무상태 프로토콜(Stateless)
- 비연결성
- HTTP 메시지

Section 4. HTTP 메서드
- HTTP 메서드 종류
- GET
- POST
- PUT
- PATCH
- DELETE
- HTTP 메서드 속성

Section 5. HTTP 메서드 활용
- 클라이언트에서 서버로 데이터 전송 종류
- 클라이언트에서 서버로 데이터 전송 상황
- HTTP API 설계 예시

Section 6. HTTP 상태코드
- 2xx 성공
- 3xx 리다이렉션
- 4xx 클라이언트 오류
- 5xx 서버 오류

Section 7. HTTP 헤더1: 일반 헤더
- 헤더 개요
- 콘텐츠 협상
- 전송 방식
- 일반 정보
- 특별한 정보
- 인증
- 쿠키

Section 8. HTTP 헤더2: 캐시와 조건부 요청
- 캐시 기본 동작
- 검증 헤더와 조건부 요청
- Last-Modified, If-Modified-Since
- ETag, If-None-Match
- 캐시와 조건부 요청 헤더
- 프록시 캐시
- 캐시 무효화

Section1. 인터넷 네트워크

IP
지정한 IP 주소에 데이터를 전달하기 위한 프로토콜. 단위는 패킷.

IP의 한계
비연결성: 패킷을 받을 대상이 없거나 서비스 불능 상태인 경우에도 패킷을 전송함.
비신뢰성: 패킷이 중간에 사라지거나(예: 중간 노드가 꺼져버리는 등)순서대로 오지 않을 수 있음(예: 용량이 큰 패킷은 늦게 도착하는 등)
프로그램 구분: 같은 IP를 사용하고 있는 애플리케이션이 둘 이상일 경우(예: 1개의 PC로 음악을 듣고, 게임을 하는 등) 이들을 구분하기가 어려움. 

→ 위 3가지 한계를 해결하기 위해서 TCP가 필요함.

TCP/IP 패킷 정보

사진1

전송 제어, 순서 제어, 검증 정보 등이 부가됨으로써 IP의 한계를 극복함.

TCP(Transmisson Control Protocol)의 특성
연결지향: 3 way handshake
데이터 전달 보증: 데이터 전송 성공 시 데이터를 받았다는 응답을 받을 수 있음
순서 보장: 1, 2, 3 순서로 보낸 패킷이 1, 3, 2로 도착하면 2부터 다시 보내달라고 요청

TCP 3way handshake

사진2

UDP(User Datagram Protocol)
하얀 도화지에 비유(기능이 거의 없음)
데이터 전달 및 순서가 보장되지 않지만 단순하고 빠름
IP와 거의 같음. 여기에 PORT 번호와 체크섬만 추가함.
애플리케이션에서 추가 작업이 필요함

그럼 왜 UDP를 쓰는가?
TCP는 이미 정형화 된 틀이 있어서 더 이상 최적화하기가 어려움.
그러나 UDP는 하얀 백지와 같아서 최적화 작업이 용이함.
예전에는 TCP 점유율이 90% 이상이었지만, 최근에는 최적화 가능성으로 인해 UDP가 각광받고 있음.

PORT

사진 3

한 번에 둘 이상을 연결해야 할 경우 PORT가 필요함.
0-65535 할당 가능
0-1023 잘 알려진 포트. 사용하지 않는 것이 좋음.
FTP 20, 21
TELNET 23
HTTP 80
HTTPS 443

DNS(Domain Name System)
IP는 기억하기 어렵고 변경될 수 있음.
따라서 DNS 서버에 도메인 명(예: google.com)과 IP 주소(200.200.200.2)를 등록하여 도메인 명으로 IP 주소를 요청하여 사용.

Section2. URI와 웹 브라우저의 요청 흐름

URI(Uniform Resource Identifier)
Uniform: 리소스를 식별하는 통일된 방식
Resource: 자원, URI로 식별할 수 있는 모든 것. 제한 없음.
Identifier: 다른 항목과 구분하는데 필요한 정보.
URI는 URL(Locator)과 URN(Name)을 모두 포함한 개념.

URN(Uniform Resource Name)
리소스에 이름을 부여한 것.
예시: urn:example:ferret:nose
위치는 변할 수 있지만, 이름은 변하지 않는다. 
그러나 URN만으로는 실제 리소스를 찾를 수 있는 방법이 보편화되어 있지 않음.
따라서 URI는 URL를 지칭하는 경우가 대부분임.

URL(Uniform Resource  Locator)
예시: https://www.google.com:443/search?q=hello&hl=ko
형식: scheme://[userinfo@]host[:port][/path][?query][#fragment]

scheme
주로 프로토콜 사용
프로토콜: 어떤 방식으로 자원에 접근할 것인가 하는 약속 규칙(http 등)

userinfo
URL에 사용자 정보를 포함해서 인증
거의 사용하지 않음

host
호스트명
도메인명 또는 IP 주소를 직접 입력해서 사용 가능

port
일반적으로 생략함
생략시 http는 80, https는 443

path
리소스 경로, 계층적 구조
예시: /home/file1.jpg

query
key=value 형태임
?로 시작. &로 추가 가능
query parameter, query string 등으로 불림.

fragment
html 내부 북마크에서 사용함.
서버로 전송되는 정보는 아님.

웹 브라우저의 요청 흐름
1. https://www.google.com:443/search?q=hello&hl=ko 입력
2. DNS 서버 조회. IP주소랑 포트 정보 찾아냄. HTTP 요청 메세지 생성.
HTTP 요청 메세지
GET/search?q=hello&hl=ko HTTP/1.1 Host: www.google.com
3. socket 라이브러리를 통해 전달(IP와 PORT로 TCP/IP를 연결하고 데이터 전달)
4. TCP/IP 패킷 생성. HTTP 메세지 포함.
5. 전기적 신호로 변환되어 인터넷으로 흘러감.
6. 요청 받은 후 HTTP 응답 메시지 만들어냄.
HTTP/1.1 200 OK
Content-Type: text/html:charset=UTF-8
Content-Length: 3423
<html>
...
</html>
7. 웹 브라우저가 html 문서를 사용자에게 보여줌.

Section3. HTTP 기본

HTTP?
HTML, TEXT, 이미지, 음성, 영상, 파일, JSON 등 거의 모든 형태의 데이터 전송 가능함.
서버 간에 데이터를 주고 받을 때도 대부분 HTTP를 사용함.

HTTP의 역사
HTTP/0.9: 1991년. GET 메서드만 지원. HTTP 헤더 없음.
HTTP/1.0: 1996년. 메서드와 헤더 추가.
HTTP/1.1: 1997년. 가장 많이 사용. 가장 중요. TCP 사용.
HTTP/2: 2015년. 성능 개선. TCP 사용.
HTTP/3: 진행중. TCP 대신 UDP 사용. 성능 개선.

HTTP 특징
클라이언트 서버구조
무상태 프로토콜(Stateless)
비연결성
HTTP 메시지

클라이언트 서버 구조
Request-Response 구조
클라이언트는 서버에 요청을 보내고 응답을 대기
서버는 요청에 대한 결과를 만들어서 응답

무상태 프로토콜(Stateless)
서버가 클라이언트의 상태를 보존하지 않는 것
Stateful과 대비되는 개념임.
단점: 클라이언트가 추가 데이터를 전송해야 함. 즉 매번 필요한 정보를 몽땅 입력해줘야 작동함.
장점: 서버 확장성 높음. 스케일 아웃(수평확장). 클라이언트의 요청이 증가해도 서버 대거 투입 가능. 무한한 서버 증설 가능.

사진4(Stateful)
정보를 항상 유지해야 함. 따라서 서버 증설이 어려움.
서버 1이 중간에 종료되면 처음부터 다 다시 해야함.

사진5(Stateless)
서버 1에 장애가 생기면 서버2로 넘어가면 됨. 문맥이 필요없음.

모든 것을 무상태로 설계할 수 있는 경우도 있고 그렇지 않은 경우도 있음.
Stateless 예시: 로그인이 필요없는 단순 서비스 소개 화면
Stateful 예시: 로그인
로그인한 사용자의 경우 로그인 했다는 상태를 서버에 유지.
일반적으로 브라우저 쿠키와 서버 세션들을 사용하여 상태를 유지함.
상태 유지는 최소한만 사용해야 함.

비연결성
사진6(연결을 유지하는 모델)
사용하지 않는 서버와도 계속 연결을 유지하고 있어서 서버 자원을 소모함.

사진7(연결을 유지하지 않는 모델)
서버는 연결을 유지하지 않음. 최소한의 자원만 유지함.

HTTP는 기본적으로 연결을 유지하지 않는 모델임.
일반적으로 초 단위 이하의 빠른 속도로 응답함.
1시간 동안 수천명이 서비스를 사용해도 실제 서버에서 동시레 처리하는 요청은 수십개 이하로 매우 적음
비연결성을 통해 서버 자원을 매우 효율적으로 사용할 수 있음

비연결성 한계와 극복
TCP/IP 연결을 새로 맺어야 함(3-way-handshake 시간이 추가됨)
웹 브라우저로 사이트를 됴청하면 HTML 뿐만 아니라 자바스크립트, CSS, 이미지 등 수 많은 자원이 함께 다운로드 됨.
지금은 HTML 지속 연결로 문제를 해결(요청-응답이 다 끝날 때까지 연결을 지속하다가 맨 마지막에 종료)
HTTP/2, HTTP/3에서 더 많은 최적화가 이루어짐.

HTTP 메시지
사진 8(HTTP 메시지 구조)
시작 라인(start-line)
헤더(header)
공백 라인(empty line, 무조건 들어가야 해)
message body

시작 라인
start line은 request line과 status line으로 나뉨

request line = method SP(공백) request-target SP HTTP-version CRLF(엔터)
예) GET /search?q=hello&hl=ko HTTP/1.1

HTTP 메서드
서버가 수행해야 할 동작을 지정함.
종류: GET, POST, PUT, DELETE
GET: 리소스 조회
POST: 요청 내역 처리

status-line = HTTP-version SP status-code SP reason-phras3 CRLF
예) HTTP/1.1 200 OK

HTTP 상태 코드
요청 성공, 실패 등을 나타냄
200: 성공
400: 클라이언트 요청 오류
500: 서버 내부 오류
이유 문구: 사람이 이해할 수 있는 설명 글

HTTP 헤더
header-field = field-name ":" OWS(띄어쓰기 허용) field-value OWS
예) Host: www.google.com
예) Content-Type: text/html;charset=UTF-8
Content-Length: 3423
field-name은 대소문자 구분하지 않음
HTTP 전송에 필요한 모든 부가 정보를 포함함.
필요시 임의의 헤더 추가 가능.

HTTP 메시지 바디
실제 전송할 데이터
HTML 문서, 이미지, 영상, JSON 등 byte로 표현 가능한 모든 정보


Section 4. HTTP 메서드

HTTP 메서드 종류
GET: 리소스 조회
POST: 요청 데이터 처리, 주로 등록에 사용
PUT: 리소스 대체, 해당 리소스가 없으면 생성
PATCH: 리소스 부분 변경
DELETE: 리소스 삭제
HEAD: GET과 동일하지만 메시지 부분 제외하고 상태줄과 헤더만 반환
OPTIONS: 대상 리소스에 대한 통신 가능 옵션(메서드)을 설명
CONNECT: 대상 자원으로 식별되는 서버에 대한 터널을 설정
TRACE: 대상 리소스에 대한 경로를 따라 메시지 루프백 테스트 수행

GET
리소스 조회
서버에 전달하고 싶은 데이터는 query(쿼리 파라미터, 쿼리 스트링)를 통해서 전달
메시지 바디를 사용해서 데이터를 전달할 수 있지만, 지원하지 않는 곳이 많아서 권장하지 않음

요청
GET /members/100 HTTP/1.1
Host localhost:8080

응답
HTTP/1.1 200 ok
Content-Type: application/json
Content-Length: 34
{
 "username":"young",
 "age":20
}

POST
메시지 바디를 통해 서버로 요청 데이터 전달
서버는 메시지 바디를 통해 들어온 데이터를 처리하는 모든 기능을 수행한다.

1. 요청 데이터 처리
예) 주문→결제완료→배달시작→배달완료
값 변경을 넘어 프로세스의 상태가 변하는 경우
POST /orders/{orderID}/start-delivery
여기서 start-delivery를 컨트룰 URI라고 하는데 실무에서는 resource만으로 다 처리할 수 없어서 사용
2. 새 리소스 생성
3. 다른 메서드로 처리하기 애매한 경우
예) JSON으로 조회 데이터를 넘겨야 하는데, GET 메서드를 사용하기 어려운 경우
주로 전달되는 데이터로 신규 리소스 등록, 프로세스 처리에 사용

요청
POST /members HTTP/1.1
Content-Type: application/json
{
 "username":"young",
 "age":20
}

응답
HTTP/1.1 201 Created
Content-Type: application/json
Content-Length: 34
Location: /members/100
{
 "username":"young",
 "age":20
}

PUT
리소스 있으면 완전 대체
리소스 없으면 생성
클라이언트가 리소스의 위치를 알고 URI 지정

요청
PUT /members/100 HTTP/1.1
Content-Type: application/json
{
 "username":"young",
 "age":20
}

만약 바디에 "age":20만 넣으면 기존에 있던 username 필드 없어지고 age만 저장됨 → 수정이 어려움 → PATCH 필요

PATCH
리소스 부분 변경
PATCH /members/100 HTTP/1.1
Content-Type: application/json
{
 "age":20
}

DELETE
리소스 제거
DELETE /members/100 HTTP/1.1
Host localhost:8080

HTTP 메서드의 속성
1. 안전(safe)
호출해도 리소스를 변경하지 않는다.
GET, HEAD 등.

2.멱등(idempotent)
f(f(x))=f(x)
한번 호출하든 두번 호출하든 결과가 똑같다.
GET, PUT, DELETE 그러나 POST는 중복 결제 등 멱등이 아님
활용: 응답이 안 왔을 때 다시 요청해도 되는 경우, 자동복구 매커니즘

3. 캐시 가능(cacheable)
응답 결과 리소스를 캐시해서 사용해도 되는가
GET, HEAD, POST, PATCH 캐시 가능
실제로는 GET. HEAD 정도만 캐시로 사용
POST, PATCH는 본문 내용까디 캐시 키로 고려해야 하는데, 구현이 쉽지 않음

Section5. HTTP 메서드 활용

클라이언트에서 서버로 데이터 전송 종류
1. 쿼리 파라미터를 통한 데이터 전송
GET 사용
주로 정렬 필터(검색어)
2. 메시지 바디를 통한 데이터 전송
POST, PUT, PATCH
회원가입, 상품주문, 리소스 등록, 리소스 변경 등

클라이언트에서 서버로 데이터 전송 상황
1. 정적 데이터 조회
조회니까 GET 사용
쿼리 파라미터 없이 리소스 경로로 단순하게 조회 가능
이미지, 정적 테스트 문서 등

2. 동적 데이터 조회
조회니까 GET 사용
쿼리 파라미터 사용해서 데이터 전달
주로 검색, 게시판 목록에서 정렬 필터(검색어)
조회 조건을 줄여주는 필터, 조회 결과를 정렬하는 정렬 조건에 주로 사용

3. HTML Form을 통한 데이터 전송
회원 가입, 상품 주문, 데이터 변경 등
Content-Type: application/x-www-form-urlencoded 사용
form의 내용을 메시지 body를 통해서 전송(key=value, 쿼리 파라미터 형식)
전송 데이터를 url encoding처리(예: abc김 → abc%EA%B9%80)
HTML Form은 GET 전송도 가능
Content-Type: multipart/form-data
파일 업로드 같은 바이너리 데이터 전송 시 사용
다른 종류의 여러 파일과 폼의 내용 함께 전송 가능

4. HTTP API를 통한 데이터 전송
회원가입, 상품주문, 데이터 변경 등
서버 to 서버(백엔드 시스템 통신), 웹 클라이언트(HTML에서 Form대신 자바스크립트를 통한 통신에 사용, Ajax, 예: React, vue.Js와 같은 웹 클라이언트와 API 통신), 앱 클라이언트(아이폰, 안드로이드)
Content-Type: application/json을 주로 사용

HTTP API 설계 예시
1. HTTP API - 컬렉션
POST 기반 등록
예: 회원 관리 API 제공
회원등록 /members → POST
컬렉션은 서버가 관리하는 리소스 디렉터리를 의미함.
서버가 리소스의 URI를 생성하고 관리함.
/members가 컬렉션

2. HTTP API - 스토어
PUT 기반 등록
예: 정적 콘텐츠 관리, 원격 파일 관리
/members/{id} → PUT
스토어는 클라이언트가 관리하는 리소스 저장소를 의미함.
클라이언트가 리소스의 URI를 알고 관리.
여기서 스토어는 /members

3. HTML Form 사용
GET, POST만 지원
AJAX 같은 기술 이용하여 해결 가능하긴 함
예) 웹 페이지 회원 관리
회원 조회 /members/{id} → GET
회원 수정 폼 /members/{id}/edit → GET
회원 수정 /members/{id}/edit, /members/{id}  → POST
회원 삭제 /members/{id}/delete → POST
메서드를 다양하게 쓸 수 없어서 edit, delete 등 컨트룰 URI 사용

Section 6. HTTP 상태 코드

상태 코드: 클라이언트가 보낸 요청의 처리 상태를 응답에서 알려주는 기능

2xx 성공

200: Ok

201: Created
생성된 리소스는 응답의 Location 헤더 필드로 식별

202: Accepted
요청이 접수되었으나 처리가 완료되지 않았음.
배치 처리 같은 곳에서 사용
예: 요청 접수 후 1시간 뒤에 배치 프로세스가 요청을 처리함.

204: No Content
서버가 요청을 성공적으로 수행했지만, 응답 본문에 보낼 데이터가 없음.
예) 웹 문서 편집기에서 save 버튼
save 버튼의 결과로 아무 내용이 없어도 된다.
save 버튼을 눌러도 같은 화면을 유지해야 한다.

3xx 리다이렉션

요청을 완료하기 위해 유저 에이전트(주로 웹 브라우저)의 추가 조치 필요

리디렉션의 이해
웹 브라우저는 3xx 응답의 결과에 Location 헤더가 있으면, Location 위치로 자동 이동(리다이렉트)

영구 리다이렉션
특정 리소스의 URI가 영구적으로 이동
예: /event → /new-event
원래의 URL을 사용하지 않음. 
검색 엔진 등에서도 변경을 인지함

300 Multiple Choices
거의 안 씀

301 Moved Permanently
리다이렉트시 요청 메서드가 GET으로 변하고, 본문이 제거될 수 있음

308 Permanent Redirect
301과 기능은 같음
리다이렉트시 요청 메서드와 본문 유지
POST를 보내면 리다이렉트도 POST

일시 리다이렉션
리소스의 URI가 일시적으로 변경
따라서 검색 엔진 등에서 URL을 변경하면 안 됨

302 FOUND
리다이렉트시 요청 메서드가 GET으로 변하고, 본문이 제거될 수 있음

307 Temporary Redirect
302와 기능은 같음
리다나렉트의 요청 메서드와 본문 유지

303 See Other
302와 기능은 같음
리다이렉트시 요청 메서드가 GET으로 무조건 변경

예시: PRG(POST/REDIRECT/GET)
POST로 주문 후에 윕 브라우저를 새로고침하면 POST로 다시 요청
중복 주문이 될 수 있음.
따라서 POST 주문 후에 주문 결과 화면을 GET으로 리다이렉트
새로고침해도 결과 화면 GET으로 나옴

특수 리다이렉션
결과 대신 캐시를 사용

304 Not Modified
캐시를 목적으로 사용
클라이언트에게 리소스가 수정되지 않았음을 알려줌.
따라서 클라이언트는 로컬 PC에 저장된 캐시를 재사용한다.(캐시로 리다이렉트한다.)
304 응답은 응답에 메시지 바디를 포함하면 안 된다.(로컬 캐시를 사용해야 하므로)
조건부 GET, HEAD 요청 시 사용

4xx 클라이언트 오류
클라이언트의 요청에 잘못된 문법 등으로 서버가 요청을 수행할 수 없음
오류의 원인이 클라이언트에 있음
클라이언트가 이미 잘못된 요청을 보내고 있기 때문에 똑같은 재시도를 해도 실패함

400 Bad Request
클라이언트가 잘못된 요청을 해서 서버가 요청을 처리할 수 없음
요청 주문, 메시지 등등 오류
클라이언트는 요청 내용을 다시 검토하고 보내야함
예: 요청 파라미터가 잘못되거나 API 스펙이 맞지 않을 때

401 Unauthorized
인증(Authentication)되지 않음
401 오류 발생 시 응답에 WWW-Authenticate 헤더와 함께 인증 방법을 설명

403 Forbidden
서버가 요청을 이해했지만 승인을 거부함
주로 인증 자격 증명은 있지만 접근 권한이 불충분한 경우
예: 어드민 등급이 아닌 사용자가 로그인은 했지만, 어드민 등급의 리소스에 접근하는 경우

404 Not Found
요청 리소스를 찾을 수 없음
또는 클라이언트가 권한이 부족한 리소스에 접근할 때 해당 리소스를 숨기고 싶을 때

5xx 서버 오류
서버 문제로 오류 발생
서버에 문제가 있기 때문에 재시도하면 성공할 수도 있음

500 Internel Server Error
서버 내부 문제로 오류 발생
애매하면 500 오류

503 Service Unavailable
서비스 이용 불가
서버가 일시적인 과부하 또는 예정된 작업으로 잠시 요청을 처리할 수 없음
Retry-After 헤더 팔드로 얼마 뒤에 복구되는지 보낼 수도 있음.

Section 7. HTTP 헤더1: 일반 헤더

헤더 개요

Content-Type
표현 데이터의 형식
text/html;charset=utf-8
application/json
image/png

Content-Encoding
표현 데이터의 압축 방식
gzip
deflate
identity(압축하지 않았다는 뜻)

Content-Language
표현 데이터의 자연 언어
ko, en, en-US

Content-Length
표현 데이터의 길이
바이트 단위

콘텐츠 협상
클라이언트가 선호하는 표현을 요청하는 것
협상 헤더는 요청시에만 사용함.
Accept-Charset: 클라이언트가 선호하는 문자 인코딩
Accept-Encoding: 클라이언트가 선호하는 압축 인코딩
Accept-Language: 클라이언트가 선호하는 자연 언어

협상 우선순위

Quality Values(q)
0~1 범위이며 클수록 높은 우선순위
생략하면 1

구체적인 것이 우선한다.
1. text/plain
2. text/*
3. */*

구체적인 것을 기준으로 미디어 타입을 맞춘다.
Accept: text/*;q=0.3, text/html;q=0.7, text/html;level=1, text/html;level=2;q=0.4

전송 방식

단순 전송(Content-Length)

압축 전송(Content-Encoding)

분할 전송(Transfer-Encoding)
5
Hello

5
World

0
\r\n

5바이트 먼저 보내고, 5바이트 보내고, 끝내는 식
Transfer-Encoding: chunked
여기서는 Content-Length를 포함하면 안 됨

범위 전송(Range, Content-Range)
요청
Range: bytes=1001-2000
응답
Content-Range: bytes 1001-2000/2000

일반 정보

From
유저 에이전트의 이메일 정보
일반적으로 잘 사용되지 않음
검색 엔진 같은 곳에서 주로 사용
요청에서 사용

Referer
현재 요청된 페이지의 이전 웹페이지 주소
A→B로 이동하는 경우
B를 요청할 때 Referer: A를 포함해서 요청
Referer를 사용해서 유입 경로 분석 가능
referer는 referrer의 오타임

User-Agent
클라이언트의 애플리케이션 정보(웹 브라우저 정보 등등)
통계 정보
어떤 종류의 브라우저에서 장애가 발생하는지 파악하는 요청에서 사용

Server
요청을 처리하는 ORIGIN 서버의 소프트웨어 정보
Server: Apache/2.2.22(Debian)
응답에서 사용

Date
메시지가 발생한 날짜와 시간
응답에서 사용

특별한 정보

Host
요청한 호스트 정보(도메인)
요청에서 사용, 필수
하나의 서버가 여러 도메인을 처리해야 할 때
하나의 IP 주소에 여러 도메인이 적용되어 있을 때

Location
페이지 리다이렉션
웹 브라우저는 3xx 응답의 결과에 Location 헤더가 있으면 Location 위치로 자동 이동

Allow
허용 가능한 HTTP 메서드
405(Mathod Not Allowed)에서 응답에 포함해야 함
Allow: GET, HEAD, PUT

Retry-After
유저 에이전트가 다음 요청을 하기까지 기다려야 하는 시간
503(Service Unavailable) 서비스가 언제까지 불능인지 알려줄 수 있음
Retry-After: Fri, 31 DEC 23:59:59 GMT(날짜 표기)
Retey-After: 120(초단위 표기)

인증

Authorization
클라이언트의 인증 정보를 서버에 전달

WWW-Authenticate
리소스 접근 시 필요한 인증 방법 정의
401 Unauthorized 응답과 함께 사용

쿠키

Set-cookie: 서버에서 클라이언트로 쿠키를 전달(응답)
cookie: 클라이언트가 서버에서 받은 쿠키를 저장하고, HTTP 요청시 서버로 전달

쿠키가 필요한 이유
HTTP는 Stateless임
모든 요청에 사용자 정보 입력해야 함
브라우저 종료하고 다시 열면? 또 입력해야 함

요청
POST /login HTTP/1.1
user=홍길동

응답
HTTP/1.1 200 ok
Set-Cookie: user=홍길동

쿠키 정보는 쿠키 저장소에 저장함
Cookie: user=홍길동
요청이 있으면 쿠키를 헤더에 추가

사용처
사용자 로그인 세션 관리
광고 정보 트래킹

쿠키 정보는 항상 서버에 전송됨
네트워크 트래픽 추가 유발
최소한의 정보만 사용
서버에 전송하지 않고, 웹 브라우저 내부에 데이터를 저장하고 싶으면 웹 스토리지 사용
보안에 민감한 데이터는 저장하면 안 됨

쿠기 생명주기
Set-Cookie: expires=날짜 만료일에 삭제
Set-Cookie: max-age=3600 0이나 음수되면 삭제
세션 쿠키: 만료 날짜 생략 시 브라우저 종료시까지만 유지
영속 쿠키: 만료 날짜 입력 시 해당 날짜까지만 유지

쿠키 도메인

명시: 명시한 문서 기준 도메인 → 서브 도메인 포함
domain=example.org 지정해서 쿠키 생성
example.org는 물론이고 dev.example.org도 쿠키 접근

생략: 현재 문서 기준 도메인만 적용
example.org에서 쿠키를 생성하고 domain 지정은 생략
example.org에서만 쿠키 접근하고 dev.example.org는 쿠키 미접근

쿠키 경로

예: path=/home
이 경로를 포함한 하위 경로 페이지만 쿠키 접근
일반적으로 path=/ 루트로 지정
path=/home 지정시
/home 가능
/home/dev1 가능
/hello 불가능

쿠키 보안

Secure
쿠키는 http, https 구분하지 않고 전송
secure 적용시 https인 경우에만 전송

HttpOnly
XSS 공격 방지
자바스크립트에서 접근 불가
HTTP 전송에만 사용

SameSite
XSRF 공격 방지
요청 도메인과 쿠키에 설정된 도메인이 같은 경우만 쿠키 전송

Section 8. HTTP 헤더2: 캐시와 조건부 요청

캐시 기본 동작

캐시가 없을 때
데이터가 변경되지 않아도 계속 네트워크를 통해서 데이터를 다운로드 받아야 한다.

캐시 적용
캐시 덕분에 캐시 가능 시간동안 네트워크를 사용하지 않아도 된다.

캐시 시간 초과
캐시 유효 시간이 초과되면 서버를 통해 데이터를 다시 조회히고, 캐시를 갱신한다. 이 때, 다시 네트워크 다운로드가 발생한다.

서버에서 기존 데이터 변경하지 않았을 때
로컬 캐시를 다시 쓰고 싶음. 따라서 데이터가 바뀌지 않았다는 것을 확인하고 싶어. 검증 헤더를 추가함.

검증 헤더와 조건부 요청

검증 헤더
캐시 데이터와 서버 데이터가 같은지 검증하는 데이터
Last-Modified, ETag

조건부 요청 헤더
검증 헤더로 조건에 따른 분기
If-Modified-Since: Last-Modified 사용
If-None-Match: ETag 사용
조건에 만족되면 200 ok
만족되지 않으면 304 Not Modified

Last-Modified, If-Modified-Since

예시
응답 Last-Modified: 2000년~
요청 If-Modified-Since: 2000년~
응답 304 Not Modified, body없이 헤더만 보냄
클라이언트는 응답 헤더 정보로 캐시의 메타 정보 갱신 및 캐시에 저장된 데이터 재활용

단점
1초 미만 단위로 캐시 조정이 불가능
날짜 기반의 로직 사용
데이터를 수정해서 날짜가 다르지만, 실질적으로 변화가 없어 결과가 똑같은 경우
서버에서 별도의 캐시 로직을 관리하고 싶은 경우
예: 스페이스나 주석처럼 크게 영향이 없는 변경으로부터 캐시를 유지하고 싶은 경우

- ETag, If-None-Match

ETag(Entity Tag)
캐시용 데이터에 임의의 고유한 버전, 이름을 달아둠
예: ETag:"v1.0"
데이터가 변경되면 이 이름을 바꾸어서 변경함
예: ETag:"aaa" → ETag:"bbb"
단순하게 ETag만 보내서 같으면 유지, 다르면 다시 받기

캐시 제어 로직을 서버에서 완전히 관리
클라이언트는 단순히 이 값을 서버에 제공(클라이언트은 캐시 메커니즘을 모른)
예: 서버는 베타 오픈 기간인 3일 동안 파일이 변경되어도 ETag 동일하게 유지
애플리케이션 배포 주기에 맞춰 ETag 모두 갱신

- 캐시와 조건부 요청 헤더

캐시 제어 헤더

Cache-Control: max-age
캐시 유효 시간, 초 단위

Cache-Control: no-cache
항상 origin 서버에 검증하고 사용

Cache-Control: no-store
데이터에 민감한 정보가 있으므로 저장하면 안 됨
메모리에서 사용하고 최대한 빨리 삭제

Cache-Control: must-revalidate
캐시 만료 후 최초 조치시 원 서버에 검증
원 서버 접근 실패시 반드시 오류가 발생해야 함(504 Gateway Timeout)

Pragm: no-cache
HTTP 1.0 하위 호환

Expires
expires: Mon, 01 Jan 1990 00:00:00 GMT
캐시 만료일을 정확한 날짜로 지정
HTTP 1.0부터 사용
지금은 더 유연한 Cache-Control: max-age 권장
Cache-Control: max-age 사용시 Expires는 무시됨

프록시 캐시
미국에 있는 원서버(public)에서 바로 다운로드를 받으면 오래 걸림. 따라서 프록시 캐시 서버(private)을 중간에 둔다.

Cache-Control: Public
응답이 public 캐시에 저장되어도 됨

Cache-Control: Private
응답이 해당 사용자만을 위한 것임
private 캐시에 저장(기본값)

캐시 무효화
Cache-Control: no-cache, no-store, must-revalidate
Pragma: no-cache
확실하게 캐시를 무효화시키기 위해서는 4가지를 모두 적용해야 함.
