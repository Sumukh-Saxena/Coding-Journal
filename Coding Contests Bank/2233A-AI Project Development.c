#include <stdio.h>

int ceil_div(int a, int b) {
    return (a + b - 1) / b;  // ceiling division for positive integers
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x, y, z;
        scanf("%d %d %d %d", &n, &x, &y, &z);
        
        int noAI = ceil_div(n, x + y); //time required if the no AI path is chosen
        
        int AI;
        if (z * x >= n) { //checking if the task has been completed by the time the AI was set up
            AI = ceil_div(n, x);
        } else { //if the AI was set up before completion, then n-z*x lines of code remain, and it's a simple ceil and division 
            int remaining = n - z * x;
            AI = z + ceil_div(remaining, x + 10 * y);
        }
        
        printf("%d\n", noAI < AI ? noAI : AI); //ternary op for checking minimum
    }
    return 0;
}
