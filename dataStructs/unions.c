#include <stdio.h>

union shared { 	//unions can only hold one value at a time so
	char c;				//it either holds a char c
	int i;				//or an int i
} generic = { '$' }; //only the first member can be initialized.

int main( void ) {
	//accessing union members: 
		//only one at a time.
		//accessing uninitialized members have unpredictable results.
	//the most common use of unions is for storing multiple data types in a single space.
	
	//the size of the union is the size of its largest member.
	union shared common;
	printf("chars are %lu bytes\n", sizeof(char));
	printf("ints are %lu bytes\n", sizeof(int));
	printf("the shared union is %lu bytes\n", sizeof(common));
	
	//member access works the same as with structs.
	printf("%c\n", generic.c);

	//and pointers too
	union shared *p_generic;
	p_generic = &generic;
	printf("%c == %c == %c\n", p_generic->c, generic.c, (*p_generic).c);

	return 0;
}
