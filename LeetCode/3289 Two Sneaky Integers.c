/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2; //standard procedure for defining the size of the answer array
    int* ans = (int*)malloc(2 * sizeof(int));
    int *hash = (int*)calloc(numsSize, sizeof(int)); //settting up hash and using calloc to auto-assign all values in hash to 0
    int idx = 0; //idx to increment for the answer array 
    for(int i = 0; i < numsSize; i++){
        int val = nums[i];
        if(hash[val] == 0) hash[val] = 1;  //if a value hasnt been visited yet, then marking it visited in the hash array
        else if(hash[val] == 1) ans[idx++] = val; //if the value has been visited, as shown in the hash array, then that means this is one of the
                                                  //duplicate numbers, so we add its value to answer array, first to idx = 0, then idx increments to 1
    }

    free(hash); //freeing hash to conserve space
    return ans;
}
