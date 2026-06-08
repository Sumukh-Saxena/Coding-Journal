#include <stdio.h>
int main()
{ //the idea is that in any case, the sum of all the efficiencies must be zero, since some other team will cancel out each goal
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        int arr[n-1]; //defining an array of n-1 elements only to take efficiency of n-1 teams only
        int sum = 0;
        for(int i = 0; i < n-1; i++){
            scanf("%d", &arr[i]);
            sum += arr[i]; //taking the sum of all the array elements
        }
        
        int ans = -1*sum; //negative of sum, as the net sum must be zero
        printf("%d\n", ans);
        
    }
    return 0;
}
