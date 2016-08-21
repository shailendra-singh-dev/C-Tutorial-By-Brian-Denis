#define BUFFERSIZE 100
#include <stdio.h>

char buff[BUFFERSIZE];
int buffp = 0;

/*gets a pushed character..*/
int getch() {
	return buffp > 0 ? buff[--buffp] : getchar();
}

/*push a character...*/
void ungetch(int n){
	if(buffp > BUFFERSIZE){
		printf("Buffer overflow .Too many characters..");
	}else{
		buff[buffp++] = n;
	}
}
