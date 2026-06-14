#include <stdio.h>

long long get_digit_sum(long long n) { //function to find the sum of digits
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long gcd(long long a, long long b) { //finding gcd of two numbers
    while (b) {
        a %= b;
        long long tmp = a;
        a = b;
        b = tmp;
    }
    return a;
}

long long gcdSum(long long x) {
    return gcd(x, get_digit_sum(x)); //gcd sum of any number
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long n;
        if (scanf("%lld", &n) != 1) break;
        
        while (gcdSum(n) == 1) { //keep increasing n until gcd > 1 is achieved
            n++;
        }
        printf("%lld\n", n);
    }
    
    return 0;
}
