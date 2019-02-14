//intro to structs.
//structs are useful when vars of diff types should be treated as groups.
#include <stdio.h>

struct coord {
	int x, y; //variables within a struct are properly called 'members'
}; //you can declare instances right before the semicolon

struct time {
	int hour, min, sec;
} now = { 17, 22, 20 }; //declare and initialize instance.

int main( void ) {
	struct coord now, next; //other way of creating instances. here we're using the struct template
	next.x = 4;
	next.y = 10;
	
	printf("%d is next x\n", next.x);
	printf("%d is next y\n", next.y);
	
	//now the great time-saving feature of structs:
	now = next; //this is equilvalent to assigning the variables individually
	printf("%d is now x\n", now.x);
	printf("%d is now y\n", now.y);
	
	return 0;
}
