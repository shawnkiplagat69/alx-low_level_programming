#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void);
{
	int i, j;

	for(i = 0, i <= 10, i++)
	{
		for(j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
}
