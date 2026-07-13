class Solution:
    def countNumbersWithUniqueDigits(self, n):
        if n == 0:
            return 1
        
        # Base case for 1-digit numbers
        total_count = 10
        current_product = 9
        
        # Calculate for 2-digit up to n-digit numbers (max 10 digits)
        for k in range(2, min(n, 10) + 1):
            # The next digit has one less choice available
            current_product *= (11 - k)
            total_count += current_product
            
        return total_count