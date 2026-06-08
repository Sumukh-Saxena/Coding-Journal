#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char grid[3][4];
        for(int i = 0; i < 3; i++){
            scanf("%s", grid[i]);
        } //take the whole row in one go as a string

        int indexcol = 0; //defining the coordinates for the ? character
        int indexrow = 0;
        int hash = 0; //initializing to zero because the ? character hasn't been found yet

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(grid[i][j] == '?'){
                    indexcol = j; //assigning the coordinates on finding the missing character
                    indexrow = i;
                    hash = 1; //? character has been found, so hash is set to 1
                }
            }
            if(hash) break; //breaking the loop in case the ? is found
        }

        int countA = 0; //checking in reach column if all A B C are present in one number
        int countB = 0;
        int countC = 0;
        for(int i = 0; i < 3; i++){
            if(grid[indexrow][i] == 'A') countA++; //counting the chars
            if(grid[indexrow][i] == 'B') countB++;
            if(grid[indexrow][i] == 'C') countC++;
        }

        if(countB && countC) printf("A\n"); //printitng the missing characters for 3 different cases
        else if(countA && countC) printf("B\n");
        else if(countA && countB) printf("C\n");
    }
    return 0;
}
