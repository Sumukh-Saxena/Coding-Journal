int singleNonDuplicate(int* nums, int numsSize) {
    int left = 0, right = numsSize - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Determine the partner index
        int partner;
        if (mid % 2 == 0) {
            partner = mid + 1;
        } else {
            partner = mid - 1;
        }
        
        // Check the pattern
        if (nums[mid] == nums[partner]) {
            left = mid + 1; // Pattern intact, single is on the right
        } else {
            right = mid;    // Pattern broken, single is here or left
        }
    }
    return nums[left];
}