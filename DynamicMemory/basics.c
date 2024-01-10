#include <stdio.h>
#include <stdlib.h>

int main() {
	/* 
		- When doing malloc, the bytes that you have allocated are reserevd for you
		- In addition, excess bytes are added on for metadata about mem location/size.
		- Overwritting  into that data risks corruption
	*/

	int *pNum = (int *)malloc(sizeof(int));
	if(pNum == NULL) {
		printf("Memory Allocation has failed");
		return 1;
	} else {
		printf("Succesful Allocation");
	}

	*pNum = 5;

	free(pNum);
	pNum = NULL;
	
	/*
		static char *pName = (char *)malloc(7); is not possible
		This is because static variables are initialized before the start of the program running.
		
		Instead do the following: 
		static char *pName;
		pName = (char *)malloc(7); 
	*/


	//calloc takes (numElements, elementSize). Initializes and allocates at same time. 
	char *pName = "Aditya";
	pName = calloc(strlen(pName) + 1, 1);

	free(pName);
	pName = NULL; 

	//To do this separate, use malloc and memset
	//memset takes (buffer to fill, value to fill, bytes to be set);
	int *pValue = (int *)malloc(5 * sizeof(int)); 
	memset(pValue, 0, 5 * sizeof(int));

	//realloc can change the amount of memory.
	pValue = realloc(pValue, 8); //previous 5 + 3 more bytes. 

	free(pValue);
	pValue = NULL;

	return 0;
}
