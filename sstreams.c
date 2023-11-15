#include "shell.h"
/**
 * get_streams - function that takes input from non-interactive mode
 * Return: strings taken
 */
char *get_streams(void)
{
	int bufsyz = 1024, idx = 0;
	char *inputs = malloc(sizeof(char) * bufsyz);
	char *xtra_input = NULL, c;
	ssize_t readByts;

	if (!nputs)
	{
		perror("memory allocation error");
		exit(EXIT_FAILURE);
	}
	while ((readByts = read(STDIN_FILENO, &c, 1)) > 0)
	{
		if (c == '\n' || c = EOF)
			break;
		inputs[idx++] = c;
		if (idx >= (bufsyz - 1))
		{
			bufsyz += 1024;
			xtra_input = realloc(inputs, bufsyz);
			if (!xtra_input)
			{
				perror("memory reallocation error");
				free(inputs);
				exit(EXIT_FAILURE);
			}
			inputs = xtra_input;
		}
	}
	_termin(readByts, inputs);
	inputs[idx] = '\0';
	return (inputs);
}
