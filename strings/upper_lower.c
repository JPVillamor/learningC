/* upper_lower.c
*  uses ansi standard for upper and lowercase
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> /* for tolower() and toupper() */

int main( void )
{
	int counter;
	char buf[80];

	puts("Enter a line of text.");
	fgets(buf, 80, stdin);

	puts("");
	
	for ( counter = 0; counter < strlen(buf); counter++)
	{
		printf("%c", tolower(buf[counter]));
	}
	
	for ( counter = 0; counter < strlen(buf); counter++)
	{
		printf("%c", toupper(buf[counter]));
	}

	puts("");

	return 0;
}
