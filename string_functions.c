#include "stdio.h"
#include "string.h"

void main() {
	char s1[50];
	char s2[50];
	printf("Enter first string");
	gets(s1);
//	printf("Enter second string");
//	gets(s2);
	//	strcpy(s1, s2);
	//	strcat(s1, s2);
	//	printf("s1:%s\n", s1);
	//	printf("length of s1 is:%d\n", strlen(s1));
	//	printf("strcmp(s1,s2):%d\n", strcmp(s1,s2));
	//	printf("strchr(s1,s2):%d\n", strchr(s1,s2));
	//	printf("strstr(s1,s2):%s\n", strstr(s1,s2));
	printf("strch(s1,s2):%s\n", strchr(s1, 'd'));

}
