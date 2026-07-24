#include <string>

using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        long long steps = 0;
        int target_idx = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0') {
                steps += (i - target_idx);
                target_idx++;
            }
        }
        
        return steps;
    }
};