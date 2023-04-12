#include<main.h>
#include<stdio.h>
#include<stdlib.h>
char* _strdup(char* str) {
	if (str == NULL) {
		return NULL;
	}
	char* b = (char*)malloc(sizeof(char) * (sizeof(str) / sizeof(char)));
	if (b == NULL) {
		return NULL;
	}
	for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
		*(b + i) = *(str + i);
		
	}
	free(b);
	return 0;
