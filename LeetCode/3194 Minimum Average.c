int compare(const void *a, const void *b) {
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

double minimumAverage(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare); //sort eh array for easier parsing
    
    double min_avg = 1e9;  
    
    for (int i = 0; i < numsSize / 2; i++) {
        double avg = (nums[i] + nums[numsSize - 1 - i]) / 2.0;
        if (avg < min_avg) {
            min_avg = avg;
        }
    }
    return min_avg;
}
