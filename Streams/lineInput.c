#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 10

int main( void ) {
	char *ptr = malloc (257 * sizeof(char));
	gets(ptr);
	//function prototype of gets() is
	//char *gets(char *str);
	//takes char pointer and returns char pointer
	//gets() has no way of knowing if enough memory is allocated.
	puts(ptr);
	
	//fgets() can specify the input stream and max characters inputted
	//prototype:
	//char *fgets(char *str, int n, FILE *fp)
	
	puts("Enter a line of text; Enter blank line to exit.");
	while (1) {
		fgets(ptr, MAXLEN, stdin);
		if (*ptr == '\n')
			break;
		puts(ptr);
	}
	
	return 0;
}
