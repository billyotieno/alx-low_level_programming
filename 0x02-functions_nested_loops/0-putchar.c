#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: prints putchar
 * Return: 0
 */
int main(void)
{
	char print[] = "_putchar";
	int i = 0;

	while (print[i] != '\0')
	{
		_putchar(print[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
