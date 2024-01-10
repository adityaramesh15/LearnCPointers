#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int size, int value);

int main() {
	int *list = allocateArray(3,5); 
	for(int i = 0; i<10; i++) {
		printf("%d\n", list[i]); 
	}

	//It is up to the caller to free the dynamically allocated memory. 
	free(list);
	list = NULL;


	return 0; 
}

int* allocateArray(int size, int value) {
	int *arr = (int *)malloc(size * sizeof(int));
	for(int i=0; i<size; i++) {
		*(arr + i) = value;
	}
	return arr;
}

