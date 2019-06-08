#include "stdio.h"
void writelines(char *array[], int nlines);

#define STRING_CONST "i am here"

int pointer_arrays_main() {
	writelines_test();
	return 0;
}

void writelines_test(){
	char *array[] ={"hi","this is me","shailendra"};
	writelines(array,3);
}

void strcmp_test() {
	char *s = "a";
	char *t = "d";

	int result = strcmp_function_v1(s, t);
	printf("%d", result);
}

void strcpy_test() {
	char *str1 = "abc";
	char *str2 = "def";

	strcpy_function(str1, str2);

	printf("%s", *str2);
}

void strlen_test() {
	char *str = "Hi how are you ?";
	char char_array[] = { 'h', 'o', 'w', 'a', 'r', 'e', 'y', 'o', 'u' };

	int len = strlen_function(STRING_CONST);//strlen_function_(char_array);//strlen_function(str);
	printf("strlen:%d", len);
}

int strlen_function(char *c) {
	int len;
	for (len = 0; *c != '\0'; c++) {
		len++;
	}
	return len;
}

int strlen_function_(char *c) {
	char *p = c;
	while (*p != '\0') {
		p++;
	}
	return p - c;
}

void strcpy_function(char *s, char *t) {
	int i;
	while ((s[i] = t[i]) != '\0')
		i++;
}

void strcpy_function_v1(char *s, char *t) {
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

void strcpy_function_v2(char *s, char *t) {
	while ((*s++ = *t++) != '\0')
		;
}

void strcpy_function_v3(char *s, char *t) {
	while ((*s++ = *t++))
		;
}

int strcmp_function(char *s, char *t) {
	int i;
	for (i = 0; s[i] == t[i]; i++) {
		if (s[i] == '\0') {
			return 0;
		}
	}
	return *s - *t;
}

int strcmp_function_v1(char *s, char *t) {
	for (; *s == *t; s++, t++) {
		if (*s == '\0') {
			return 0;
		}
	}
	return *s - *t;
}

void writelines(char *array[], int nlines) {
	int i;

	for (i = 0; i < nlines; i++) {
		printf("%s\n", *array++);
	}
}

