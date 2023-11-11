#include "shell.h"
/**
 * _strngtok - implementation of strtok function
 * @str: string to tokenize
 * @dlm: delimeter
 * Return: an array of strings
 */
char **_strngtok(char *str, char *dlm)
{
	char **strgs = NULL, *cpy = NULL, *temp;
	int m, n, num_toks = 0;

	if (!str)
		return (NULL);
	cpy = strdup(str);
	if (!cpy)
		exit(EXIT_FAILURE);
	temp = strtok(cpy, dlm);
	while (temp != NULL)
	{
		num_toks++;
		temp = strtok(NULL, dlm);
	}
	free(cpy);
	strgs = malloc(sizeof(char *) * (num_toks + 1));
	if (!strgs)
		exit(EXIT_FAILURE);
	temp = strtok(str, dlm);
	while (temp != NULL)
	{
		strgs[m] = strdup(temp);
		if (!strgs[m])
		{
			for (n = 0; n < m; n++)
				free(strgs[n]);
			free(strgs);
			exit(EXIT_FAILURE);
		}
		m++;
		temp = strtok(NULL, dlm);
	}
	strgs[m] = NULL;
	return (strgs);
}
