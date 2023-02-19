<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

(b) char 타입에 str 타입이 들어갔음.<br>
(c) str 타입에 char 타입이 들어갔음.<br>
(e) printf는 str 타입을 기대하고 있기 때문에.<br>
(h) putchar는 char 타입을 기대하고 있음.<br>
(i) puts는 str 타입을 기대하고 있음.<br>
(j) 2개의 new line character가 출력되기 때문임.<br>

**:pushpin: 2번**

(a) char 타입이 아니라 pointer가 들어와서 illegal.<br>
(b) a<br>
(c) abc<br>
(d) str이 아니라 char가 들어와서 illegal.<br>

**:pushpin: 3번**

12, abc34, 56

**:pushpin: 4번**

<pre>
int read_line(char str[], int n)
{
  int ch, i = 0;
  
  while (isspace(getchar()));
  
  while (i < n && (ch = getchar()) != '\n' && !isspace(ch))
    if (i == 0 && isspace(ch));
    else str[i++] = ch;
  if (ch == '\n' && i < n-1) str[i++] = '\n';
  str[i] = '\0';
  
  return i;
}
</pre>

**:pushpin: 5번**

(a)<br>
<pre>
void capitalize(char letters[])
{
  int i = 0;

  while (letters[i] != '\0')
    if (isalpha(letters[i]))
      letters[i] = toupper(letters[i]);
    i++;
}
</pre>

(b)<br>
<pre>
void capitalize(char *str) {
  while (*str) {
    if (isalpha(*str)) {
      *str = toupper(*str);
    }
    str++;
  }
}
</pre>

**:pushpin: 6번**

void censor(char *str) {
  char *p = str;
  while (*(p+2)!='\0') {
    if (*p == 'f' && *(p+1) == 'o' && *(p+1) == 'o')  {
      *p = *(p+1) = *(p+2) = 'x';
    }
    p++;
  }
}

**:pushpin: 7번**

(d) strcat(str, "");은 str에 ""을 추가하는 것으로 (a), (b), (c)와 다르다.

**:pushpin: 8번**

tired-or-wired?

**:pushpin: 9번**

computers

**:pushpin: 10번**

함수 내부에서 선언된 포인터라서 함수 밖에서는 사용할 수가 없음.

**:pushpin: 11번**

<pre>
int strcmp(char *s, char *t)
{
  while (*s == *t)
    if (*s == '\0')  return 0;
    s++; t++;
  return *s - *t;
}
</pre>

**:pushpin: 12번**

<pre>
void get_extension(const char *file_name, char *extension)
{
  while (*file_name){
    if (*file_name++ == '.') {
      strcpy(extension, file_name);
      return;
    }
  }
}
</pre>

**:pushpin: 13번**

<pre>
void build_index_url(const char *domain, char *index_url)
{
  strcpy(index_url, "http://www.");
  strcat(index_url, domain);
  strcpy(index_url, "/index.html");
}
</pre>

**:pushpin: 14번**

Grinch

**:pushpin: 15번**

(a)3<br>
(b)0<br>
(c)1번째 arguement에 있는 원소 중 2번째 argument에 없는 원소가 없는 첫 번째 경우의 index<br>

**:pushpin: 16번**

<pre>
int count_spaces(const char *s)
{
  int count = 0;

  while (*s) if (*s++ == ' ') count++;

  return count;
}
</pre>

**:pushpin: 17번**

bool test_extension(const char *file_name, const char *extension)
{
  while(*file_name++ != '.');

  while (*file_name && *extension)
    if (toupper(*file_name++) != toupper(*extension++))
    return false;
  return true;
}

**:pushpin: 18번**

