#include <stdio.h>
/**
 * main - Entry point
 * Description "print alphabets except q and e"
 * Return: Always 0
*/
int main(void)
{
	int n = 98;

	while (n <= 122)
	{
		if (n == 101 || n == 133)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
