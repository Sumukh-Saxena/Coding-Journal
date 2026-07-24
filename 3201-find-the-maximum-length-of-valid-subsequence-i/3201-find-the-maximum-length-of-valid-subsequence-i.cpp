#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int count_even = 0;
        int count_odd = 0;
        int alt_len = 0;
        int last = -1; 
        
        for (int x : nums) {
            int p = x % 2;
            if (p == 0) {
                count_even++;
            } else {
                count_odd++;
            }
            
            if (p != last) {
                alt_len++;
                last = p;
            }
        }
        
        return max({count_even, count_odd, alt_len});
    }
};