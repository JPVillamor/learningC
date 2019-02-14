#include <stdio.h>

int sum( int a, int b) {
	return a + b;
}

int main( void ) {
	int (*function)( int, int );
	function = &sum;
	printf("%d\n", (*function)(2,3));
	return 0;
} 
