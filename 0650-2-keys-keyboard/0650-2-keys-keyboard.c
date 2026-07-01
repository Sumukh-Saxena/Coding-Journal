int minSteps(int n) {
    if (n == 1) return 0;
    
    int operations = 0;
    int d = 2;
    
    while (n > 1) {
        // While n is divisible by d, extract the factor d
        while (n % d == 0) {
            operations += d; // 1 Copy All + (d - 1) Pastes
            n /= d;
        }
        d++;
    }
    
    return operations;
}