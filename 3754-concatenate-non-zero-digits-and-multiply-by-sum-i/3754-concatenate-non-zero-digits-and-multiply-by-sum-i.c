// Return type MUST be long long to prevent overflow
long long sumAndMultiply(int n) {
    char str[12]; // Max 10 digits for a 32-bit int + null terminator
    sprintf(str, "%d", n);
    
    char x_str[12];
    int x_idx = 0;
    long long sum = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0') {
            x_str[x_idx++] = str[i];
            sum += (str[i] - '0');
        }
    }
    x_str[x_idx] = '\0'; // Null-terminate the new string
    
    // atoll converts string to long long
    long long x = (x_idx == 0) ? 0 : atoll(x_str);
    
    return x * sum;
}