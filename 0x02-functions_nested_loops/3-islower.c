#include "main.h"
/**
  *_islower - shows 1 if the character is lowercase, otherwise show 0
  *
  *@c: the character in ASCII
  *
  *Return: 1 for lowercase, 0 for otherwise
  */
int _islower(int c)
{
	int a;

	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
