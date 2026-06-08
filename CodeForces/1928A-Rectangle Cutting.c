#include <stdio.h>
#define min(a, b) ((a < b) ? a : b)
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        
        long long minab = min(a, b);
        long long maxab = a+b-min(a, b);
        
        //Number 1 condition is if both sides are odd
        if((a % 2 != 0) && (b % 2 != 0)) printf("NO\n");  //you will observe that only when both sides are odd, it can't be cut in half automatically
        else if((minab % 2 != 0) && (maxab % minab == 0) && (maxab == minab*2)) printf("NO\n");
        //and in this case, there is no iff the minimum of the pair is odd and the maximum is exactly double of it, not an even multiple, as greater than
        // 2 will also allow cutting
        else printf("YES\n");
    }
    return 0;
}
