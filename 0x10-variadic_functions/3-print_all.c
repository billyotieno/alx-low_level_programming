#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print all values
* @format: char type pointer to string
* description: prints all and a new line
* Return: None
*/
void print_all(const char * const format, ...)
{
int c;
char *str;
char *space;
va_list ap;

va_start(ap, format);
c = 0;
while (format && format[c])
{
space = "";
if (format[c + 1])
space = ", ";
switch (format[c])
{

case 'c':
printf("%c%s", va_arg(ap, int), space);
break;
case 'i':
printf("%d%s", va_arg(ap, int), space);
break;
case 'f':
printf("%f%s", va_arg(ap, double), space);
break;
case 's':
str = va_arg(ap, char *);
if (!str || !*str)
str = "(nil)";
printf("%s%s", str, space);
break;
}
c++;
}
printf("\n");
}
