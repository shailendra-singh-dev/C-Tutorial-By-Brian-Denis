#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "mymath.h"
#include "storageclassesofvariables.h"
#include "cpreprocessor.h"

int externvariable;
int staticvariable;

#define MAXSIZE 100

int main() {
	preprocessor();
	return 0;
}

void preprocessor(){
	printf("\nMAX(10,2):%d",MAX(10,2));
	printf("\nsquared(2):%d",square(2));
	printf("\nprintexpres(9/2):%d",printexpres(9/2));
	printf("\npaste(12,12):%d",paste(12 , 12));
}

void reverpolishcalculator() {
	int type = 0;
	double operand2;
	char s[MAXSIZE] = "23*92/+"
		"";
	while ((type = gettop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(type));
			break;

		case '+':
			push(pop() + pop());
			break;

		case '-':
			push(pop() - pop());
			break;

		case '*':
			push(pop() * pop());
			break;

		case '/':
			operand2 = pop();
			if (operand2 == 0.0) {
				printf("can't devide by zero");
			}
			push(pop() / operand2);
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		}

	}
}
