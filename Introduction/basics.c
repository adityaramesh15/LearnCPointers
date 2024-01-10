#include <stdio.h>
#include <stdlib.h>

int addInt(int n, int m);

int main() {
	int num;
	int *pNum = NULL;
	
	num = 0;
	pNum = &num; 

	//Writing pNum = (int *)num; would equate pNum to a memory address of 0, as it casts the num with value 0 to be an int pointer

 	printf("Address of num: %p, Value of num: %d\n", &num, num);
 	printf("Address of pointer: %p, Value of pointer: %p, Dereferenced pointer: %d\n", &pNum, pNum, *pNum);

	*pNum = 15;
	printf("The value of num is now: %d\n", num); 
	
	//A pointer can point to a function
	int (*addFunctionPointer)(int, int) = NULL; 
	addFunctionPointer = &addInt; //(addFunctionPointer = addInt) is equivalent as well. 
	int sum = addFunctionPointer(2, 3); //will equal 5. 

	
	//Void Pointer
	void *pSwap = NULL;
	pSwap = pNum;
	//pv cannot be dereferenced directly as it is void
	int newNum = 15;
	pNum = &newNum;
	int *oldNum = (int *)pSwap; 

	return 0;

}

int addInt(int n, int m) {
	return m + n;
}
