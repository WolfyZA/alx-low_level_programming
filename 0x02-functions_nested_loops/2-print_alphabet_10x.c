#include "main.h"
/**
  *print_alphabet_10x - prints alphabet lowercase 10 times
  *
  *Return: always 0
  */
void print_alphabet_10x(void)
{
	int a;
	int b;

	for (b = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
