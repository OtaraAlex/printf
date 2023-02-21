#include "main.h"
/**
 * _puts - print string charater
 * @s: string
 * Return: void
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
