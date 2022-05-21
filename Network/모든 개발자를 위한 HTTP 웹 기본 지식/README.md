<h1>:green_book: <모든 개발자를 위한 HTTP 웹 기본 지식> 정리</h1>

**출처: [모든 개발자를 위한 HTTP 웹 기본 지식(김영한) 인프런 강의](https://www.inflearn.com/course/http-%EC%9B%B9-%EB%84%A4%ED%8A%B8%EC%9B%8C%ED%81%AC)**

<a href="#1">:pencil2: Section 1. 인터넷 네트워크</a>
- IP
- TCP
- UDP
- PORT
- DNS

<a href="#2">:pencil2: Section 2. URI</a>
- URI
- URN
- URL

<a href="#3">:pencil2: Section 3. HTTP 기본</a>
- HTTP?
- 클라이언트 서버 구조
- 무상태 프로토콜(Stateless)
- 비연결성
- HTTP 메시지

<a href="#4">:pencil2: Section 4. HTTP 메서드</a>
- GET
- POST
- PUT
- PATCH
- DELETE
- HTTP 메서드 속성

<a href="#5">:pencil2: Section 5. HTTP 메서드 활용</a>
- 클라이언트에서 서버로 데이터 전송 종류
- 클라이언트에서 서버로 데이터 전송 상황
- HTTP API 설계 예시

<a href="#6">:pencil2: Section 6. HTTP 상태코드</a>
- 2xx 성공
- 3xx 리다이렉션
- 4xx 클라이언트 오류
- 5xx 서버 오류

<a href="#7">:pencil2: Section 7. HTTP 헤더1: 일반 헤더</a>
- 헤더 개요
- 콘텐츠 협상
- 전송 방식
- 일반 정보
- 특별한 정보
- 인증
- 쿠키

<a href="#8">:pencil2: Section 8. HTTP 헤더2: 캐시와 조건부 요청</a>
- 캐시 기본 동작
- 검증 헤더와 조건부 요청
- Last-Modified, If-Modified-Since
- ETag, If-None-Match
- 캐시와 조건부 요청 헤더
- 프록시 캐시
- 캐시 무효화

<h2><a id="1">:pencil2: Section1. 인터넷 네트워크</a></h2>

**:pushpin: IP**

지정한 IP 주소에 데이터를 전달하기 위한 프로토콜이며 단위는 패킷이다.

**IP의 한계**

비연결성: 패킷을 받을 대상이 없거나, 서비스 불능인 경우에도 패킷을 전송한다.<br>
비신뢰성: 패킷이 중간에 사라지거나, 순서대로 오지 않을 수 있다.<br>
프로그램 구분: 같은 IP를 사용하고 있는 애플리케이션이 둘 이상일 경우 이들을 구분하기가 어렵다.<br>

**:pushpin: TCP** 

TCP/IP 패킷에는 전송 제어, 순서 제어, 검증 정보 등이 부가됨으로써 IP의 한계를 극복할 수 있다.

**TCP(Transmisson Control Protocol)의 특성**

연결지향: 3-way-handshake<br>
데이터 전달 보증: 데이터 전송 성공 시 데이터를 받았다는 응답을 받을 수 있다.<br>
순서 보장: 1, 2, 3 순서로 보낸 패킷이 1, 3, 2 순서로 도착하면 2부터 다시 보내달라고 요청한다.<br>

**3-way-handshake**

클라이언트 → 서버: SYN(접속 요청)<br>
서버 → 클라이언트: ACK(요청 수락) + SYN<br>
클라이언트 → 서버: ACK<br>

**:pushpin: UDP(User Datagram Protocol)**

데이터 전달 및 순서가 보장되지 않지만 단순하고 빠르다.<br>
기능이 별로 없어서 IP와 거의 같고, PORT 번호와 체크섬만 추가한 정도다.<br>
애플리케이션에서 추가 작업이 필요하다.<br>

**그럼 왜 UDP를 쓰는가?**

TCP는 이미 정형화되어 있어 더 이상 최적화하기가 어렵다.<br>
그러나 UDP는 하얀 백지와 같아서 최적화하기가 용이하다.<br>

**:pushpin: PORT**

할당 가능한 포트: 0-65535<br>
잘 알려진 포트: 0-1023<br>
FTP: 20, 21<br>
TELNET: 23<br>
HTTP: 80<br>
HTTPS: 443<br>

**:pushpin: DNS(Domain Name System)**

IP는 기억하기 어렵고, 변경될 수도 있다.<br>
따라서 DNS 서버에 도메인 명과 IP 주소를 등록하여, 도메인 명으로 IP 주소를 요청하여 사용하는 것이 편하다.<br>

<h2><a id="2">:pencil2: Section2. URI</a></h2>

**:pushpin: URI(Uniform Resource Identifier)**

URI는 URL(Locator)과 URN(Name)을 모두 포함한 개념이다.

**:pushpin: URN(Uniform Resource Name)**

리소스에 이름을 부여한 것이다.<br>
예: urn:example:ferret:nose<br>

URN만으로는 리소스를 찾을 수 있는 방법이 보편화되어 있지 않아 URI는 URL를 지칭하는 경우가 대부분이다.<br>

**:pushpin: URL(Uniform Resource Locator)**

예시: https://www.google.com:443/search?q=hello&hl=ko<br>
형식: scheme://[userinfo@]host[:port][/path][?query][#fragment]<br>

**scheme**

주로 프로토콜을 사용한다.

**userinfo**

URL에 사용자 정보를 포함해서 인증할 때 사용하나 실제로는 거의 사용하지 않는다.

**host**

호스트명을 사용한다.<br>
도메인명 또는 IP 주소를 직접 입력해서 사용할 수 있다.

**port**

일반적으로 생략한다.

**path**

리소스 경로를 나타낸다.<br>
예: /home/file1.jpg

**query**

key=value 형태이며 ?로 시작하고 &로 추가 가능하다.<br>
query parameter, query string 등으로 불린다.

**fragment**

html 내부 북마크에서 사용하며 서버로 전송되는 정보는 아니다.

<h2><a id="3">:pencil2: Section3. HTTP 기본</a></h2>

**:pushpin: HTTP?**

HTML, TEXT, 이미지, 음성, 영상, 파일, JSON 등 거의 모든 형태의 데이터를 전송할 수 있다.<br>
서버 간에 데이터를 주고 받을 때도 대부분 HTTP를 사용한다.

**HTTP의 역사**

HTTP/0.9: 1991년, GET 메서드만 지원하고 HTTP 헤더 없음<br>
HTTP/1.0: 1996년, 메서드와 헤더 추가<br>
HTTP/1.1: 1997년, 가장 많이 사용함(TCP 사용)<br>
HTTP/2: 2015년, 성능 개선(TCP 사용)<br>
HTTP/3: 성능 개선(UDP 사용)<br>

**:pushpin: 클라이언트 서버 구조**

클라이언트는 서버에 요청을 보내고 응답을 대기하고, 서버는 요청에 대한 응답을 보낸다.

**:pushpin: 무상태 프로토콜(Stateless)**

서버가 클라이언트의 상태를 보존하지 않는 것을 가리키며 Stateful과 대비되는 개념이다.<br>
단점: 클라이언트가 추가 데이터를 전송해야 한다. 즉 매번 필요한 정보를 몽땅 입력해줘야 한다.<br>
장점: 클라이언트의 요청이 증가해도 서버를 대거 투입할 수 있어 서버의 확장성이 높다.

**:pushpin: 비연결성**

사용하지 않는 서버와 계속 연결을 유지하고 있을 필요가 없다.<br>
서버가 연결을 유지하지 않아 최소한의 자원만 사용할 수 있다.

다만 연결할 때마다 TCP/IP 연결을 새로 맺어야 하는 등 한계가 존재한다.<br> 
지금은 요청과 응답이 다 끝날 때까지 연결을 지속하다가 마지막에 종료하는 HTML 지속 연결로 문제를 해결하였다.

**:pushpin: HTTP 메시지**

**HTTP 메시지 구조**

시작 라인(start-line)<br>
헤더(header)<br>
공백 라인(empty line, 무조건 들어가야 한다.)<br>
바디(message body)

**시작 라인(start-line)**

start line은 request line과 status line으로 나뉜다.

request line = method SP(공백) request-target SP HTTP-version CRLF(엔터)<br>
예: GET /search?q=hello&hl=ko HTTP/1.1

status-line = HTTP-version SP status-code SP reason-phrase CRLF<br>
예: HTTP/1.1 200 OK

**헤더(header)**

header-field = field-name ":" OWS(띄어쓰기 허용) field-value OWS<br>
예: Host: www.google.com<br>
예: Content-Type: text/html;charset=UTF-8<br>

**바디(message body)**

실제 전송할 데이터로 HTML 문서, 이미지, 영상, JSON 등 byte로 표현 가능한 모든 정보를 담는다.

<h2><a id="4">:pencil2: Section 4. HTTP 메서드</a></h2>

**:pushpin: GET**

리소스를 조회할 때 사용한다.<br>

요청<br>
GET /members/100 HTTP/1.1<br>
Host: localhost:8080

응답<br>
HTTP/1.1 200 ok<br>
Content-Type: application/json<br>
Content-Length: 34<br>
{<Br>
 "username":"young",<br>
 "age":20<br>
}

**:pushpin: POST**
 
메시지 바디를 통해 서버로 요청 데이터를 전달한다.<br>
서버는 메시지 바디를 통해 들어온 데이터를 처리하는 모든 기능을 수행한다.

**1. 요청 데이터 처리**
 
예: 주문→결제완료→배달시작→배달완료<br>
POST /orders/{orderID}/start-delivery

**2. 새 리소스 생성**
 
**3. 다른 메서드로 처리하기 애매한 경우**
 
예: JSON으로 조회 데이터를 넘겨야 하는데, GET 메서드를 사용하기 어려운 경우

요청<br>
POST /members HTTP/1.1<br>
Content-Type: application/json<br>
{<br>
 "username":"young",<br>
 "age":20<br>
}

응답<br>
HTTP/1.1 201 Created<Br>
Content-Type: application/json<br>
Content-Length: 34<br>
Location: /members/100<br>
{<br>
 "username":"young",<br>
 "age":20<br>
}

**:pushpin: PUT**
 
리소스 있으면 완전히 대체하고, 리소스 없으면 생성한다.<br>
클라이언트가 리소스의 위치를 알고 URI 지정해야 한다.

요청<br>
PUT /members/100 HTTP/1.1<br>
Content-Type: application/json<br>
{<br>
 "username":"young",<br>
 "age":20<br>
}<br>

**:pushpin: PATCH**
 
리소스 부분 변경할 때 사용한다.

요청<br>
PATCH /members/100 HTTP/1.1<br>
Content-Type: application/json<br>
{<br>
 "age":20<br>
}<br>

**:pushpin: DELETE**
 
리소스 제거할 때 사용한다.
 
요청<br>
DELETE /members/100 HTTP/1.1<br>
Host: localhost:8080

**:pushpin: HTTP 메서드의 속성**

**안전(safe)**
 
호출해도 리소스를 변경하지 않는다.<br>
GET, HEAD가 있다.

**멱등(idempotent)**
 
f(f(x))=f(x)<br>
한번 호출하든 두번 호출하든 결과가 똑같다.<br>
GET, PUT, DELETE가 있다.<br>
그러나 POST는 중복 결제 등 멱등이 아니다.<br>
활용: 응답이 안 왔을 때 다시 요청해도 되는 경우, 자동복구 매커니즘

**캐시 가능(cacheable)**
 
응답 결과 리소스를 캐시해서 사용해도 된다.<br>
GET, HEAD, POST, PATCH는 캐시 가능하다.<br>

<h2><a id="5">:pencil2: Section5. HTTP 메서드 활용</a></h2>

**:pushpin: 클라이언트에서 서버로 데이터 전송 종류**
 
**1. 쿼리 파라미터를 통한 데이터 전송<br>**
GET<br>
주로 정렬 필터(검색어)를 이용하여 전송한다.
 
**2. 메시지 바디를 통한 데이터 전송<br>**
POST, PUT, PATCH<br>
회원가입, 상품주문, 리소스 등록, 리소스 변경 등

**:pushpin: 클라이언트에서 서버로 데이터 전송 상황**
 
**1. 정적 데이터 조회<br>**
GET<br>
쿼리 파라미터 없이 리소스 경로로 단순하게 조회 가능<br>
이미지, 정적 테스트 문서 등

**2. 동적 데이터 조회<br>**
GET<br>
쿼리 파라미터 사용해서 데이터 전달<br>
주로 검색, 게시판 목록에서 정렬 필터(검색어)

**3. HTML Form을 통한 데이터 전송<br>**
회원 가입, 상품 주문, 데이터 변경 등<br>
Content-Type: application/x-www-form-urlencoded 사용<br>
form의 내용을 메시지 body를 통해서 전송(key=value, 쿼리 파라미터 형식)<br>
전송 데이터를 url encoding처리(예: abc김 → abc%EA%B9%80)<br>
HTML Form은 GET 전송도 가능<br>
Content-Type: multipart/form-data<br>
파일 업로드 같은 바이너리 데이터 전송 시 사용<br>
다른 종류의 여러 파일과 폼의 내용 함께 전송 가능

**4. HTTP API를 통한 데이터 전송<br>**
회원가입, 상품주문, 데이터 변경 등<br>
서버 to 서버(백엔드 시스템 통신), 웹 클라이언트(HTML에서 Form대신 자바스크립트를 통한 통신에 사용, Ajax, 예: React, vue.Js와 같은 웹 클라이언트와 API 통신), 앱 클라이언트(아이폰, 안드로이드)<br>
Content-Type: application/json을 주로 사용

**:pushpin: HTTP API 설계 예시**
 
**1. HTTP API - 컬렉션<br>**
 
POST 기반 등록<br>
예: 회원 관리 API 제공<br>
회원등록 /members → POST<br>
 
컬렉션은 서버가 관리하는 리소스 디렉터리를 의미한다.<br>
서버가 리소스의 URI를 생성하고 관리한다.<br>
여기서 /members가 컬렉션이다.<br>

**2. HTTP API - 스토어<br>**
 
PUT 기반 등록<br>
예: 정적 콘텐츠 관리, 원격 파일 관리<br>
/members/{id} → PUT
 
스토어는 클라이언트가 관리하는 리소스 저장소를 의미한다.<br>
클라이언트가 리소스의 URI를 알고 관리한다.<br>
여기서 /members가 스토어다.

**3. HTML Form 사용<br>**
 
GET, POST만 지원한다.<br>
AJAX 같은 기술 이용하여 이 외의 메소드도 지원할 수 있긴 하다.<br>
예) 웹 페이지 회원 관리<br>
회원 조회 /members/{id} → GET<br>
회원 수정 폼 /members/{id}/edit → GET<br>
회원 수정 /members/{id}/edit, /members/{id}  → POST<br>
회원 삭제 /members/{id}/delete → POST<br>
메서드를 다양하게 쓸 수 없어서 edit, delete 등 컨트룰 URI 사용해야 한다.

