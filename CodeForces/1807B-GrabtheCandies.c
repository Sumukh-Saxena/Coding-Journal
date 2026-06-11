#include <stdio.h>
//the logic is simple, if there are more even bags than odd, then we can place them all together at the start and the condition would be satisified
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long long even_sum = 0, odd_sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x % 2 == 0) even_sum += x;
            else odd_sum += x;
        }
        printf("%s\n", even_sum > odd_sum ? "YES" : "NO");
    }
    return 0;
}
