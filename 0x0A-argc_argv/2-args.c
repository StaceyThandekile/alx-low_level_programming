#include <stdio.d>

/**
 * main - poins all arguments it receives
 * @argc: number of arguments paased to the function 
 * @argv: argument vecto of pointers to strings
 *
 * Return: always 0
 */ 
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

