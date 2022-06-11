#include "main.h"

/**
 * print_alphabet - function prints alphabet in lower_case
 * Return: 0
 */
void print_alphabet(void)
{
	char current_char = 'a';

	while (current_char <= 'z')
	{
		_putchar(current_char);
		current_char++;
	}

	_putchar("\n");

	return (0);
}
