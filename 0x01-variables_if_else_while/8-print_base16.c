#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/***
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "0123456789abcdef"
 * Return: Always 0
*/
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
