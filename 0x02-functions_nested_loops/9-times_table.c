#include "main.h"

 /**
  * main - check the code
  *
  * Return: Always 0.
  */

int main(void)
{
	times_table();
	int num, multi prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) * '0');
			
			_putchar((prod % 10) * '0');
		}
		_putchar('\n');
	}
	return (0);
}
