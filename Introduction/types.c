#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	/*
		There are 4 predefined pointer types: 
		- size_t: Created to provide a safe type for sizes
		- ptrdiff_t: Created to handle pointer arithmetic
		- intptr_t & uintptr_t: Used for storing pointer addresses
	*/

	/*
		size_t:
		- represents the maximum size any object in C can be
		- unsigned int, since the MSb holds a value (not whether number is negative or not)
		- meant to be portable and change from system to system.
		- good practice to use anytime length/size of something is needed (array, counter, etc.)

		maximum values is SIZE_MAX
	*/

	char *name = "Aditya Ramesh";
	size_t nameSize = strlen(name);
	printf("Printing length of name in chars:  %zu\n", nameSize);

		
	/*
		intprt_t and uintptr_t:
		- These store pointer addresses
		- Portable, safe way, as they are the same size as the underlying system pointer
		- unintptr_t cannot be assigned to regular ints (They must be unsigned)
			- Example: 
			int num;
			uintptr_t *pNum = &num;                    ERROR SINCE num IS INT
			uintptr_t *pNum = (uintptr_t *)&num;       NOT ERROR SINCE num is UINT  
	*/

	int num;
	intptr_t *pNum = &num;



	return 0;
}
