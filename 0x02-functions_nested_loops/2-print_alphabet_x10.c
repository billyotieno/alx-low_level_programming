#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet (a-z) 10 times
 * Return: None
 */
void print_alphabet_x10(void)
{
	char current_char = 'a';
	int count = 0;

	while (count < 10)
	{

		while (current_char <= 'z')
		{
			_putchar(current_char);
			current_char++;
		}

		_putchar("\n");
		count++;
	}
}
