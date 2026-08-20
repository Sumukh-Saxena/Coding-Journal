class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int cnt[501] = {0};          // nums[i] is in range [1, 500]
        
        for (int x : nums) {
            ++cnt[x];
        }
        
        for (int i = 1; i <= 500; ++i) {
            if (cnt[i] % 2 != 0) {
                return false;
            }
        }
        
        return true;
    }
};