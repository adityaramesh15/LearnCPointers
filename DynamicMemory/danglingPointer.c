#include <stdio.h>
#include <stdlib.h>

int main() {
 	/*
		Dangling pointer is when a poiter still points to a mem address that has been freed
		This is becuase heap manager does not redirect pointer, but just makes mem address available
		for reallocation.

		to avoid a dangling pointer, the best practice is below: 
		This is best avoided by assigning pointer = NULL after freeing it. 
	*/

	int *pNum = (int *)malloc(sizeof(int)); 
	free(pNum); 
	pNum = NULL; //Important as pNum is still pointing to mem address from prior. 
	
	/*
		Another issue to consider is scope of an address
		Suppose *pNum is global, or called in main()
		If it is assigned a memory address within a block statement {}, it becomes dangling

		Example: 
		
		int *pNum

		foo(){
			int localNumber = 5;
			pNum = &localNumber; 
		}

		pNum, outside of the block, is inaccesible, as localNumber is apart of foo() stack frame
	*/


	
	return 0;
}
