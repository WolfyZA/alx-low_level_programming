#include <stdio.h>
/**
*main - entry point
*Description: 'alphabet in lowercase'
*Return: always 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		printf('\n');
	}
	return (0);
}
