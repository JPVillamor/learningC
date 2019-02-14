#include <stdio.h>

int main( void ) 
{
	char string1[257];
	
	printf("What is your last name? ");
	scanf("%s", string1); 
	//scanf only reads from the first nonwhitespace char up to but excluding the next whitespace char.
	
	printf("Your last name is %s\n", string1); 
	//string1 is a pointer, which is what scanf needs. If it were a variable we would need &

	puts("");

	//you can specify the chars each %s accepts.
	printf("What is the current month? ");
	scanf("%3s", string1);
	printf("The month is %s\n", string1);

	puts("");
	return 0;
}
