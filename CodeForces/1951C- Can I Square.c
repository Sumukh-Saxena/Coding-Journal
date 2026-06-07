#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int n; //since we have to make a square using all cubes(1x1), we have to check if the sum of array is a square number
        scanf("%d", &n);
        long long a[n];  //based on the constraints given in the question, long long data type for each a(i) is required
        long long sum = 0; //initializing the sum of array to 0
        for (int i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            sum += a[i];
        }
        long long s = floor(sqrt(sum));  //sqrt and floor function is taken from the library math.h
//the idea is to find an s. Instead of using the simple sqrt function, which can output a double datatype
//we conform the limits of s to make sure that it is a pure integer even if it exceeds the int limits, so we apply floor
        if(s*s == sum){   //now to check if the floored s, when squared, is actually equal to sum
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
