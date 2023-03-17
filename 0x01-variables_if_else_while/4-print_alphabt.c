#include <stdio.h>
/**
 * main - Entry point
 * Description "print alphabets except q and e"
 * Return: Always 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 48 || n == 57)
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
