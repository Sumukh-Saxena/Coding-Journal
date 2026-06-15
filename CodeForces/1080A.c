#include <stdio.h>
#include <math.h>

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    
    double red   = ceil(2.0 * n / k);
    double green = ceil(5.0 * n / k);
    double blue  = ceil(8.0 * n / k);
    
    // Cast to long long since the result is guaranteed to be an integer
    printf("%lld\n", (long long)red + (long long)green + (long long)blue);
    
    return 0;
}
