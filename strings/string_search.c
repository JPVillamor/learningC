/* string_search.c 
*  demonstrate searching string.h library functions
*/


#include <stdio.h>
#include <string.h>

int main( void ) 
{
	char *loc, test_string[] = "How now Brown Cow?";
	char search_test1[] = "Cat";
	char search_test2[] = "How now what?";
	char search_test3[] = "Cow";
	int test_char = 'B'; 
	long unsigned int index;

	/*
	*  char *strchr(const char *str, int ch);
	*   returns pointer to 1st occurrence of ch in str.
	*   returns null if not found.
	*   Case-sensitive!
	*/
	
	printf("Searching within: %s\n", test_string);
	printf("Searching for: %c\n", test_char);
	loc = strchr(test_string, test_char);
	printf("%c found @ pos: %ld\n", test_char, loc - test_string);

	/*
	*  char *strrchr(const char *str, int ch);
	*   identical to strchr() but looks for last occurrence.
	*/

	/*
	*  size_t strcspn(const char *str1, const char *str2);
	*   searches str1 for 1st matching char in str2.
	*   returns offset (index) of found char
	*   returns strlen(str1) if not found.
	*/
	
	printf("Searching within: %s\n", test_string);
	printf("Searching for chars in: %s\n", search_test1);
	printf("Found at: %lu\n", strcspn(test_string, search_test1));

	/*
	*  size_t strspn(const char *str1, const char *str2);
	*   searches for where str1 and str2 stop matching.
	*   returns length of str1 that matches with str2.
	*   returns 0 if no match.
	*/

	printf("Searching within: %s\n", test_string);
	printf("Searching for string: %s\n", search_test2);
	index = strspn(test_string, search_test2);
	printf("Stop matching @: %lu\n", index);	

	/*
	*  char *strpbrk(cosnt char *str1, const char *str2);
	*   works like strcspn() but 
	*   returns NULL if no match.
	*/

	/*
	*  char *strstr(const char *str1, const char *str2);
	*   searches str1 for entire str2.
	*   returns pointer to 1st occurrence, NULL if no match
	*   returns str1 if strlen(str2) == 0.
	*/

	printf("Searching within: %s\n", test_string);
	printf("Searching for string: %s\n", search_test3);
	loc = strstr(test_string, search_test3);
	printf("Found at: %ld\n", loc - test_string);


	return 0;
}
