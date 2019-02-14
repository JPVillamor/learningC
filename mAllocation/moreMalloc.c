#include <stdio.h>
#include <stdlib.h> //for malloc
int main( void ) {
	//the key to using malloc is knowing the amount of bytes to allocate.
	
	//malloc's error scenario
	char *ptr;
	ptr = malloc(10000000000000000000 * sizeof(char));
	if (ptr == NULL) { //if malloc failed to allocate the right size
		puts("malloc error");
		//return 1; //exit the program.
	}
	else
		puts("everything is fine");
	
	//using malloc for single chars
	
	char *ptr2;
	ptr2 = malloc(1); //this is literally just like saying: char ptr2[1];
	*ptr2 = 'k';

	return 0;
}
