#include "shell.h"

/**
 * userinput - handles the userinput
 *
 * Return: a string containing the user input
 */
char *userinput(void)
{
	char *input = NULL;
	size_t length = 0;

	if (getline(&input, &length, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(input);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(input);
			perror("Not found");
			exit(EXIT_FAILURE);
		}
	}

	return (input);
}
