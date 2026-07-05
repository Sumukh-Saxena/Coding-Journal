int sumOfSquares(int* nums, int numsSize) {
    int sum = 0;
    // Change loop to standard 0-based indexing
    for(int i = 0; i < numsSize; i++){
        // Check if the 1-based position (i + 1) divides numsSize
        if(numsSize % (i + 1) == 0) {
            sum += nums[i] * nums[i];
        }
    }
    return sum;
}