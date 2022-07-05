#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers up to 98
 * @n: first parameter
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(" ,");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(" ,");
		}
	}
}
