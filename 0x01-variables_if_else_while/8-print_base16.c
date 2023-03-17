#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - print the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "0123456789abcdef"
 * Return: 0
*/
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 97; m <= 182; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
