#include <stdio.h>
int main( void ) {
	char p1[257], p2[257], p3[257];
	printf("Name 3 planets: ");
	scanf("%s %s %s", p1, p2, p3);
	printf("Your 3 planets are %s, %s, and %s\n", p1, p2, p3);
	return 0;
}
