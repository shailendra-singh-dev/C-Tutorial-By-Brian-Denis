#include <stdio.h>

void main() {
	char *messages[10];
	char *allstring;
	int i = 0;
	int total = 0;
	for (i = 0; i < 5; i++) {
		printf("Enter a string");
		messages[i] = (char*) malloc(10);
		scanf("%s", messages[i]);
		total += strlen(messages[i]);
	}
	allstring =(char*) malloc(total+1);
	strcpy(allstring,messages[0]);
	for (i = 0; i < 5; i++) {
		strcat(allstring," ");
		strcat(allstring,messages[i]);
	}
	printf("%s",allstring);
}
