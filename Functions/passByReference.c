#include <stdio.h>
#include <stdlib.h>

void swapValues(int *pOne, int *pTwo);
void passingConstants(const int *numOne, int *numTwo);

int main() {
	int numOne = 5;
	int numTwo = 10;

	printf("Num One: %d\n", numOne);
	printf("Num Two: %d\n", numTwo);

	swapValues(&numOne, &numTwo);
	printf("Swapping Values\n");
	printf("Num One: %d\n", numOne);
	printf("Num Two: %d\n", numTwo);

	const int limit = 100;
	int result = 5;
	passingConstants(&limit, &result);
	printf("\n"); 
	printf("Result was 5 and is now: %d\n", result); 

	return 0; 
}

void swapValues(int *pOne, int *pTwo) {
	int tmp;
	tmp = *pOne;
	*pOne = *pTwo;
	*pTwo = tmp; 
}

void passingConstants(const int *numOne, int *numTwo) {
	/*
		int tmp = *numOne;
		*numOne = *numTwo; 

		This will not work since the value numOne refers to must stay constant
	*/

	*numTwo = *numOne;	
}
