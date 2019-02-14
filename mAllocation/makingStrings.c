//this program will demonstrate how strings are made in C
#include <stdio.h> //for puts()
#include <stdlib.h> //for malloc()
#include <string.h> // for strcpy()
int main( void ) {
	char string1[] = "Alabama"; //making string with array of unspecified size
	char *string2 = "Arkansas"; //making string with char pointer
	puts(string1); //literally pass a pointer to puts()
	puts(string2); //^same here.
	
	//malloc
	//malloc is passed a byte size and returns an address.
	//the return address is that of the first byte of the reserved block.
	
	char *string3;
	//use the size of data type for saftey reasons
	string3 =  malloc(sizeof(char) * 100); //allocate space for 100 chars
	string3 = "I do love my ma and pa";
	puts(string3);
	
	char *string4;
	string4 = (char *) malloc(sizeof(char) * 100); //allocate space for 100 chars same as string3. notice the (char *) part.
	string4 = "but not the way I do love you";
	puts(string4);
	
	char string5[10];
	strcpy(string5, "Moats"); //strcpy ONLY works for strings at or under size.
	puts(string5);
	return 0;
}
