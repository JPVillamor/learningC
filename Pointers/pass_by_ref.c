/* pass_by_ref.c
*  demonstrate passing pointers to functions
*  to alter the original value of variables
*/

#include <stdio.h>

void reset_vars(int *x, int *y, int *z);

int main( void )
{
	int age = 5, height = 48, weight = 80;

	printf("age: %d\nheight: %d\nweight: %d\n", age, height, weight);

	/* pass addresses, not values! */
	reset_vars(&age, &height, &weight);

	printf("age: %d\nheight: %d\nweight: %d\n", age, height, weight);

	return 0;
}

void reset_vars(int *x, int *y, int *z)
{
	*x = 0;
	*y = 0;
	*z = 0;
}
