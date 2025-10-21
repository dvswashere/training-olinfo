#include <stdio.h>
#include <assert.h>

double scosse(long long N) {
    return N*(N-1)/4.0;
}


int main() {
    FILE *fr, *fw;
    long long N;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%lld", &N));
    fprintf(fw, "%.6f\n", scosse(N));
    fclose(fr);
    fclose(fw);
    return 0;
}
