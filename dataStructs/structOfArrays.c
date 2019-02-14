//you can have a struct of arrays.
//pointer and access rules remain the same as outside of structs.
#include <stdio.h>
#define NAMESIZE 100 //DO NOT USE CONST INT FOR ARRAY SIZES

struct data {
	float score;
	char fn[NAMESIZE];
	char ln[NAMESIZE];
} record;

int main( void ) {
	printf("Student first and last name\nseparated by space: ");
	scanf("%s %s", record.fn, record.ln); //no & because the names of arrays are their pointers.
	printf("Enter the student's test sore out of 100: ");
	scanf("%f", &record.score);
	printf("%s %s scored a %.2f%% on the last test.\n", record.fn, record.ln, record.score);
	return 0;
}
