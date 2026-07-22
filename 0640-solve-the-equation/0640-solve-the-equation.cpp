#include <string>

using namespace std;

class Solution {
public:
    string solveEquation(string equation) {
        int coeff = 0, const_val = 0, sign = 1, i = 0, n = equation.size();
        
        while (i < n) {
            int cur_sign = sign;
            if (equation[i] == '+') { i++; }
            else if (equation[i] == '-') { cur_sign = -sign; i++; }
            else if (equation[i] == '=') { sign = -1; i++; continue; }
            
            int num = 0;
            bool has_num = false;
            while (i < n && isdigit(equation[i])) {
                num = num * 10 + (equation[i] - '0');
                i++;
                has_num = true;
            }
            
            if (i < n && equation[i] == 'x') {
                coeff += cur_sign * (has_num ? num : 1);
                i++;
            } else {
                const_val += cur_sign * num;
            }
        }
        
        if (coeff == 0) {
            return const_val == 0 ? "Infinite solutions" : "No solution";
        }
        return "x=" + to_string(-const_val / coeff);
    }
};