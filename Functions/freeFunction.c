#include <stdio.h>
#include <stdlib.h> 

void saferFree(void **pp);

int main() {


	return 0;
}	



void saferFree(void **pp) {
	if(*pp != NULL) {
		free(*pp); 
		*pp = NULL;
	}
}
