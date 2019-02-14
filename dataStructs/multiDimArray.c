#include <stdio.h>

int main( void ) {
	int multi[2][4];
	//think of multi as an array of arrays.
	//it holds two arrays, each holding 4 int elements.

	printf("%p\n", multi); //lacking brackets = pointer
	printf("%p\n", multi[0]);
	printf("%p\n", &multi[0][0]);

	//the first element of multi is 
	//not the int multi[0][0], it 
	//is actually multi[0], which
	//itself is an array.

	//sizes

	printf("multi size: %lu\n", sizeof(multi)); 
	//32, since 4 ints = 16 and 2 * 16 is 32
	printf("multi[0] size: %lu\n", sizeof(multi[0]));
	//16, since 4 int array is size 16
	printf("multi[0][0] size: %lu\n", sizeof(multi[0][0]));
	//4, a single int is 4 bytes large

	//pointer arithmetic

	//multi is a pointer to the first element, multi[0],
	//which is an array of size 16
	printf("multi @ %p\n", multi);
	//this was the first element, multi[0]
	printf("multi+1 @ %p\n", multi+1);
	//the pointer jumped by 16, the size of 1 multi element.
	printf("multi[1] @ %p\n", &multi[1]);
	
	//accessing array data
	
	multi[0][0] = 12;
	printf("%d\n", multi[0][0]);
	printf("%d\n", *multi[0]);
	printf("%d\n", **multi);
	
	//pointers to elements

	int (*ptr)[4]; //a pointer to a 4-element int array
	ptr = multi; //now points to the first element of multi

	//pass arrays to functions using pointers
	//remember that a pointer types int and int array don't match;
	//use typecasting!

	return 0;
}
