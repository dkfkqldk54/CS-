<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

a[0]으로 명시할 경우 a의 원소 타입이 어떤 것이든지 다 적용이 되지만, t를 쓸 경우 a의 타입이 바뀌면 그에 따라 t의 타입을 바꿔줘야 함.<br>

**:pushpin: 2번**

letter_count[ch-'0'] = 0;

**:pushpin: 3번**

bool weekend[7] = {true, false, false, false, false, false, true};

**:pushpin: 4번**

bool weekend[7] = { [0] = true, [6] = true };

**:pushpin: 5번**

<pre>
int i;
long long fib_numbers[40] = {0, 1};

for (i = 2; i < 40; i++) {
  fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
}
</pre>

**:pushpin: 6번**

<pre>
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
</pre>

**:pushpin: 7번**

<pre>
const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                             {0, 1, 1},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
</pre>

**:pushpin: 8번**

double temperature_readings[30][24] = {0};

**:pushpin: 9번**

<pre>
#define DAYS 30
#define HOURS 24

int i, j;
double sum, res;

for (i = 0; i < 30; i++) {
  for (j = 0; j < 24; j++) {
    sum += temperature_readings[i][j];
  }
}

res = (sum/30)/24;
</pre>

**:pushpin: 10번**

<pre>
char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                          {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                          {0, '.', 0, '.', 0, '.', 0, '.'},
                          {'.', 0, '.', 0, '.', 0, '.'},
                          {0, '.', 0, '.', 0, '.', 0, '.'},
                          {'.', 0, '.', 0, '.', 0, '.'},
                          {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                          {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
</pre>

**:pushpin: 11번**

<pre>
char checker_board[8][8];
int i, j;

for (i = 0; i < 8; i++) {
  for (j = 0; j < 8; j++) {
    checker_board[i][j] = (i+j)%2 == 0 ? 'B' : 'R';
  }
}
</pre>
