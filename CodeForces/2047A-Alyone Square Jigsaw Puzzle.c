#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        int total = 0; //total number of pieces 
        int happy_days = 0;
        
        for(int i = 0; i < n; i++){ //instead of initializing an array we use this loop to save storage
            int pieces;
            scanf("%d", &pieces);
            
            total += pieces; //adding number of pieces to total
            
            int root = round(sqrt(total)); //checking if the total pieces form a square
            if((root*root == total) && ((root % 2) != 0)) happy_days++; //happy day only if the total pieces form a square and the side of the square is odd
        }
        
        printf("%d\n", happy_days);
    }
    return 0;
}
