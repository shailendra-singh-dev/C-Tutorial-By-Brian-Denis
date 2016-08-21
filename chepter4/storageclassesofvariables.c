#include "storageclassesofvariables.h"
#include <stdio.h>

extern int externvariable = 10;
static int staticvariable = -10;

void testautovariables() {
	auto int local = 0;
	printf("\nauto variable:%d", ++local);
}

void testregistervariables() {
	register int n;
	for (n = 0; n < 10; n++) {
		printf("register variable:%d", n);
	}
}

void testexternalvariables() {
	printf("externvariable:%d", externvariable);
}

void teststaticvariables() {
	printf("staticvariable:%d", staticvariable + 10);
}

void testlocalstaticvariables() {
	static int localstaticvariable = 10;
	printf("\nlocalstaticvariable:%d", ++localstaticvariable);
}
