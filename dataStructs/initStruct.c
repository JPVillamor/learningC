#include <stdio.h>
//just a struct
struct customer {
	char firm[30];
	char contact[30];
} first = {
	"Wayne Enterprises",
	"Bruce Wayne"
};
//initialized struct with ordinary members

//struct within struct:
struct sale {
	struct customer buyer;
	char item[30];
	float amount;
} mySale = { { "Acme Industries", "George Adams" },
	"widget",
	1000.00
	};
//initialized the struct type entry in innermost {} 
//then initialized other member of struct type sale.

//arrays of structs:
struct customer y2018[] = {
	{ "Queen Industres", "Oliver Queen" },
	{ "Wilson & Co.", "Ed Wilson" }
};

int main( void ) {
	return 0;
}