<h2><a id="6">:pencil2: Section 6. HTTP 상태 코드</a></h2>

클라이언트가 보낸 요청의 처리 상태를 응답에서 알려주는 기능

**:pushpin: 2xx 성공**

**200: Ok**

**201: Created<br>**
생성된 리소스는 응답의 Location 헤더 필드로 식별

**202: Accepted<br>**
요청이 접수되었으나 처리가 완료되지 않았다.<br>
배치 처리할 때 사용한다.<br>
예: 요청 접수 후 1시간 뒤에 배치 프로세스가 요청을 처리한다.

**204: No Content<br>**
서버가 요청을 성공적으로 수행했지만, 응답 본문에 보낼 데이터가 없다.<br>
예) 웹 문서 편집기에서 save 버튼<br>
save 버튼의 결과로 아무 내용이 없어도 된다.<br>
save 버튼을 눌러도 같은 화면을 유지해야 한다.

**:pushpin: 3xx 리다이렉션**

요청을 완료하기 위해 유저 에이전트(주로 웹 브라우저)의 추가 조치 필요하다.

**리디렉션의 이해<br>**
웹 브라우저는 3xx 응답의 결과에 Location 헤더가 있으면, Location 위치로 자동 이동한다.

**영구 리다이렉션<br>**
특정 리소스의 URI가 영구적으로 이동한다.<br>
예: /event → /new-event<br>
원래의 URL을 사용하지 않으며 검색 엔진 등에서도 변경을 인지한다.

