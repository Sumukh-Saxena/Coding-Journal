class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0;
        int max2 = 0;
        
        for (int num : nums) {
            if (num >= max1) {
                // New maximum found, shift the old max1 to max2
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                // Not a new maximum, but larger than the second maximum
                max2 = num;
            }
        }
        
        return (max1 - 1) * (max2 - 1);
    }
};