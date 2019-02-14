#include <stdio.h>
int main( void ) {
	char input[257]; //need an array or malloc to pass pointer to gets();
	puts("type some text then press enter.");
	gets(input);
	printf("Your input: \n%s\n", input);
	
	//you can test if user entered a blank line with gets()	
	char *ptr;
	puts("type some text then press enter.");
	if ( *(ptr = gets(input)) == '\0') //using the same array will replace the text currently stored in it, apparently.
		//the gets(input) evaluates to the address pointed to by ptr,
		//then the * accesses its contents and compares it to the NULL.
		puts("you entered a blank line");
	else
		printf("Your input: \n%s\n", input);
	return 0;
}
