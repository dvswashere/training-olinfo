#include <stdio.h>
#define FILE_IN stdin 
#define FILE_OUT stdout


int trova_massimo(int N, int V[]) {
   int max = -1000;
   for (int i = 0; i < N; i++) {
      if (V[i] > max) max = V[i];
   }
   return max;
}
