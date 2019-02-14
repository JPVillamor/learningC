/* Time.c
*  demonstrate capabilities of the time C library
*/

#include <stdio.h>
#include <time.h>

int main( void )
{
	time_t since1970, now, before;
	char *format_time;

	since1970 = time(0);

	printf("It has been %lu seconds since Jan. 1, 1970. ", since1970);
	puts("You're welcome.\n");

	now = time(0);
	format_time = asctime(localtime(&now));

	fputs("It is now ", stdout);
	puts(format_time);
	/* 
	the above can be formatted better using strftime() 
	size_t strftime(char *s, size_t max, char *fmt, struct tm *ptr);
	*/

	printf("%.3f s since execution.\n", (double)clock()/100);

	before = time(0);
	now = before;

	while (1)
	{
		do 
		{
			now = time(0);
		}
		while (difftime(now, before) < 1);
		before = now;
		format_time = ctime(&now);
		puts(format_time);
	}

	return 0;
}