**300 Multiple Choices<br>**
거의 안 쓴다.

**301 Moved Permanently<br>**
리다이렉트시 요청 메서드가 GET으로 변하고, 본문이 제거될 수 있다.

**308 Permanent Redirect<br>**
301과 기능은 같다.<br>
리다이렉트시 요청 메서드와 본문 유지한다.<br>
POST를 보내면 리다이렉트도 POST로 간다.

**일시 리다이렉션<br>**
리소스의 URI가 일시적으로 변경된다.<br>
따라서 검색 엔진 등에서 URL을 변경하면 안 된다.

**302 FOUND<br>**
리다이렉트시 요청 메서드가 GET으로 변하고, 본문이 제거될 수 있다.

**307 Temporary Redirect<br>**
302와 기능은 같다.<br>
리다나렉트의 요청 메서드와 본문을 유지한다.

**303 See Other<br>**
302와 기능은 같다.<br>
리다이렉트시 요청 메서드가 GET으로 무조건 변경된다.

예시: PRG(POST/REDIRECT/GET)<br>
POST로 주문 후에 웹 브라우저를 새로고침하면 POST로 다시 요청되어 중복 주문이 될 수 있다.<br>
따라서 POST 주문 후에 주문 결과 화면을 GET으로 리다이렉트하면 새로고침해도 결과 화면이 GET으로 나온다.

