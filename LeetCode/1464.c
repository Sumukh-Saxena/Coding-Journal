int sort(const void *a, const void *b) {
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    return (int_a > int_b) - (int_a < int_b); // avoids overflow
}

int maxProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), sort);

    return ((nums[numsSize - 1] - 1)*(nums[numsSize - 2] - 1));

}
