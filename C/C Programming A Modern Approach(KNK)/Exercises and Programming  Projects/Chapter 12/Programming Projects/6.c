#include <stdio.h>

#define N 10

void quicksort(int a[], int *lp, int *hp);
int *split(int a[], int *lp, int *hp);

int main(void)
{
  int a[N], i;

  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  quicksort(a, a, a + N-1);

  printf("In sorted order: ");
  for (i = 0; i < N; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}

void quicksort(int a[], int *lp, int *hp)
{
  int *middle;

  if (lp >= hp) return;
  middle = split(a, lp, hp);
  quicksort(a, lp, middle-1);
  quicksort(a, middle + 1, hp);
}

int *split(int a[], int *lp, int *hp)
{
  int part_element = *lp;

  for(;;) {
    while (lp < hp && part_element <= *hp)
      hp--;
    if (lp >= hp) break;
    *lp++ = *hp;

    while (lp < hp && *lp <= part_element)
      lp++;
    if (lp >= hp) break;
    *hp-- = *lp;
  }

  *hp = part_element;
  return hp;
}
