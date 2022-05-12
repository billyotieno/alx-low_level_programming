#include <stdio.h>
#include <stdlib.h>

/**
  * main - function prints file it was compiled from
  * Description: prints function it was compiled from
  * Return: 0
  *
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
