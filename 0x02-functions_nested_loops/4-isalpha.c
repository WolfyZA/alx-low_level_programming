#include "main.h"
/**
  *_isalpha - Will check for uppercase and lowercase letters for 1, otherwise 0
  *
  *@c: ASCII code
  *
  *Return: will return 1 if uppercase or lowercase letter, otherwise 0
  */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