**특수 리다이렉션<br>**
결과 대신 캐시를 사용한다.

**304 Not Modified<br>**
캐시를 목적으로 사한다.<br>
클라이언트에게 리소스가 수정되지 않았음을 알려준다.<br>
따라서 클라이언트는 로컬 PC에 저장된 캐시를 재사용한다.<br>
304 응답은 응답에 메시지 바디를 포함하면 안 된다.<br>
조건부 GET, HEAD 요청 시 사용한다.

**:pushpin: 4xx 클라이언트 오류<br>**
클라이언트의 요청에 잘못된 문법 등으로 서버가 요청을 수행할 수 없는 상태이다.<br>
오류의 원인이 클라이언트에 있으며, 클라이언트가 이미 잘못된 요청을 보내고 있기 때문에 똑같이 재시도를 해도 실패한다.

**400 Bad Request<br>**
클라이언트가 잘못된 요청을 해서 서버가 요청을 처리할 수 없다.<br>
클라이언트는 요청 내용을 다시 검토하고 보내야한다.<br>
예: 요청 파라미터가 잘못되거나 API 스펙이 맞지 않을 때

**401 Unauthorized<br>**
인증(Authentication)되지 않았다.<br>
401 오류 발생 시 응답에 WWW-Authenticate 헤더와 함께 인증 방법을 설명한다.

