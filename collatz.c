#include <stdio.h>

int main(void) {
  unsigned int n;

  FILE *fd_in = fopen("input.txt", "r");

  int a = fscanf(fd_in, "%d", &n);
  fclose(fd_in);
  
  unsigned int i=0;
  while(1) {
    i++;
    if (n==1) break;
    if (n%2==0) n/=2;
    else n=3*n+1;
  }


  FILE *fd_out= fopen("output.txt", "w");

  fprintf(fd_out, "%d", i);
  fclose(fd_out);
  return 0;
}
