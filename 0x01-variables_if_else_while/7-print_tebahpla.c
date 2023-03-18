#include <stdio.h>
/**
  *main - entry point
  *Description: 'alphabet in lowercase backwards'
  *Return: always 0
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		{
		putchar(ch);
		}
	putchar('\n');
	return (0);
}
