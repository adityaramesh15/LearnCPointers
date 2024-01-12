#include <stdio.h>
#include <stdlib.h>

void allocateArrayReference(int **arr, int size, int value);
int* allocateArrayValue(int *arr, int size, int value);

int main() {
	size_t length; 
	int value; 
	
	printf("How long is your array: "); 
	scanf("%zu", &length);
	printf("What Value: ");
	scanf("%d", &value);


	int *firstArray = (int *)malloc(length * sizeof(int)); 
	firstArray = allocateArrayValue(firstArray, length, value);
	
	int *secondArray = NULL;
	allocateArrayReference(&secondArray, length, value);




	printf("Pass by Value is: ");
	for(int i = 0; i < length; i++) {
		printf("%d ", firstArray[i]);
	}

	printf("Pass by Reference  is: ");
	for(int i = 0; i < length; i++) {
		printf("%d ", secondArray[i]);
	}

	return 0;
}


/*
	When passing a pointer, it is passed by Value by default
	- A copy of the array is made
	- Then you modify it
	- Then you assign it the actual array in main(); 

	You can pass it by reference though
	- The actual pointer is passed in
	- Then you modify it withot any assignment in main();
*/


int* allocateArrayValue(int *arr, int size, int value){
	if(arr != NULL) {
		for(int i = 0; i < size; i++) {
			arr[i] = value;
		}
	}
	return arr;
}

void allocateArrayReference(int **arr, int size, int value) {
	*arr = (int *)malloc(sizeof(int) * size);
	if (*arr != NULL) {
		for( int i=0; i<size, i++) {
			*(*arr+i) = value; 
		}
	}
}
