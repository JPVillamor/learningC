#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int main( void ) {
	int (*fPtr)(int, int);
	char op;
	int x = 9, y = 4;
	puts("+ for plus \n- for minus \n");
	scanf("%c", &op);
	if (op == '+')
		fPtr = add;
	else if (op == '-')
		fPtr = subtract;
	printf("%d\n", fPtr(x, y));

	return 0;
}
