#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: bytes to include of s2
 * Return: NULL if false
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int strlen1, v, u;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);
	p = malloc((strlen1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (v = 0, u = 0; v < (strlen1 + n); i++)
	{
		if (v < strlen1)
			p[v] = s1[v];
		else
			p[v] = s2[u++];
	}
	p[v] = '\0';

	return (p);
}

/**
 * _strlen - function finds string length
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
