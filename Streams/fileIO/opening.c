#include <stdio.h>

int main( void ) 
{
	FILE *pFile;
	char filename[] = "basictext";

	/*always check for errors this way: */
	if ((pFile = fopen(filename, "r")) == NULL) 
		printf("error opening %s in r mode.\n", filename);
	else 
	{
		printf("opened %s in r mode.\n", filename);
		fclose(pFile);
	}

	return 0;
}
