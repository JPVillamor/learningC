/* string_convert.c
*  demonstrate string-to-number conversion functions
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( void )
{
	char number[] = "-245.87";
	int value = atoi(number);
	char buf[80];
	double d;

	/*
	*  int atoi(const char *ptr);
	*   converts string to INTEGER.
	*   understands + and -
	*/

	printf("String number: %s\n", number);
	printf("atoi: %d\n", value + 100); 
	/* check with math; works on numbers only */

	/*
	*  long atol(const char *ptr);
	*   converts string to long.
	*  long long atoll(const char *ptr);
	*   converts string to long long.
	*/

	/*
	*  double atof(const char *str);
	*   understands + and -
	*   understands exponent E or e
	*/

	while (1)
	{
		printf("Enter string to convert.\n(type ? to exit): ");
		fgets(buf, 80, stdin);

		if (buf[0] == '?')
			break;
		
		d = atof(buf);

		printf("Converted value: %f\n", d);
	}

	return 0;
}
