#include <stdio.h>

long long min_ll(long long a, long long b) {
    return (a < b) ? a : b;
}

void solve() {
    long long CG, CP;
    int N;
    
    if (scanf("%lld %lld", &CG, &CP) != 2) return;
    if (scanf("%d", &N) != 1) return;

    long long count_P1 = 0;
    long long count_P2 = 0;

    for (int i = 0; i < N; ++i) {
        int status_P1, status_P2;
        
        if (scanf("%d %d", &status_P1, &status_P2) != 2) return;

        count_P1 += status_P1;
        count_P2 += status_P2;
    }

    long long cost1 = (count_P1 * CG) + (count_P2 * CP);
    long long cost2 = (count_P1 * CP) + (count_P2 * CG);

    printf("%lld\n", min_ll(cost1, cost2));
}

int main() {
    int T;
    
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        solve();
    }

    return 0;
}
