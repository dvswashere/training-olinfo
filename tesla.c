#include <stdio.h>

int main() {
    int n;

    FILE *fd_in = fopen("input.txt", "r");
    fscanf(fd_in, "%d", &n);


    int stations[n];
    int path_start = 0;
    
    for (int i = 0; i < n; i++) {
        fscanf(fd_in, "%d", &stations[i]);
    }

    fclose(fd_in);

    for (int i = 0; i < n-1; i++) {
        int residual = 0;
        for (int j = i+1; j%n < n; j++) {
            if (i == j%n) {
                if (residual + stations[j%n] >= 10) {
                    path_start = i+1;
                    goto printer;
                }
                break;
            }
            if (residual + stations[j%n] < 10) break;
            residual = residual + stations[j%n] - 10;
        }
    }

printer:
    FILE *fd_out = fopen("output.txt", "w");
    fprintf(fd_out, "%d", path_start+1);
    fclose(fd_out);

    return 0;
}