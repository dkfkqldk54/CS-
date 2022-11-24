int largest(int a[], int n)
{
  int largest_in_array = -32768;
  for(int i=0; i<n; i++) {
    if (largest_in_array < a[i]) 
      largest_in_array = a[i];
  }
  return largest_in_array;
}

float average(int a[], int n)
{
  float average_of_array = 0.0f;

  for (int i=0; i<n; i++) {
    average_of_array += a[i];
  }

  average_of_array /= n;

  return average_of_array;
}

int positive(int a[], int n)
{
  int positive = 0;
  for (int i=0; i<n; i++) {
    if (a[i] > 0) positive += 1;
  }
  return positive;
}
