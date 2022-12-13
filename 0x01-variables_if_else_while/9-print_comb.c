#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 10; n < 20; n++)
	{
		putchar((n % 10) + '0');
		if (n != 19)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	}
	return (0);
}
