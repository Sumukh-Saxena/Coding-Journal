int findMiddleIndex(int* nums, int numsSize) {
    int middleIndex = 0;
    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    int hash = 0; //hash indicator if the middle index is found

    for(int i = 0; i < numsSize; i++){
        int prefix = 0; //sum of all left elements to ith index
        for(int j = 0; j < i; j++){
            prefix += nums[j]; //adding the sum
        }
        if(prefix == sum - prefix - nums[i]){ //checking if the conditional equation is fitting for a particular i
            middleIndex = i;
            hash = 1; //assign hash and middleIndex values if true
        }
        if(hash) break; //check at the end of each loop is the middleIndex is found
    }

    if(hash) return middleIndex;
    else return -1; //edge case if the middleIndex doesn't exist for the given array
}
