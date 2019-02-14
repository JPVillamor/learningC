#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void append(char *str, char c) {
	for (; *str; str++); //null for loop to get to end of str
	*str++ = c;
	*str++ = 0;
}

int main( void ) {
	char ch, file_name[25], current_str[128];
	FILE *fp;

	printf("Enter name of a file you wish to see\n");
	scanf("%s", file_name);

	fp = fopen(file_name, "r"); // read mode

	if (fp == NULL) {
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}

	while((ch = fgetc(fp)) != EOF) {
		if (ch != '\n') {
			append(current_str, ch);
		}
		else {
			puts(current_str);
		}
	}

	fclose(fp);
	
	printf("\n");
	
	return 0;
}
