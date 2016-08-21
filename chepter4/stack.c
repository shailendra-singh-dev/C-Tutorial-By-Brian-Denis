#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

double values[MAXVAL];
int valp =0;

void push(double val) {
	if (valp < MAXVAL) {
		values[valp++] = val;
	} else {
		printf("There is no space in stack");
	}
}

double pop() {
	if (valp < 0) {
		printf("stack is empty.nothing to pop");
		return 0.0;
	}else{
		return values[valp--];
	}
}

