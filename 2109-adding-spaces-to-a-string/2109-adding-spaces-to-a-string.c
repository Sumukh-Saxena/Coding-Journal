#include <stdlib.h>
#include <string.h>

char* addSpaces(char* s, int* spaces, int spacesSize) {
    int n = strlen(s);
    char* result = (char*)malloc(n + spacesSize + 1);
    if (!result) return NULL;

    int k = 0;          
    int j = 0;          

    for (int i = 0; i < n; ++i) {
        if (j < spacesSize && spaces[j] == i) {
            result[k++] = ' ';
            ++j;
        }
        result[k++] = s[i];
    }

    result[k] = '\0';
    return result;
}