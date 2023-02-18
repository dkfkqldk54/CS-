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

**:pushpin: 10번**

**:pushpin: 11번**

**:pushpin: 12번**

**:pushpin: 13번**

**:pushpin: 14번**

**:pushpin: 15번**

**:pushpin: 16번**

**:pushpin: 17번**

**:pushpin: 18번**

