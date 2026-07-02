/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// Safe comparison function to prevent integer overflow
int compare(const void *a, const void *b) {
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

// Helper function to find the leftmost (first) target
int findFirst(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;       // Record the position
            high = mid - 1;  // But keep searching left for an earlier one
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Helper function to find the rightmost (last) target
int findLast(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;       // Record the position
            low = mid + 1;   // But keep searching right for a later one
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = (int *)malloc(2 * sizeof(int));
    *returnSize = 2;

    // Initialize to -1 to handle the "not found" case properly
    ans[0] = -1;
    ans[1] = -1;

    ans[0] = findFirst(nums, numsSize, target);
    
    // Minor optimization: if the first isn't found, the last won't be either
    if (ans[0] != -1) {
        ans[1] = findLast(nums, numsSize, target);
    }

    return ans;
}