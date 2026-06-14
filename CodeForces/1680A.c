#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int l1, l2, r1, r2;
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

        if(l1 <= r2 && l2 <= r1) {  //condition for overlap of the two ranges
            int overlap = MAX(l1, l2);
            printf("%d\n", overlap);
        } else {
            printf("%d\n", l1 + l2); //in case of no overlap
        }
    }
    return 0;
}
