class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        
        for (int x : nums) {
            // Handle 0 explicitly since the while loop below won't execute for 0
            if (x == 0) {
                if (digit == 0) ans++;
                continue;
            }
            
            // Use long long to safely handle the absolute value of INT_MIN (-2147483648)
            long long abs_x = std::abs(static_cast<long long>(x));
            
            while (abs_x > 0) {
                if (abs_x % 10 == digit) {
                    ans++;
                }
                abs_x /= 10;
            }
        }
        
        return ans;
    }
};