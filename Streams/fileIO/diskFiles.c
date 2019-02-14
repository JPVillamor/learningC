#include <stdio.h>
#include <stdlib.h>

/*clears the keyboard/stdin of extra characters*/
void clear_kb();

/*return pointer to file if opened successfully.*/
FILE *open_file(char *filename, char *mode);

/*input text from file char by char then display.*/
void read_text(FILE *current_file);

/*output text into file*/
void write_text(FILE *current_file);

/*deletes the current file with given name*/
void del_file(FILE *current_file);

/*renames currently open file*/
void rename_file(FILE *current_file);

/*copies content of file into new file*/
void copy_file(FILE *current_file):

/*creates a temporary file*/
void temp_file(FILE *current_file);

/*set verbose option to display byte depth*/
void setOptions(bool &verbose);

int main( void ) 
{
	char *filename = (char *) malloc(257 * sizeof(char));
	char *mode = (char *) malloc(3 * sizeof(char));
	FILE *current_file;
	int menu_option = 0;

	/*menu of file IO and management options*/
	while (1)
	{
		puts("");
		puts("[1]\topen");
		puts("[2]\tread file");
		puts("[3]\twrite to file");
		puts("[4]\tdelete file");
		puts("[5]\trename file");
		puts("[6]\tcopy file");
		puts("[7]\tmake temp file");
		puts("[8]\toptions");
		puts("[9]\texit program");
		printf(">>>\t");
		scanf("%d", &menu_option);

		switch(menu_option)
		{
			case 9:
				exit(0);
			case 1:
				current_file = open_file(filename, mode);
				break;
			case 2:
				read_text(current_file);
				break;
		}
	}

	return 0;
}

void clear_kb()
{
	char junk[80];
	fgets(junk, 80, stdin);
}

FILE *open_file(char *filename, char *mode)
{
	FILE *file_ptr;

	/*clear keyboard of extra interfering chars*/
	clear_kb();

	printf("filename: ");
	/*fgets(filename, 257, stdin);*/
	gets(filename);
	printf("mode: ");
	/*fgets(mode, 3, stdin);*/
	gets(mode);

	/*find a way to use fgets and exclude linefeeds! (above)*/
	
	if ( (file_ptr = fopen(filename, mode)) == NULL )
	{
		fprintf(stderr, "error opening %s in %s mode.\n", 
		filename, mode);
	}
	else 
	{
		printf("opened %s in %s mode.\n", filename, mode);
		return file_ptr;
	}
}

void read_text(FILE *current_file)
{
	char tmp;

	while ( !feof(current_file) )
	{
		tmp = getc( current_file );
		if (tmp != -1)
			printf("%c", tmp);
	}
}
