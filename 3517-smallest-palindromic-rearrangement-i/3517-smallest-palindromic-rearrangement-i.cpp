class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        string first_half = "";
        string mid = "";
        
        for (int i = 0; i < 26; ++i) {
            if (freq[i] > 0) {
                // Append half of the character's occurrences to the first half
                first_half += string(freq[i] / 2, 'a' + i);
                // If there's an odd frequency, this character must be the middle
                if (freq[i] % 2 == 1) {
                    mid = 'a' + i;
                }
            }
        }

        string second_half = first_half;
        reverse(second_half.begin(), second_half.end());
        
        return first_half + mid + second_half;
        
    }
};