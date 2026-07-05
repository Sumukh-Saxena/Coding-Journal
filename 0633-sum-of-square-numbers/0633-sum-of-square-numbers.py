import math

class Solution(object):
    def judgeSquareSum(self, c):
        a = 0
        b = int(math.sqrt(c))
        
        while b * b > c:
            b -= 1
            
        while a <= b:
            current_sum = a*a + b*b
            if current_sum == c: 
                return True
            if current_sum < c: 
                a += 1
            else: 
                b -= 1
                
        return False