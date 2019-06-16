/*
 * memory_leak.c
 *
 *  Created on: Jun 9, 2019
 *      Author: Shailendra
 */

void memory_leak_main(){
	int* ptr = (int*) malloc(sizeof(int));
	return;
}
