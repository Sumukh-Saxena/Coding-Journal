#include <stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);
    
    if (x == y) {
        printf("=\n");
        return 0;
    }
    
    // 2^4 = 4^2 = 16
    if ((x == 2 && y == 4) || (x == 4 && y == 2)) {
        printf("=\n");
        return 0;
    }
    
    int swapped = 0;
    if (x > y) {
        long long t = x; x = y; y = t;
        swapped = 1;
    }
    
    // Now x < y
    char ans;
    if (x == 1) {
        ans = '<';              // 1^y < y^1
    } else if (x == 2 && y == 3) {
        ans = '<';              // 2^3 = 8 < 9 = 3^2
    } else {
        ans = '>';              // smaller base dominates
    }
    
    if (swapped) {
        ans = (ans == '<') ? '>' : '<';
    }
    
    printf("%c\n", ans);
    return 0;
}
