class Solution(object):
    def searchMatrix(self, matrix, target):
        m = len(matrix)
        n = len(matrix[0])
        
        left = 0
        right = m * n - 1
        
        while left <= right:
            mid = (left + right) // 2
            
            # YOUR LOGIC HERE:
            row = mid // n  
            col = mid % n   
            
            mid_val = matrix[row][col]
            
            if mid_val == target:
                return True
            elif mid_val < target:
                left = mid + 1
            else:
                right = mid - 1
                
        return False