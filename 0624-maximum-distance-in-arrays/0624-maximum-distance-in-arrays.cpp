#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maxDistance(vector<std::vector<int>>& arrays) {
        long long min1_val = LLONG_MAX, min2_val = LLONG_MAX;
        int min1_idx = -1;
        
        long long max1_val = LLONG_MIN, max2_val = LLONG_MIN;
        int max1_idx = -1;
        
        for (int i = 0; i < arrays.size(); ++i) {
            long long curr_min = arrays[i][0];
            long long curr_max = arrays[i].back();
            
            if (curr_min < min1_val) {
                min2_val = min1_val;
                min1_val = curr_min;
                min1_idx = i;
            } else if (curr_min < min2_val) {
                min2_val = curr_min;
            }
            
            if (curr_max > max1_val) {
                max2_val = max1_val;
                max1_val = curr_max;
                max1_idx = i;
            } else if (curr_max > max2_val) {
                max2_val = curr_max;
            }
        }
        
        if (min1_idx != max1_idx) {
            return max1_val - min1_val;
        } 
        else {
            return max(max1_val - min2_val, max2_val - min1_val);
        }
    }
};