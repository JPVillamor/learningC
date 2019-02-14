#include <stdio.h>

struct Adder { //a simple struct with addend ints and a pointer to function that adds them.
	int addend1;
	int addend2;
	int (*sumPtr)(int, int); //declares function pointer that takes int parameters
} addInt; //initialization of Adder instance

int sum(int a, int b) { //the actual adding function is outside the struct
	return a + b;
}

int main( void ) {
	addInt.addend1 = 3; //initializing members
	addInt.addend2 = 4; //ditto
	addInt.sumPtr = &sum; //assigns pointer to address of adding function
	printf("%d\n", (*addInt.sumPtr)(addInt.addend1, addInt.addend2));
	return 0;
}
