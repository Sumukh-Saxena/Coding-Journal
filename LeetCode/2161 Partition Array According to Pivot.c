#include <stdlib.h>

int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    int less_count = 0, equal_count = 0, greater_count = 0; //to ensure a minimum runtime possible, we need to count the number of pivot elements
  //and the number of elements greater or lesser than the pivot, to help in the positioning of elements
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) less_count++;
        else if (nums[i] == pivot) equal_count++;
        else greater_count++;
    } //counting all types of elements
    
    int less_pos = 0;
    int equal_pos = less_count; //defining the positions in the answering array
    int greater_pos = less_count + equal_count;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            result[less_pos++] = nums[i]; //constructing the array with lesser elements first
        } else if (nums[i] == pivot) {
            result[equal_pos++] = nums[i]; //then the pivot elements with their starting index
        } else {
            result[greater_pos++] = nums[i]; //last elements
        }
    }
    
    return result;
}
