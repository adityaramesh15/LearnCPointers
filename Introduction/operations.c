#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
		Addition / Subtraction:
		- Operations with Integer is equivalent to adding/subtracting (Integer * size)
		- In the use of arrays, you can cycle x amounts of locations
	*/

	int numbers[] = {15, 28, 10, 25};
	int *pNumbers = numbers;
	printf("Printing the first value: %d\n",*pNumbers);
	printf("Printing the third value: %d\n", *(pNumbers + 2));
	printf("Printing the first value + 3: %d\n",(*pNumbers)+ 3);
	printf("Printing the third value + 3: %d\n", (*(pNumbers + 2)) + 3); 
	
	/*
		Subtracting two pointers:
		- Subtracting pointers gives the difference in "units"
		- Useful when detemrining the order of elements in an array

	*/

	int values[] = {28, 41, 17};
	int *p0 = values;
	int *p1 = values + 1;
	int *p2 = values + 2;

	printf("p2 - p0: "%d\n", p2-p0); //This will give the distance in elements between either
	printf("p0 - p1: %d\n", p0-p1); //Notice how the negative indicates 1 position AHEAD

	ptrdiff_t difference = p2-p1; //typedef used express this working of differences


	/*
		Comparing Pointer:
		- Can be done using standard comparison operators
		- Usually used when determinig relative ordering within an array
		- Example: 
			- p2 > p0 returns 1 meaning taht is true and p2 is further down the array
	*/

	return 0;
}
