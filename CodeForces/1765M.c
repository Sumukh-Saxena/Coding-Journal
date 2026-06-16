#include <stdio.h>


void function(long long num) { // Changed to void since we just print
    for (long long i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            long long a = num/i; //finding the smallest factor to find the greatest GCD which outputs the least LCM for these 2 numbers
            long long b = num - a;
            printf("%lld %lld\n", a, b);
            return; // Just exit the void function
        }
    }
    // Print 1 first to match the sample output exactly
    printf("%lld %lld\n", 1LL, num - 1); 
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        function(n);
    }
    return 0;
}
