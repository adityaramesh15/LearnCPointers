#include <stdio.h>
#include <stdlib.h>

void counter();
void cleanup();

static int *pCounter = NULL;

int main() {
	
	for(int i = 0; i < 5; i++) {
		counter(); 
	}


	cleanup();

	return 0;
}

void counter() {
	if(pCounter == NULL) {
		pCounter = (int *)malloc(sizeof(int));
	}
	
	(*pCounter)++;
	printf("this function has been called %d times\n", *pCounter);
}

void cleanup() {
	free(pCounter);
	pCounter = NULL;
}
