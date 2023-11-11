#include "shell.h"
/**
 * freetoks - frees the mem allocated by _strngtok
 * @toks: tokens to free up
 */
void freetoks(char **toks)
{
	unsigned int n;

	if (!toks)
		return;
	for (n = 0; toks[n]; n++)
		free(toks[n]);
	free(toks);
}

/**
 * print_toks - prints an array of strings
 * @tok: strings to print
 */
void print_toks(char **tok)
{
	int n = 0;

	while (tok[n])
	{
		printf("Token[%d] = %s\n", n, tok[n]);
		n++;
	}
}
