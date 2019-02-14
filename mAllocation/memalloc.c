#include <stdio.h>
#include <stdlib.h>
int main( void ) {
	char count, *ptr, *p;
	ptr = malloc(35 * sizeof(char));
	p = ptr; //p will be used to iterate the string. ptr must stay pointed at the first byte.
	for (count = 65; count < 91; count++) {
		*p++ = count; //increment the address
		printf("%c    @ %p\n", count, p);
	}
	*p = '\0';
	printf("NULL @ %p\n", p); //ok so apparently the \0 takes the last byte. Nevermind that the last byte is taken by Z.
	puts(ptr);
	free(ptr); //unallocates the memory when the program is done using it.
	return 0;
}
