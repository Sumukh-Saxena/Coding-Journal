#include <stdio.h>
#include <stdbool.h>
int main()
{ //the main thing here to understand is that if the points are present in all four quadrants and axes, then the controller will break in that case
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d",&n);

        bool x_pos = 0; //setting initial bools to false as we are on (0, 0)
        bool y_pos = 0; //as the scanning happens, we check which point is in which x and y direction, and then based on that, we 
        bool x_neg = 0; //set the boolean values
        bool y_neg = 0;

        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            if(x>0) x_pos = 1;
            if(x<0) x_neg = 1;
            if(y>0) y_pos = 1;
            if(y<0) y_neg = 1;
        }

        int sum = x_pos + y_pos + x_neg + y_neg;
        if(sum == 4) printf("NO\n"); //if points are seen in all quadrants then the controller breaks
        else printf("YES\n");
    }
    return 0;
}
