void selection_sort(int a[], int n)
{
  if (n==0) return;
  int largest_index = 0, tmp;

  for (int i = 0; i < n; i++) {
    if (a[i] > a[largest_index]) {
      largest_index = i;
    }
  }
  tmp = a[largest_index];
  a[largest_index] = a[n-1];
  a[n-1] = tmp;
  return selection_sort(a, n-1);
}
