#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int da = abs(a);
        int db = abs(b);
        int ans = max(da + db, 2 * max(da, db) - 1); //if |x| = |y|, then a simple staircase approach is enough which required da + db seconds
        printf("%d\n", ans);
    } //when they are not equal, in that case, there must be skipping of steps in between to not violate the rules.
    return 0;
}
