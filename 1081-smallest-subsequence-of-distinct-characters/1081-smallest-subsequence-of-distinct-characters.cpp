class Solution {
public:
    string smallestSubsequence(string s) {
        string result;
        int count[26] = {0};
        for(char c : s){
            count[c - 'a']++;
        }

        bool check[26] = {false};

        for(char curr : s){
            count[curr - 'a']--;

            if(check[curr-'a']) {
                continue;
            }
            while (!result.empty() && result.back() > curr && count[result.back()-'a'] > 0) {
                check[result.back()-'a'] = false;
                result.pop_back();
            }
            
            result.push_back(curr);
            check[curr - 'a'] = true;
        }

        return result;
    }
};