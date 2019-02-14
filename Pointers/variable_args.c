/* variable_args.c
*  functions that take variable number
*  of arguments
*/

#include <stdio.h>
#include <stdarg.h>

/* Important Macros in stdarg.h:
*  va_list
*   declare a pointer to each arg
*  va_start()
*   initialize the pointer declared by va_list
*   pass pointer and name of LAST fixed arg
*  va_arg()
*   access inidividual args
*   returns value of next argument
*   pass pointer and type of next arg
*  va_end()
*   cleans up after everything
*   pass pointer
*/

double average(int size, ...);

int main( void )
{
	double d;

	d = average(5, 12, 23, 34, 56, 54);

	printf("Average = %.2f\n", d);

	return 0;
}

double average(int size, ...)
{
	va_list arg_ptr;
	int count, total = 0;

	va_start(arg_ptr, size);

	for (count = 0; count < size; count++)
	{
		total += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);

	return (double)total / size;
}
