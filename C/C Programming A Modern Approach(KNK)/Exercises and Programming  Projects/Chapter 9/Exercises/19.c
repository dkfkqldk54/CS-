void pb(int n)
{
  if (n != 0) {
    pb(n / 2);
    putchar('0' + n % 2);
    printf("\n");
  }
}

/* 수를 이진수로 표현해줌 */
