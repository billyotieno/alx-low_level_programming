#include <stdio.h>
#include <stdlib.h>

/**
* main - main func
* @argc: integer argument count
* @argv: char type argument array
* description: print opcode
* Return: none
*/
int main(int argc, char **argv)
{
int count;

count = 0;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
while (count < atoi(argv[1]))
{
	printf("%02x", *((unsigned char *)main + count));
	count++;
	if (atoi(argv[1]) > count)
	{
	printf(" ");
	}
}
	printf("\n");
	return (0);
}
