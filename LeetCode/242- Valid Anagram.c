bool isAnagram(char* s, char* t) {
    int *hashs = (int *)calloc(26, sizeof(int)); //using calloc to initalize all values to 0 automatically
    int *hasht = (int *)calloc(26, sizeof(int));

    for(int i = 0; s[i] != '\0'; i++){
        hashs[s[i] - 'a']++; //taking the hash of all the characters in both s and t strings
    }

    for(int i = 0; t[i] != '\0'; i++){
        hasht[t[i] - 'a']++;
    }

    int bash = 1;
    for(int i = 0; i < 26; i++){ //comparing if both the hashes are the exact same, if not, then break and set bash to 0
        if(hashs[i] != hasht[i]){
            bash = 0;
            break;
        }
    }

    free(hashs); //freeing the calloc arrays
    free(hasht);

    if(bash) return true;
    else return false;
}
