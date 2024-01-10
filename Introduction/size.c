#include <stdio.h>
#include <stdlib.h>

int *pGlobal; //Global pointers are automatically initialized to NULL

int main() {
	int num = 5;
	int *pNum = &num;
	double decimalNum = 5.0;
	double *pDecimalNum = &decimalNum;

	/*
		- size_t is a typedef that is meant for holding size values
		- it guarantess enough space to hold the largest possible size depending on machine
		- unisgned int to unsigned long long for 32 bit vs 64 bit
		- it also helps portability since you avoid potential overflow issues when changing device
		- finally it enhances readability and is a good pratice to use for documentation

	*/
	size_t size = sizeof(pNum); //Size of the pointer itself
	size_t valueSize = sizeof(*pNum); //Size of the value held by the pointer
	size_t decimalSize = sizeof(pDecimalNum); //Size of the doubke pointer itself
	size_t decimalValueSize = sizeof(*pDecimalNum); //Size of the value held by the pointer



	printf("The size of the int pointer: %zu\n", size);
	printf("The size of the int: %zu\n", valueSize);

	printf("The size of the double pointer: %zu\n", decimalSize);
	printf("The size of the double: %zu\n", decimalValueSize);
	

	return 0;
}


