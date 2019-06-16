/*
 * static_variables.c
 *
 *  Created on: Jun 9, 2019
 *      Author: Shailendra
 */

int global_variable;
static int y;

int fun() {
	static int x = 0;
	x += 10;
}

void static_variables_main(){
	printf("global_variable=%d", global_variable);

	printf("\nglobal static variable=%d", y);

	printf("\nlocal value=%d", fun());
	printf("\nlocal value=%d", fun());
	printf("\nlocal value=%d", fun());

}


