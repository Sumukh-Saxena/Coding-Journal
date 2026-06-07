int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* seen = (int*)calloc(numsSize + 1, sizeof(int)); //calloced the seen array{hash} 
    
    for (int i = 0; i < numsSize; i++) {
        seen[nums[i]] = 1; //if a value has been visited, it would be marked as 1 in the seen array
    }

    int missingCount = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (seen[i] == 0) {
            missingCount++;  //finding the number of missing integers, to malloc the return array
        }
    }

    *returnSize = missingCount;
    int* ans = (int*)malloc(missingCount * sizeof(int));
    
    int j = 0; //setting index of the return array to 0 
    for (int i = 1; i <= numsSize; i++) {
        if (seen[i] == 0) {
            ans[j++] = i; //adding values to the return array
        }
    }
    free(seen);
    return ans;
}
