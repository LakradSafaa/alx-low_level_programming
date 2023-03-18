#include<stdio.h>
/**
 * main - Entry point
 * Description: print all possible different
 *	combinations of two digits.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digitl = 0, digit2;

	while (digitl <= 9)
	{
		digit1 = 0;
		while (digit2 <= 9)
		{
			if (digitl != digit2 && digitl < digit2)
			{
				putchar(digitl + 48);
				putchar(digit2 + 48);
				if (digitl + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;

		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
