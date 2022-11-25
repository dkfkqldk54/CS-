float compute_GPA(char grade[], int n)
{
  float sum = 0;
  char alphabet;

  for (int i=0; i<n; i++) {
    alphabet = toupper(a[i]);
    switch(alphabet) {
      case 'A':
        sum += 4;
        break;
      case 'B':
        sum += 3;
        break;
      case 'C':
        sum += 2;
        break;
      case 'D':
        sum += 1;
        break;
    }
  }
  return sum/n;
}
