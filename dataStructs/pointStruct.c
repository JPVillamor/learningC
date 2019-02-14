#include <stdio.h>

struct data {
	int *value; //uninit!
	int *rate; //uninit!
	char *message; //uninit!
} first;

struct basic {
	int num;
};

int plusOne(struct basic x);

int main( void ) {
	int cost = 4; //variables given values
	int interest = 5;

	first.value = &cost; 		//addresses of variables assigned to pointers
	first.rate = &interest; //pointers point to values now
	
	//output addresses, then values
	printf("%p\n%p\n", first.value, first.rate);
	printf("%d\n%d\n", *first.value, *first.rate); //don't forget indirection operator when accessing pointed-to object
	
	//make a string
	first.message = "Hello world";
	printf("%d\n", *first.message); //an asterisk gives the first element.
	printf("%s\n", first.message); 	//the pointername will give the string.
	//advantage of using pointers:
		//not limited to size set by char array
		//struct only stores the pointer not the string.
	
	//pointers to structs
		//often used when passing structs as arguments
	struct data *p_first; //pointer (not instance) of type data to the first instance of data
	p_first = &first;
	printf("%p == %p == %p\n", &first, &first.value, p_first); //demonstrate equivalence
	//the pointer to the struct will point to the beginning of its first member.
	
	//access struct members with pointer:
	struct basic item;
	item.num = 69;
	struct basic *p_item;
	p_item = &item;
	printf("%d\n", item.num); 			//method 1
	printf("%d\n", (*p_item).num); 	//method 2
	printf("%d\n", p_item->num); 		//method 3
	
	//pointers accessing structs in arrays
	struct basic stuff[100];
	struct basic *p_stuff;
	p_stuff = stuff; //the same as p_stuff = &stuff[0];
	(*p_stuff).num = 56;
	printf("%d\n", p_stuff->num);
	//printing everything in an array of structs
	for (int i = 1; i < 100; i++) {
		stuff[i].num = i * 3;
	}
	for (int i = 0; i < 100; i++) {
		printf("%d\n", p_stuff->num);
		p_stuff++; 	//the address is incremented by the size of the object pointed to, 
								//thus iterating through the array of structs.
	}
	//passing structs as arguments
	printf("%d\n", plusOne(item)); //item was 69, should be displayed as 70
	return 0;
}

int plusOne(struct basic x) {
	return x.num + 1; //had this function been passed a pointer, we would be using the -> to access members.
}
