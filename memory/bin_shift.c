/* intprops - display information about an integer.
*
*  Usage: run the program and input the integer as prompted.
*  The program will tell whether the integer is
*  even, prime, and a perfect square; the program will count the number of
*  bits, one-bits, and decimal digits the integer contains.
*
*  John Paul Villamor, January 2019
*/

#include <stdio.h>
#include <stdlib.h>

/*Reads integer from user and returns it if legal. Exits program if input is 0.*/
int input();

/*Determines if argument x is divisible by 2. Returns 1 if argument is even, 0 if odd.*/
int is_even(int x);

/*Checks if argument x has factors other than 1 and itself. Returns 1 if prime.*/
int is_prime(int x);

/*Uses an addition algorithm to check if x is a perfect square. Returns square root if true, 0 if false.*/
int is_square(int x);

/*Determines the minimum bits to represent x. Uses iterative division by 2.*/
int min_bits(int x);

/*Uses iterative division and % by 2 to find the number of 1s in binary representation of x.*/
int ones_bits(int x);

/*Uses iterative division by 10 to determine number of needed digits.*/
int dec_digits(int x);

/*No return value or arguments, just the function that runs all the tests and is called in a loop in main().*/
void integer_properties();

int main( void )
{
    while (1)
    {
        integer_properties();
        printf("\n");
    }
    return 0;
}

int input()
{
    int in_num;
    do
    {
        printf("Enter a non-zero positive integer: ");
        scanf("%d", &in_num);
    }
    while (in_num < 0); /*Loop again if input is illegal.*/

    printf("\n");

    if (in_num > 0)
        return in_num;
    else
        exit(EXIT_SUCCESS);
}

int is_even(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

int is_prime(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (!is_even(x)) /*Every prime number that isn't 2 is ODD.*/
    {
        int test_factor = 3;
        while (test_factor < x) /*Tests every odd number less than the input if they are factors.*/
        {
            if (x % test_factor == 0)
                return 0;
            else
                test_factor += 2;
        }

        return 1; /*This statement is ONLY reached if every odd factor has been tested.*/
    }
    else if (x == 2)
        return 1;
    else /*Other even numbers fall here.*/
        return 0;
}

int is_square(int x)
{
    int int_copy = 0, test_delta = 1, increment_count = 0;
    /*
    A PERFECT SQUARE IS THE SUM OF CONSECUTIVE ODD INTEGERS starting at 1.
    int_copy will act as that sum, while test_delta will be incremented by 2
    to represent consecutive odd integers.

    SQUARE ROOT IS FOUND BY TAKING THE ARITHMETIC MEAN OF CONSECUTIVE ODD INTEGERS.
    With the sum being the square, simply divide this by the number of odd integer addends.
    increment_count will track the number of addends.
    */
    while (int_copy < x)
    {
        int_copy += test_delta;
        test_delta += 2;
        increment_count++;
    }

    if (int_copy == x) /*If the sum equals the tested integer, then it is indeed perfectly square.*/
        return (int_copy / increment_count); /*Square root*/
    else
        return 0;
}

int min_bits(int x)
{
    int number_of_bits = 0, int_copy = x;
    while (int_copy > 0)
    {
        int_copy /= 2;
        number_of_bits++;
    }

    return number_of_bits;
}

int ones_bits(int x)
{
    int number_of_ones = 0, int_copy = x, bit_shifts;
    
    for (bit_shifts = 0; bit_shifts < 32; bit_shifts++) /*an int has size 32 bits, so 32 shifts checks them all.*/
    {
    	if (int_copy & 1 << bit_shifts) /*bitwise operators to check for 1s*/
    		number_of_ones++;
    }

    return number_of_ones;
}

int dec_digits(int x)
{
    int int_copy = x, digits = 0;
    while (int_copy > 0) /*Powers of ten determines the number of digits. e.g., 123 > 10^2 therefore 3 digits are needed.*/
    {
        int_copy /= 10; /*Same principle as with binary digits.*/
        digits++;
    }

    return digits;
}

/*This is the output function that displays the required information.*/
void integer_properties()
{
    int test_num = input();
	int root;

    printf("Is the number even?  ");
    if (is_even(test_num))
        printf("Yes\n");
    else
        printf("No\n");

    printf("Is the number prime?  ");
    if (is_prime(test_num))
        printf("Yes\n");
    else
        printf("No\n");

    printf("Is the number a perfect square?  ");
   	root = is_square(test_num);
    if (root > 0)
        printf("Yes, the square root is %d\n", root);
    else
        printf("No\n");

    printf("How many bits?  ");
    printf("%d\n", min_bits(test_num));

    printf("How many ones?  ");
    printf("%d\n", ones_bits(test_num));

    printf("How many decimal digits?  ");
    printf("%d\n", dec_digits(test_num));
}
