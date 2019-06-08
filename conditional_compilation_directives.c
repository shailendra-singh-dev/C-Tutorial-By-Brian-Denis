#include <stdio.h>
#define MAX 100

#ifdef MAX
#define MIN 0
#else
#define MIN -1
#endif

int conditional_compilation_directives_main(int argc, char *argv[]) {
	printf("MIN:%d\n", MIN);

#ifndef TYPE
#define TYPE 100
	printf("Defined TYPE\n");
#else
	printf("not Defined TYPE\n");
#endif

}
