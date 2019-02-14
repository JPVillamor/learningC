#include <stdio.h>
int main( void ) {
	char var1 = 'e';
	int var2 = 101;
	printf("expecting int, receives char: %d\n", var1);
	printf("expecting char, receives int: %c\n", var2);
	return 0;
}
