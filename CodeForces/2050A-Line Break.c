#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{ //we will try to minimize the run time and storage here by using boolean values instead of int indicators
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        
        int count = 0; //replacement for x, number of words possible in first string
        bool canfit = true; //bool if the input word can still fit in the first string
        
        for(int i = 0; i < n; i++){
            char word[11]; //initalizing a new word in each iteration of the loop instead of making a word matrix
            scanf("%s", word);
            int length = strlen(word); //taking length of the word
            
            if(canfit && m >= length){ //check if the first string still has space and it can fit
                m -= length;
                count++;
            } 
            else canfit = 0; //if any more words can not fit, then we set bool to 0, 
        }
        printf("%d\n", count);
    }
    return 0;
}
