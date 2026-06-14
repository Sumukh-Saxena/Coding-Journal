#include <stdio.h>
int main()
{
    int n, k, w; //n is money soldier has, k is initial cost of first banana, w is no. of bananas
    scanf("%d %d %d", &k, &n, &w);
    
    int req = k*w*(w+1)/2;
    if((n > req) || (n == req)) printf("%d", 0);
    else printf("%d", req - n);
    return 0;
}
