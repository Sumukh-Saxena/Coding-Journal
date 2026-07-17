#include <vector>

class Solution {
public:
    int minimumCost(std::vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;
        
        long long res = k; 
        long long cost = 0;
        long long next_op = 1; 
        
        for (int num : nums) {
            if (res < (long long)num) {
                long long needed = (long long)num - res;
                long long m = (needed + k - 1) / k; // Ceiling division
                
                long long term1 = (m % MOD) * (next_op % MOD) % MOD;
                
                long long term2;
                if (m % 2 == 0) {
                    term2 = ((m / 2) % MOD) * ((m - 1) % MOD) % MOD;
                } else {
                    term2 = (m % MOD) * (((m - 1) / 2) % MOD) % MOD;
                }
                
                cost = (cost + term1 + term2) % MOD;
                
                next_op = (next_op + m) % MOD;
                
                res += m * k;
            }
            res -= num;
        }
        
        return static_cast<int>(cost);
    }
};