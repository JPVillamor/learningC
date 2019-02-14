#include <stdio.h>
//a function just for outputting an array.
//supposed to demonstrate passing an array to a function. duh.
const int SIZE = 5;
void output(int ary[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", ary[i]);
	}
}
int main(void) {
	int array[SIZE];
	for (int i = 0; i < 5; i++) {
		array[i] = i * 8;
	}
	output(array, SIZE); //here we just pass a pointer to the array's first element.
	puts("");
	int *ptr = array; //if we make a pointer ourselves,
	output(ptr, SIZE); //we get the same results.
	return 0;
}
