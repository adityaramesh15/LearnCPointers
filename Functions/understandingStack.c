#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int value, int size);
int* badAllocateArray(int value, int size);

int main() {	
	return 0; 
}

int* allocateArray(int value, int size){
	int *arr = (int *)malloc(sizeof(int) * size);
	for(int i = 0; i < size; i++){
		arr[i] = value;
	}
	return arr;
}

int* badAllocateArray(int value, int size){
	int arr[size]; //ERROR: arr memory will be overwritten since it is in stack, not heap.
	for(int i = 0; i < size; i++) {
		arr[i] = 0; 
	}
	
	//Next time a function is called, the stack will pop everything in here and overwrite
	return arr; 
}
