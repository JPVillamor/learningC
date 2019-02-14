//JP Villamor
//Linked List data structure in C

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;				//stored data
	struct Node *next;		//pointer to next node
};

struct Node *new;			//used for adding to list
struct Node *head = NULL;	//the beginning node
int *num;					//dynamically allocated pointer 
								//for adding new values

void printList() {
	if (head == NULL) 
		puts("LIST EMPTY");
	else {
		printf("(head) ");
		if (head->next == NULL)					//only 1 element
			printf("%d -> NULL", head->data);
		else {									//multiple elements
			struct Node *current = head;
			do {
				printf("%d -> ", current->data);
				current = current->next;
			} while (current != NULL);
			puts("NULL");	
		}
	}
}

void addToList() {
	//create new instance of Node:
	new = (struct Node*)malloc(sizeof(struct Node));
	num = malloc(sizeof(int));			//for when we give it value
	printf("data: ");
	scanf("%d", num);
	new->data = *num;
	new->next = NULL;
	if (head == NULL) {					//adding first item
		head = new;
		head->next = NULL;
	} else if (new->data <= head->data) {	//add before head
		new->next = head;
		head = new;
	} else {
		if (head->next == NULL) {		//add right after head
			head->next = new;
			new->next = NULL;
		} else {						//add to middle
			struct Node *current = head;
			while(current->next != NULL) {
				if (current->data <= new->data &&
					current->next->data > new->data) {
					new->next = current->next;
					current->next = new;
					break;
				}
				current = current->next;
			}
			if (current->next == NULL) {	//add to tail
				current->next = new;
				new->next = NULL;
			}
		}
	}
}

void deleteFromList() {
	int tmp;
	printf("delete: ");
	scanf("%d", &tmp);
	if (head == NULL) {
		puts("LIST EMPTY");
	} else if (head->data == tmp) {		//skips head to delete it
		head = head->next;
	} else {
		struct Node *current = head;
		while (current->next != NULL) {
			if (current->next->data == tmp) {
				current->next = current->next->next;	//skip if ==
				break;
			}
			current = current->next;
		}
	}
}

int main( void ) {	
	int userOption = 1;
	while (userOption != 0) {
		puts("========================");
		puts("* 1 | print list       *");
		puts("* 2 | add to list      *");
		puts("* 3 | delete from list *");
		puts("* 4 | clear list       *");
		puts("* 0 | exit             *");
		puts("========================");
		printf(">>> | ");
		scanf("%d", &userOption);

		switch(userOption) {
		case 0:
			puts("");
			puts("exiting...\n");
			free(head);
			free(new);
			free(num);
			exit(0);
		case 1:
			puts("");
			printList();
			puts("");
			break;
		case 2:
			puts("");
			addToList();
			puts("");
			break;
		case 3:
			puts("");
			deleteFromList();
			puts("");
			break;
		case 4:
			puts("");
			head = NULL;
			puts("LIST CLEARED");
			puts("");
			break;
		}
	}

	return 0;
}
