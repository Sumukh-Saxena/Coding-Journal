class Solution {
public:
    int missingInteger(vector<int>& nums) {
        // Step 1: Find the sum of the longest sequential prefix
        long long sum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }
        
        // Step 2: Insert all elements into a hash set for O(1) lookups
        unordered_set<int> s(nums.begin(), nums.end());
        
        // Step 3: Find the smallest missing integer >= sum
        long long x = sum;
        while (s.count(x)) {
            x++;
        }
        
        return x;
    }
};