#include <stdio.h>

//pointers to pointers

int main( void ) {
	int number = 12;
	int *pNum = &number;
	int **ppNum = &pNum; //double indirection
	printf("%d\n", **ppNum);

	//addresses:
	printf("number: %p\n", &number);
	printf("pointer to number: %p\n", &pNum);
	printf("pointer to pointer to number: %p\n", &ppNum);

	return 0;
}
