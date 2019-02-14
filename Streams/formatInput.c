#include <stdio.h>
#include <stdlib.h>

//handles extra characters in formatted input

void clear_kb(void); //function to clear stdin

int main( void ) {
	int x, y;
	puts("Enter two integers separated by space");
	scanf("%d %d", &x, &y); //must be inputted with space in between!

	//in the case of extra inputted characters, those are
	//left in stdin and may cause problems.

	int age;
	char *name = malloc(257 * sizeof(char));
	puts("Enter your age: ");
	scanf("%d", &age);
	
	//clear_kb();
	fflush(stdin);

	puts("Enter your first name: ");
	scanf("%s", name);
	
	printf("Your age is %d\n", age);
	printf("Your name is %s\n", name);

	free(name);

	return 0;
}

void clear_kb(void) {
	char junk[80];
	gets(junk);
}
