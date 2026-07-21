#include <vector>

using namespace std;

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        // If tomatoSlices is odd, we can't evenly divide by 2 to get integer burgers
        if (tomatoSlices % 2 != 0) {
            return {};
        }
        
        // Calculate the number of Jumbo and Small burgers using the derived formulas
        int jumbo = tomatoSlices / 2 - cheeseSlices;
        int small = 2 * cheeseSlices - tomatoSlices / 2;
        
        // Both quantities must be non-negative
        if (jumbo >= 0 && small >= 0) {
            return {jumbo, small};
        }
        
        return {};
    }
};