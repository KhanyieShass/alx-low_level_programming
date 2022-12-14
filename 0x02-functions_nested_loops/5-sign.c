#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number of the sign to be displayed
 * Return: 1 if number is bigger than zero
 * 0 of number is zero
 * -1 is number is smaller than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('_');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('_');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
