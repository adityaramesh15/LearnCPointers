#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/*
		Multiple Levels of Indirection:
		- Can use double pointers to have a pointer point to another pointer
		- This allows for minimal memory duplication for related arrays
		- Change can also be done to only one, and it will reflect all locations.
	*/

	//In this example, kids and parents hold addresses to names
	
	char *names[] = {"Aditya", "Dhiya", "Hema", "Ramesh"};
	char **kids[2];
	char **parents[2];

	kids[0] = &names[0];
	kids[1] = &names[1];

	parents[0] = &names[2];
	parents[1] = &names[3];


	/*
		Constants with Pointers:
		- Const before type means point to a constant.
		- Const after type means pointer itself is constant.
	*/

	int num = 5;
	const int limit = 500;

	int *pNum = &num;
	const int *pLimit = 500; //The integer itself cannot change, but the pointer can
	pLimit = &num; //The pointer changes, but now the value at num cannot change

	int value = 10;
	int *const pValue = &value; //This means that the pointer cannot be changed
	value = 20; //the value itself however can be changed now. 

	return 0;
}
