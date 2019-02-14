#include <stdio.h>
#include "cubed.h"

long input();

int main( void )
{
	long root = input();
	long result = cube(root);
	printf("The cube of %ld is %ld.\n", root, result);

	return 0;
}

long input()
{
	long num;

	printf("Enter an integer: ");
	scanf("%ld", &num);

	return num;
}
