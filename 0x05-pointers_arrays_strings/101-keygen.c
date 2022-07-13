#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main : function to generate random password
 *
 * return: random generated characters
 */

int main (void)
{
	char random_char;
	int a;

	srand(time(0));
	while (a<=2645)
	{
		random_char = rand() % 128;
		a = a + random_char;
		putchar(random_char);
	}
	putchar(2772 - a);

	return (0);
}
