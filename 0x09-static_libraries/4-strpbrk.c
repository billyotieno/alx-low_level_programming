#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0') /*Declaring WHILE*/
{
j = 0;
while (accept[j] != '\0')  /*Evaluating *accept*/
{
if (*s == accept[j])
{
return (s);
}

j++; /*add j+1*/
}

s++; /*add s+1*/
}
return (0);

}
