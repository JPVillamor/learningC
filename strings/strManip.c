#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*demonstrate how strings work in C*/

int main( void )
{
	/* Calculating string length */
	/* ========================= */

	size_t length;
	char buf[80];

	printf("enter a line of text: ");
	fgets(buf, 80, stdin);
	length = strlen(buf);

	printf("the length of the entered string is %lu.\n", length);

	/* Reassigning (copying) strings */
	/* this requires memory ALLOCATION! */
	/* ================================ */

	char source[] = "this is source.";
	char *dest;	
	/*
	if dest was a large enough 
	array this would also work.
	*/

	printf("\nsource:	%s\n", source);
	
	dest = (char *)malloc(strlen(source) + 1);
	/* strlen() does not include room for '\0' */

	strcpy(dest, source);

	printf("dest:	%s\n", dest);

	/* using strncpy() */
	int n = 7;
	char dest2[] = ".....................";
	
	printf("\nBefore:\t%s\n", dest2);

	strncpy(dest2, source, n);
	/* n is the number of chars to copy */
	/* strncpy() does not add '\0' */
	/* n should not exceed allocated destination */

	printf("After:\t%s\n\n", dest2);

	/* Concatenating strings */
	/* ===================== */

	char str1[27]; /* need space for null char */
	char str2[2];
	char c = 'a';

	str2[1] = '\0';

	for (; c <= 'z'; c++) 
	{
		str2[0] = c;
		strcat(str1, str2);
		puts(str1);
	}

	/* using strncat() */
	char str3[] = "abcdefghijklmnopqrstuvwxyz";
	char str4[27];
	
	for (n = 1; n < 27; n++)
	{
		strcpy(str4, ""); /* empties str4 */
		strncat(str4, str3, n);
		puts(str4);
	}

	/* Comparing strings */
	/* ================= */

	/* comparisons depend on ASCII codes. */

	char test1[] = "this is america";
	char test2[] = "zebras, your highness";
	int x;

	x = strcmp(test1, test2); /* accept pointers to strings */

	printf("\nstrcmp(%s, %s) returns: %d\n", test1, test2, x);

	/* x < 0 means first str less than second str */
	/* x = 0 means equal */
	/* capital letters precede lowercase in ASCII, and
	*  therefore are 'less than'
	*/

	/* partial strings */
	char test3[] = "the first";
	char test4[] = "the second";
	n = 3;

	printf("\ncomparing %d chars: %d\n", n, strncmp(test3, test4, n));
	n = 6;
	printf("\ncomparing %d chars: %d\n", n, strncmp(test3, test4, n));

	return 0;
}
