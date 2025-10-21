// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000

int       N, i;
long long S[MAXN];
long long Q[4];
bool      ans = false;


int compare(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}


int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    
    for (i = 0; i < N; ++i)
        assert(1 == scanf("%lld", &S[i]));
    
    
    qsort(S, N, sizeof(long long), compare);
    
    for (int k=0; k<=N-4; k++) {
    if (S[k] + S[k+1] + S[k+2] > S[k+3]) {
            ans = true;
            Q[0] = S[k]; Q[1] = S[k+1]; Q[2] = S[k+2]; Q[3] = S[k+3];
            break;
        }
    } 
    
    
    if (ans) {
        for (i = 0; i < 4; ++i)
            printf("%lld ", Q[i]);
        printf("\n");
    } else {
        printf("-1\n");}

    return 0;
}
