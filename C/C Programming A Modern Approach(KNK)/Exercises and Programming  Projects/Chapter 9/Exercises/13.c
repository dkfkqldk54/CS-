int evaluate_position(char board[8][8])
{
  int sum = 0;
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      switch(a[i][j]) {
        case 'Q':
          sum += 9;
          break;
        case 'R':
          sum += 5;
          break;
        case 'B':
          sum += 3;
          break;
        case 'N':
          sum += 3;
          break;
        case 'P':
          sum += 1;
          break;
        case 'q':
          sum -= 9;
          break;
        case 'r':
          sum -= 5;
          break;
        case 'b':
          sum -= 3;
          break;
        case 'n':
          sum -= 3;
          break;
        case 'p':
          sum -= 1;
          break;
      }
    }
  }
  return sum;
}
