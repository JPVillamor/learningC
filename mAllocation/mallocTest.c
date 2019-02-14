#include <stdio.h>
#include <stdlib.h>
//a test for *exactly* what malloc's return value is
int main( void ) {
	//does it spit out an address?
	printf("%p\n", malloc(1)); //use conversion char %p for addresses
	//indeed it does. so you can assign it to a pointer.
	return 0;
}
