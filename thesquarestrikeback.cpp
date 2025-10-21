#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    map<long long, long long> cnt;
    
    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        long long d = x - y;
        cnt[d]++;
    }
    
    long long result = 0;
    for (auto &p : cnt) {
        long long k = p.second;
        result += k * (k - 1) / 2;
    }
    
    cout << result << '\n';
    return 0;
}