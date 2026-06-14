#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b, c, x, y;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &x, &y);

        if(x <= a && y <= b) { //in the case there is sufficient specific packs for both breeds
            printf("YES\n");
        } else if(x < a && y > b) { //taking the case where cats need more food than available
            long long needed = y - b;
            if(c >= needed) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if(x > a && y < b) { //taking the case where dogs need more food than available
            long long needed = x - a;
            if(c >= needed) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else { //final case, not enough specific packs for both breeds
            long long needed_x = x - a;
            long long needed_y = y - b;
            long long total_needed = needed_x + needed_y;
            if(c >= total_needed) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
