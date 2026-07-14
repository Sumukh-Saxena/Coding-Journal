class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // STEP 1: Handle the massive k edge case
        k = k % n;
        if (k == 0) return; // If k becomes 0, no rotation needed
        
        // STEP 2: Reverse the whole array
        reverse(nums.begin(), nums.end());
        
        // STEP 3: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // STEP 4: Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};