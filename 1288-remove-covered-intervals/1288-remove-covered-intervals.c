#include <stdlib.h>

int compare(const void* a, const void* b) {
    // FIX: Properly dereference to get the int* pointing to [l, r]
    int* intervalA = *(int**)a;
    int* intervalB = *(int**)b;
    
    // Sort by start time ascending
    if (intervalA[0] != intervalB[0]) {
        return intervalA[0] - intervalB[0];
    }
    // Tie-breaker: Sort by end time DESCENDING
    return intervalB[1] - intervalA[1]; 
}

int removeCoveredIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    // Sort the array
    qsort(intervals, intervalsSize, sizeof(int*), compare);
    
    int count = 0;
    int max_r = -1;
    
    for (int i = 0; i < intervalsSize; i++) {
        int l = intervals[i][0];
        int r = intervals[i][1];
        
        // If current right bound exceeds the max seen so far, it's not covered
        if (r > max_r) {
            count++;
            max_r = r;
        }
    }
    
    return count;
}