#include <stdio.h>
int main (void) {
	char letter, *ptr; //a pointer is declared with a type and a * before its name. NEVER use uninitialized pointers.
	ptr = &letter; //the ADDRESS of (&) letter is assigned to ptr.
	letter = 'k';
	
	printf("pointer address of letter: %p\n", ptr); //this will print the ADDRESS that ptr points to, which is also the address of letter.
	printf("ampersand address of letter: %p\n", &letter);
	printf("indirect value of letter: %c\n", *ptr); //this will print out the CONTENTS of ptr and the value of letter.
	printf("direct value of letter: %c\n", letter);
	
	puts("");
	
	//Using pointers for arrays:
	char array[10];
	
	for (int i = 0; i < 10; i++) {
		printf("%p\n", &array[i]); 
		//the adresses will increment by 1 because the size of char is 1 byte.
		//giving these elements values:
		array[i] = 'e';
	}
	
	puts("");
	
	char *p_array = array;
	//demonstrates that these all access the same address:
	printf("pointer address of array: %p\n", p_array); 
	printf("ampersand address of array: %p\n", &array);
	printf("address of first element: %p\n", &array[0]);
	
	puts("");
	
	for (int i = 0; i < 10; i++) {
		printf("%p: %c\n", p_array, *p_array++); //only increment one of them. the first is used for address the second for content, THEN increment.
	}
	
	//other pointer stuff
	
	puts("");
	
	//you can subtract pointers to see their distance from one another, provided they point to elements of the same array.
	
	char *ptr1, *ptr2;
	ptr1 = &array[1];
	ptr2 = &array[9];
	int d = ptr2 - ptr1;
	printf("ptr2 and ptr1 are %d elements apart.\n", d);
	
	//you can compare pointers
	
	puts("");
	
	printf("is ptr1 after ptr2? ");
	if (ptr1 > ptr2)
		puts("yeah.");
	else
		puts("nah.");
	
	puts("");
	
	for (int i = 0; i < 10; i++) {
		//demonstrate equivalence of pointer notation and array subscript notation
		printf("%c == %c\n", *(array + i), array[i]); 
	}

	return 0;
}
