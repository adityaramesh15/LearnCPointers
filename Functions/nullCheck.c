#include <stdio.h>
#include <stdlib.h>

int* allocateArrayNull(int *arr, int size, int value);

int main() {
	int *testArrOne = (int *)malloc(sizeof(int) * 5);
    /*
		Should be noted that by default, pointers are passed by value
		This means that the following function call will not modify testArrOne
		Instead the follwoig needs to be done. 

		testArrOne = allocateArrayNull(testArrOne, 5, 15); 
	*/

	return 0; 
}


int* allocateArrayNull(int *arr, int size, int value) {
	// Good idea to check if pointer is NULL prior to use. 
	// The allocation of memory will happen in main

	if(arr != NULL) {
		for(int i=0; i<size; i++) {
			arr[i];
		}
	}
	return arr;
}
