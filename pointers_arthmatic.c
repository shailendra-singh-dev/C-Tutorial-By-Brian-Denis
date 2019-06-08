#include "stdio.h"

void arthmatic();

int pointers_arthmatic_main() {
	arthmatic();
	return 0;
}

void arthmatic() {
	int n = 10;
	int *pn;
	pn = &n;
	printf("integer Memory location address=%d\n", pn);

	pn = pn + 1;
	printf("integer Memory location address=%d\n", pn);

	double m = 10;
	double *pm;
	pm = &m;
	printf("double Memory location address=%d\n", pm);

	pm = pm + 1;
	printf("double Memory location address=%d\n", pm);
}
