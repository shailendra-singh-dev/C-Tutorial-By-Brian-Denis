#include "mymath.h"

int squared(int n) {
	return n * n;
}

int timestwo(int n) {
	return 2 * n;
}

char* evenoddmessages(int n) {
	if (n % 2 == 0) {
		return "Even";
	} else {
		return "Odd";
	}
}
