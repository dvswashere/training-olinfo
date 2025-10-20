#include <stdio.h>

int main() {
  unsigned short n;
  unsigned short a, b;
  short max = -1;

  fscanf(stdin, "%hu", &n);

  for (int i=0; i<n; i++) {
    fscanf(stdin, "%hu %hu", &a, &b);
    if ((a+b)%2==0 && a+b>max) max = a+b;
  }
  
  fprintf(stdout, "%hd", max);

  return 0;
}
