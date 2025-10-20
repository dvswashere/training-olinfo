#include <stdio.h>
#include <assert.h>

int compra(int N, int M, int A, int B) {
    int carnet = N/M*B;

    if (M>=N) {
        if (B<=N*A) return B;
	return N*A;
    }
    
    if (B<=A) return N%M==0 ? carnet : carnet + B; 
    if (M*A <= B) return N*A;
    return carnet < (N%M)*A ? carnet + B : carnet + (N%M)*A;
}

int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
