#include "function_pointers.h"

/**
  * print_name - Prints name from a func pointer
  * @name: character string
  * @f: function pointer that takes a string character
  */
void print_name(char *name, void (*f)(char *))
{
	f(*name);
}
