#include <stdio.h>
#include <stdlib.h>

int main() {
	//Scenario 1: Both Pointers are dependent on the same allocated memory 
	//Changing/Free one of the pointers affects the other since its same mem address.
	printf("Both Pointers are dependent on the same allocated memory\n");
	int *pFirstNum = (int *)malloc(sizeof(int));
	int *pFirstNumSecond = pFirstNum; 

	*pFirstNum = 5;

	printf("First Memory is: %p and First Value is: %d\n", pFirstNum, *pFirstNum);
	printf("Second Memory is: %p and Second Value is: %d\n", pFirstNumSecond, *pFirstNumSecond);
	printf("\n");

	free(pFirstNum);
	//free(pFirstNumSecond); This is an error as the memory block has already been freed
	pFirstNum = 0;

	//Scenario 2: Pointing to same Variable


	//Scenario 3: Pointing to same Memory Address, without dependency


	return 0;
}
