/* void_pointers.c
*  passing pointers to any type
*  typecasting pointers
*  dereferencing typecasted pointers
*/

#include <stdio.h>

void half(void *ptr, char type);

int main( void )
{
	int i = 12;
	long l = 32453314;
	float f = 9.8;
	double d = 2.998792;

	printf("%d\n", i);
	printf("%ld\n", l);
	printf("%f\n", f);
	printf("%f\n\n", d);

	half(&i,'i');
	half(&l, 'l');
	half(&f, 'f');
	half(&d, 'd');

	printf("%d\n", i);
	printf("%ld\n", l);
	printf("%f\n", f);
	printf("%f\n\n", d);

	return 0;
}

void half(void *ptr, char type)
{
	/* typecast based on type parameter */
	/* dereference and change value at address */

	switch(type)
	{
	case 'i':
		*(int *)ptr /= 2;
		break;
	case 'l':
		*(long *)ptr /= 2;
		break;
	case 'f':
		*(float *)ptr /= 2;
		break;
	case 'd':
		*(double *)ptr /= 2;
		break;
	}

	/* remember kids, never increment or decrement a void pointer */
}