**403 Forbidden<br>**
서버가 요청을 이해했지만 승인을 거부한 상태다.<br>
주로 인증 자격 증명은 있지만 접근 권한이 불충분한 경우<br>
예: 어드민 등급이 아닌 사용자가 로그인은 했지만, 어드민 등급의 리소스에 접근하는 경우

**404 Not Found<br>**
요청 리소스를 찾을 수 없는 상태 혹은 클라이언트가 권한이 부족한 리소스에 접근할 때 해당 리소스를 숨기고 싶을 때

**:pushpin: 5xx 서버 오류**
 
서버 문제로 오류 발생한 것으로 서버에 문제가 있기 때문에 재시도하면 성공할 수도 있다.

**500 Internel Server Error<br>**
서버 내부 문제로 오류 발생한 경우<br>
애매하면 500 오류

**503 Service Unavailable<br>**
서비스 이용 불가<br>
서버가 일시적인 과부하 또는 예정된 작업으로 잠시 요청을 처리할 수 없음<br>
Retry-After 헤더 필드로 얼마 뒤에 복구되는지 보낼 수도 있다.

<h2><a id="7">:pencil2: Section 7. HTTP 헤더1: 일반 헤더</a></h2>

**:pushpin: 헤더 개요**

**Content-Type<br>**
표현 데이터의 형식<br>
text/html;charset=utf-8<br>
application/json<br>
image/png

