#include <stdio.h>
#include <string.h>
struct data {
	char fname[30]; //array so & is not needed for scanf
	char lname[30];
	char phone[13];
};

struct moreData {
	char job[30];
};

struct data list[4]; //made an array of structs type data.

struct moreData mini[2]; //array of structs type moreData;

int main( void ) {
	/*
	for (int i = 0; i < 4; i++) {
		printf("Name: ");
		scanf("%s %s", list[i].fname, list[i].lname); //name written on one line, assigned to struct members
		printf("Phone #: ");
		scanf("%s", list[i].phone);
	}

	puts("");

	for (int i = 0; i < 4; i++) {
		printf("%s %s\n%s\n", list[i].fname, list[i].lname, list[i].phone);
	}
	
	puts("");
	*/
	//accessing members
	strcpy(mini[0].job, "plumber");
	strcpy(mini[1].job, "teacher");
	printf("%s\n%s\n", mini[0].job, mini[1].job);
	
	puts("");

	strcpy(mini[0].job, mini[1].job);
	printf("%s\n%s\n", mini[0].job, mini[1].job);
	return 0;
}
