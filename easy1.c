#include <stdio.h>
#define FILE_IN "input.txt"
#define FILE_OUT "output.txt"


int main(void) {
   FILE *fd_in = fopen(FILE_IN, "r");
   FILE *fd_out = fopen(FILE_OUT, "wa");

   unsigned short n;
   short s;
   short max = -1000;

   fscanf(fd_in, "%hu", &n);
	
   unsigned short i = 0;
   while (i<n) {
      fscanf(fd_in, "%hd", &s);
      if (s > max) max = s; 
      i++;
   }
   
   fclose(fd_in);
   fprintf(fd_out, "%hd", max);
   fclose(fd_out);
   return 0;	
}
