/* bit_ops.c
*  bitwise operators | & ^ and ~
*/

#include <stdio.h>

int main( void )
{
	int num1 = 125; /* 1111101 */
	int num2 = 78;  /* 1001110 */

	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	printf("complement of %d = %d\n", num1, ~num1);
	printf("complement of %d = %d\n", num2, ~num2);


	return 0;
}
