#include <stdio.h>

int main( void ) {
	int ch;
	puts("buffered means you have to press Enter");
	puts("echo means what you type shows up on screen");
	puts("");
	puts("getchar()");
	while ((ch = getchar()) != '\n')
		putchar(ch); //reads out until it hits a newline character

	//the getch() function does not echo nor buffer input
	//it requires the non ANSI-compliant library conio.h
	
	//Ungetting characters
	//--------------------
	//when an input operation on a stream terminates at a particular
	//character, that character can be ungotten, or returned to the
	//input stream for further operation.
	
	//the function prototype is:
	//int ungetc(int ch, FILE *fp)
	
	//ch is the char to be returned.
	//FILE *fp is used with streams aassociated with disk files.
	//for now use stdin as the second argument
	
	return 0;
}
