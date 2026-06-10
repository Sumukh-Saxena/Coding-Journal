int scoreOfString(char* s) {
    int score = 0;
    int len = 0;
    for(int i = 0; s[i] != '\0'; i++){
        len++; //finding the length of the string
    }

    for(int i = 0; i < len-1; i++){ //the length of the string - 1 is the max amount that i can go to without issues and incorporating all the element differences
        score += abs(s[i] - s[i+1]);
    }

    return score;
}
