#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function that prints strings
* @separator: character pointer
* @n: unsigned int type
* description: prints string & new line
* Return: None
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list x;
char *ptr;

va_start(x, n);
for (i = 0; i < n; i++)
{
	ptr = va_arg(x, char *);
if (ptr != NULL)
	printf("%s", ptr);
else
	printf("(nil)");
if (i < (n - 1) && separator != NULL)
	printf("%s", separator);
}
	printf("\n");
	va_end(x);
}