**Content-Encoding<br>**
표현 데이터의 압축 방식<br>
gzip<br>
deflate<br>
identity(압축하지 않았다는 뜻)

**Content-Language<br>**
표현 데이터의 자연 언어<br>
ko, en, en-US

**Content-Length<br>**
표현 데이터의 길이<br>
바이트 단위

**:pushpin: 콘텐츠 협상<br>**
클라이언트가 선호하는 표현을 요청하는 것으로 협상 헤더는 요청시에만 사용한다.<br>
Accept-Charset: 클라이언트가 선호하는 문자 인코딩<br>
Accept-Encoding: 클라이언트가 선호하는 압축 인코딩<br>
Accept-Language: 클라이언트가 선호하는 자연 언어

**협상 우선순위**

**Quality Values(q)<br>**
0~1 범위이며 클수록 높은 우선순위<br>
생략하면 1

**구체적인 것이 우선한다.<br>**
1. text/plain<br>
2. text/*<br>
3. */*

**구체적인 것을 기준으로 미디어 타입을 맞춘다.<br>**
Accept: text/*;q=0.3, text/html;q=0.7, text/html;level=1, text/html;level=2;q=0.4

**:pushpin: 전송 방식**

**1. 단순 전송(Content-Length)**

**2. 압축 전송(Content-Encoding)**

**3. 분할 전송(Transfer-Encoding)<br>**
 
5<br>
Hello

5<br>
World

0<br>
\r\n

5바이트 먼저 보내고, 5바이트 보내고, 끝내는 식이다.<br>
Transfer-Encoding: chunked<br>
여기서는 Content-Length를 포함하면 안 된다.

**4. 범위 전송(Range, Content-Range)<br>**
 
**요청<br>**
Range: bytes=1001-2000
 
**응답<br>**
Content-Range: bytes 1001-2000/2000

**:pushpin: 일반 정보**

**From<br>**
유저 에이전트의 이메일 정보<br>
일반적으로 잘 사용되지 않는다.<br>
검색 엔진 같은 곳에서 주로 사용한다.<br>
요청에서 사용한다.

**Referer<br>**
현재 요청된 페이지의 이전 웹페이지 주소<br>
A→B로 이동하는 경우<br>
B를 요청할 때 Referer: A를 포함해서 요청한다.<br>
Referer를 사용해서 유입 경로를 분석할 수 있다.

**User-Agent<br>**
클라이언트의 애플리케이션 정보(웹 브라우저 정보 등등)<br>
통계 정보<br>
어떤 종류의 브라우저에서 장애가 발생하는지 파악하는 요청에서 사용한다.

**Server<br>**
요청을 처리하는 ORIGIN 서버의 소프트웨어 정보<br>
Server: Apache/2.2.22(Debian)<br>
응답에서 사용한다.

**Date<br>**
메시지가 발생한 날짜와 시간<br>
응답에서 사용한다.

**:pushpin: 특별한 정보**

**Host<br>**
요청한 호스트 정보(도메인)<br>
요청에서 사용하며 필수로 들어가야 한다.<br>
하나의 서버가 여러 도메인을 처리해야 할 때<br>
 하나의 IP 주소에 여러 도메인이 적용되어 있을 때

**Location<br>**
페이지 리다이렉션<br>
웹 브라우저는 3xx 응답의 결과에 Location 헤더가 있으면 Location 위치로 자동 이동한다.

**Allow<br>**
허용 가능한 HTTP 메서드<br>
405(Mathod Not Allowed)에서 응답에 포함해야 한다.<br>
Allow: GET, HEAD, PUT

**Retry-After<br>**
유저 에이전트가 다음 요청을 하기까지 기다려야 하는 시간<br>
503(Service Unavailable) 서비스가 언제까지 불능인지 알려줄 수 있다.<br>
Retry-After: Fri, 31 DEC 23:59:59 GMT(날짜 표기)<br>
Retey-After: 120(초단위 표기)

**:pushpin: 인증**

**Authorization<br>**
클라이언트의 인증 정보를 서버에 전달

**WWW-Authenticate<br>**
리소스 접근 시 필요한 인증 방법 정의<br>
401 Unauthorized 응답과 함께 사용한다.

**:pushpin: 쿠키**

Set-cookie: 서버에서 클라이언트로 쿠키를 전달(응답)<br>
cookie: 클라이언트가 서버에서 받은 쿠키를 저장하고, HTTP 요청시 서버로 전달

**쿠키가 필요한 이유<br>**
HTTP는 Stateless라서 모든 요청에 사용자 정보 입력해야 한다.<br>
브라우저 종료하고 다시 열면? 또 입력해야 한다.

**요청<br>**
POST /login HTTP/1.1<br>
user=홍길동

**응답<br>**
HTTP/1.1 200 ok<br>
Set-Cookie: user=홍길동

쿠키 정보는 쿠키 저장소에 저장한다.<br>
Cookie: user=홍길동<br>
요청이 있으면 쿠키를 헤더에 추가한다.

**사용처<br>**
사용자 로그인 세션 관리<br>
광고 정보 트래킹

쿠키 정보는 항상 서버에 전송된다.<br>
네트워크 트래픽 추가 유발하므로 최소한의 정보만 사용해야 한다.<br>
서버에 전송하지 않고, 웹 브라우저 내부에 데이터를 저장하고 싶으면 웹 스토리지 사용하면 된다.<br>
보안에 민감한 데이터는 저장하면 안 된다.

**쿠기 생명주기<br>**
Set-Cookie: expires=날짜 만료일에 삭제<br>
Set-Cookie: max-age=3600 0이나 음수되면 삭제<br>
세션 쿠키: 만료 날짜 생략 시 브라우저 종료시까지만 유지<br>
영속 쿠키: 만료 날짜 입력 시 해당 날짜까지만 유지

**쿠키 도메인<br>**

**1. 명시: 명시한 문서 기준 도메인 → 서브 도메인 포함<br>**
domain=example.org 지정해서 쿠키 생성<br>
example.org는 물론이고 dev.example.org도 쿠키 접근

**2. 생략: 현재 문서 기준 도메인만 적용<br>**
example.org에서 쿠키를 생성하고 domain 지정은 생략<br>
example.org에서만 쿠키 접근하고 dev.example.org는 쿠키 미접근

**쿠키 경로<br>**

예: path=/home<br>
이 경로를 포함한 하위 경로 페이지만 쿠키 접근<br>
일반적으로 path=/ 루트로 지정<br>
path=/home 지정시<br>
/home 가능<br>
/home/dev1 가능<br>
/hello 불가능

**쿠키 보안<br>**

**Secure<br>**
쿠키는 http, https 구분하지 않고 전송한다.<br>
secure 적용시 https인 경우에만 전송한다.

**HttpOnly<br>**
XSS 공격 방지<br>
자바스크립트에서 접근 불가<br>
HTTP 전송에만 사용한다.

**SameSite<br>**
XSRF 공격 방지<br>
요청 도메인과 쿠키에 설정된 도메인이 같은 경우만 쿠키 전송한다.

<h2><a id="8">:pencil2: Section 8. HTTP 헤더2: 캐시와 조건부 요청</a></h2>

**:pushpin: 캐시 기본 동작**

**캐시가 없을 때<br>**
데이터가 변경되지 않아도 계속 네트워크를 통해서 데이터를 다운로드 받아야 한다.

**캐시 적용<br>**
캐시 덕분에 캐시 가능 시간동안 네트워크를 사용하지 않아도 된다.

**캐시 시간 초과<br>**
캐시 유효 시간이 초과되면 서버를 통해 데이터를 다시 조회히고, 캐시를 갱신한다. 이 때, 다시 네트워크 다운로드가 발생한다.

**서버에서 기존 데이터 변경하지 않았을 때<br>**
로컬 캐시를 다시 쓰고싶음.<br>
따라서 데이터가 바뀌지 않았다는 것을 확인하고 싶다.

**:pushpin: 검증 헤더와 조건부 요청**

**검증 헤더<br>**
캐시 데이터와 서버 데이터가 같은지 검증하는 데이터<br>
Last-Modified, ETag

**조건부 요청 헤더<br>**
검증 헤더로 조건에 따른 분기<br>
If-Modified-Since: Last-Modified 사용<br>
If-None-Match: ETag 사용<br>
조건에 만족되면 200 ok<br>
만족되지 않으면 304 Not Modified

**:pushpin: Last-Modified, If-Modified-Since**

**예시<br>**
응답 Last-Modified: 2000년~<br>
요청 If-Modified-Since: 2000년~<br>
응답 304 Not Modified, body없이 헤더만 보낸다.<br>
클라이언트는 응답 헤더 정보로 캐시의 메타 정보 갱신 및 캐시에 저장된 데이터를 재활용한다.

**단점<br>**
1초 미만 단위로 캐시 조정이 불가능하다.<br>
날짜 기반의 로직을 사용한다.<br>
데이터를 수정해서 날짜가 다르지만, 실질적으로 변화가 없어 결과가 똑같은 경우<br>
서버에서 별도의 캐시 로직을 관리하고 싶은 경우<br>
예: 스페이스나 주석처럼 크게 영향이 없는 변경으로부터 캐시를 유지하고 싶은 경우

**:pushpin: ETag, If-None-Match**

**ETag(Entity Tag)<br>**
캐시용 데이터에 임의의 고유한 버전으로 이름을 달아둔다.<br>
예: ETag:"v1.0"<br>
데이터가 변경되면 이 이름을 바꾸어서 변경한다.<br>
예: ETag:"aaa" → ETag:"bbb"<br>
단순하게 ETag만 보내서 같으면 유지하고, 다르면 다시 받는다.

캐시 제어 로직을 서버에서 완전히 관리한다.<br>
클라이언트는 캐시 메커니즘을 알 필요 없이 단순히 이 값을 서버에 제공한다.<br>

**예시<br>**
서버는 베타 오픈 기간인 3일 동안 파일이 변경되어도 ETag 동일하게 유지<br>
애플리케이션 배포 주기에 맞춰 ETag 모두 갱신

**:pushpin: 캐시와 조건부 요청 헤더**

**캐시 제어 헤더**

**Cache-Control: max-age<br>**
캐시 유효 시간, 초 단위

**Cache-Control: no-cache<br>**
항상 origin 서버에 검증하고 사용

**Cache-Control: no-store<br>**
데이터에 민감한 정보가 있으므로 저장하면 안 됨
메모리에서 사용하고 최대한 빨리 삭제

**Cache-Control: must-revalidate<br>**
캐시 만료 후 최초 조치시 원 서버에 검증<br>
원 서버 접근 실패시 반드시 오류가 발생해야 함(504 Gateway Timeout)

**Pragm: no-cache<br>**
HTTP 1.0 하위 호환

**Expires<br>**
expires: Mon, 01 Jan 1990 00:00:00 GMT<br>
캐시 만료일을 정확한 날짜로 지정<br>
HTTP 1.0부터 사용<br>
지금은 더 유연한 Cache-Control: max-age 권장<br>
Cache-Control: max-age 사용시 Expires는 무시됨

**:pushpin: 프록시 캐시**
 
미국에 있는 원서버(public)에서 바로 다운로드를 받으면 오래 걸린다.<br>
따라서 프록시 캐시 서버(private)을 중간에 둔다.

**Cache-Control: Public<br>**
응답이 public 캐시에 저장되어도 됨

**Cache-Control: Private<br>**
응답이 해당 사용자만을 위한 것임<br>
private 캐시에 저장(기본값)

**캐시 무효화<br>**
Cache-Control: no-cache, no-store, must-revalidate<br>
Pragma: no-cache<br>
확실하게 캐시를 무효화시키기 위해서는 4가지를 모두 적용해야 한다.
