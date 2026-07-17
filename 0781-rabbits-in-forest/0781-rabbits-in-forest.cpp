class Solution {
public:
    int numRabbits(vector<int>& answers) {
        // Count the frequency of each answer
        int cnt[1001] = {0};
        for (int x : answers) {
            cnt[x]++;
        }
        
        int total_rabbits = 0;
        
        for (int x = 0; x <= 1000; ++x) {
            if (cnt[x] > 0) {
                int group_size = x + 1;
                
                // Calculate the minimum number of groups needed: ceil(cnt[x] / group_size)
                int num_groups = (cnt[x] + group_size - 1) / group_size;
                
                // Add the total rabbits these groups represent
                total_rabbits += num_groups * group_size;
            }
        }
        
        return total_rabbits;
    }
};