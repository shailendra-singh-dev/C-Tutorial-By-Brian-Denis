#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Current line number:%d\n",__LINE__);
	printf("Current date is :%s\n",__DATE__);
	printf("Current file is :%s\n",__FILE__);
}
