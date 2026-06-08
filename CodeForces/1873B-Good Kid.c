#include <stdio.h>
int main()
{ //first of all, in any case, the idea is to increase the minimum of all the elements in the array, as there is an upper bound and there is a possibility for the 
  //element to be zero, which can be fixed with this code
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        int arr[n];
        
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int min = arr[0];
        int index = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < min) {
                min = arr[i];
                index = i; //assigning an index to the minimum found element to find and increment the digit in the actual array
            }
        }
        arr[index] += 1;
        long long product = 1; //case of integer overflow
        for(int i = 0; i < n; i++){
            product *= arr[i];
        }
        
        printf("%lld\n", product);
        
        
    }
    return 0;
}
