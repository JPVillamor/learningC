/* char_test.c
*  demonstrate character test macros
*/

#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char x;
	printf("Enter a character: ");
	scanf("%c", &x);

	/*
	*  int is[...](int ch);
	*   all macros have this prototype
	*   returns 1 or 0 if test is passed or failed.
	*/

	puts("You entered a: ");

	if (isalnum(x))
		puts("alphanumeric");
	if (isalpha(x))
		puts("letter");
	/*if (isblank(x))
		puts("blank");*/
	if (iscntrl(x))
		puts("control char");
	if (isdigit(x))
		puts("digit");
	if (isgraph(x))
		puts("graphical");
	if (islower(x))
		puts("lowercase");
	if (isprint(x))
		puts("printing char");
	if (ispunct(x))
		puts("punctuation char");
	if (isupper(x))
		puts("uppercase");
	if (isxdigit(x))
		puts("hex digit");

	return 0;
}
