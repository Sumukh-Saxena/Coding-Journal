class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> freq(128, 0); // To cover all standard ASCII characters
        int left = 0;
        int max_len = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            // Add the current character to the window
            freq[s[right]]++;
            
            // If the frequency exceeds 2, shrink the window from the left
            while (freq[s[right]] > 2) {
                freq[s[left]]--;
                left++;
            }
            
            // Update the maximum length found so far
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};