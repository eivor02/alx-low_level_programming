#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i, nbytes;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <number of bytes>\n", argv[0]);
		return EXIT_FAILURE;
	}

	nbytes = strtol(argv[1], NULL, 10);

	if (nbytes <= 0)
	{
		fprintf(stderr, "Error: Number of bytes must be a positive integer.\n");
		return EXIT_FAILURE;
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", ((unsigned char *) main)[i]);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return 0;
}
