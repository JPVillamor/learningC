#include <stdio.h>

int main( void ) {
	//the following are equivalent:
	char message1[] = "Hello world";
	char *message2 = "He needs some milk";
	puts(message1);
	puts(message2);
	
	//array of pointers to type char

	char *message[10] = { "one", "two", "three" };
	printf("%c @ %p\n", *message[0], message[0]);
	printf("%c @ %p\n", *message[1], message[1]);
	printf("%c @ %p\n", *message[2], message[2]);

	printf("%s @ %p\n", message[0], message[0]);
	printf("%s @ %p\n", message[1], message[1]);
	printf("%s @ %p\n", message[2], message[2]);

	return 0;
}
