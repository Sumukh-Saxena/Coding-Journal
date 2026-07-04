void sortColors(int* nums, int numsSize) {
    int count0 = 0, count1 = 0, count2 = 0;
    
    // Step 1: Count them
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) count0++;
        else if (nums[i] == 1) count1++;
        else count2++;
    }
    
    // Step 2: Overwrite the array
    int i = 0;
    while (count0 > 0) { nums[i++] = 0; count0--; }
    while (count1 > 0) { nums[i++] = 1; count1--; }
    while (count2 > 0) { nums[i++] = 2; count2--; }
}