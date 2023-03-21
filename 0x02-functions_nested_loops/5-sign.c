#include "main.h"
/**
  *print_sign - will check and print for positive, zero or negative
  *
  *@n: ASCII code
  *
  *Return: returns 1 if postive, returns 0 if zero, returns -1 if negative
  */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
