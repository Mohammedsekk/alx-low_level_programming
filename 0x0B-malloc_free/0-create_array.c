#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }
    char* arr = (char*) malloc(sizeof(char) * size);
    if (arr == NULL) {
        return NULL;
    }
    arr[0] = c;
    return arr;
}

