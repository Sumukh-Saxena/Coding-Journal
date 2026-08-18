class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        
        if (n == k) {
            return *max_element(nums.begin(), nums.end());
        }
        
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        
        if (k == 1) {
            int ans = INT_MIN;
            for (auto& p : freq) {
                if (p.second == 1) {
                    ans = max(ans, p.first);
                }
            }
            return ans == INT_MIN ? -1 : ans;
        }
        
        int ans = INT_MIN;
        for (int i = 0; i < n; ++i) {
            if (freq[nums[i]] == 1) {
                if (i == 0 || i == n - 1) {
                    ans = max(ans, nums[i]);
                }
            }
        }
        
        return ans == INT_MIN ? -1 : ans;
    }
};