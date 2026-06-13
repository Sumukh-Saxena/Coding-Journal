#include <stdio.h>

long long get_prefix_sum(long long n) { //finding the prefix sum to get sum upto a bound of l or r
    if (n == 0) return 0;
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -(n + 1) / 2;
    }
}

int main() {
    int q;
    if (scanf("%d", &q) != 1) return 0;
    
    while (q--) {
        long long l, r;
        if (scanf("%lld %lld", &l, &r) != 2) break;
        
        long long ans = get_prefix_sum(r) - get_prefix_sum(l - 1);
        printf("%lld\n", ans);
    }
    
    return 0;
}
