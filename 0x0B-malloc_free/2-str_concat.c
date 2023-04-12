#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str_concat(char* s1, char* s2) {
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char* S3 = (char*) malloc(sizeof(char) * (len1 + len2 + 1));
    if (S3 == NULL) {
        return NULL;
    }
    strcpy(S3, s1);
    strcat(S3, s2);
    return S3;
}

