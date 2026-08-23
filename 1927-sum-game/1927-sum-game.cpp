class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int half = n / 2;
        
        long long sumL = 0, sumR = 0;
        int qL = 0, qR = 0;
        
        for (int i = 0; i < half; ++i) {
            if (num[i] == '?') ++qL;
            else sumL += num[i] - '0';
        }
        for (int i = half; i < n; ++i) {
            if (num[i] == '?') ++qR;
            else sumR += num[i] - '0';
        }
        
        // Bob can force equality ⇔ 2*(sumL - sumR) == 9*(qR - qL)
        return 2 * (sumL - sumR) != 9LL * (qR - qL);
    }
};