#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long a, b, k;
        if (scanf("%lld %lld %lld", &a, &b, &k) != 3) break;
        
        long long right_jumps = (k + 1) / 2;
        long long left_jumps = k / 2;
        
        long long position = (right_jumps * a) - (left_jumps * b);
        printf("%lld\n", position);
    }
    
    return 0;
}
