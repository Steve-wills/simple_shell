#include "shell.h"
/**
 * _strgtokn - function that tokenizes an input
 * @str: string to be tokenized
 * @dlm: the delimeter
 * Return: the tokenized strings
 */
char **_strgtokn(char *str, char *dlm)
{
	int num_toks = 0, m = 0, n = 0;
	char **strgs = NULL, *cpy = NULL, *tokn, *posit;

	if (!str || !dlm)
		return (NULL);
	cpy = strdup(str);
	if (!cpy)
		exit(EXIT_FAILURE);
	tokn = strtok(cpy, dlm);
	while (tokn != NULL)
	{
		num_toks++;
		tokn = strtok(NULL, dlm);
	}
	free(cpy);
	strgs = malloc(sizeof(char *) * (num_toks + 1));
	if (!strgs)
		exit(EXIT_FAILURE);
	posit = str;
	while ((tokn = strtok(posit, dlm)) != NULL)
	{
		if (*tokn != '\0')
		{
			strgs[m] = strdup(tokn);
			if (!strgs[m])
			{
				for (n = 0; n < m; n++)
					free(strgs[n]);
				free(strgs);
				exit(EXIT_FAILURE);
			}
			m++;
		}
		posit = NULL;
	}
	strgs[m] = NULL;
	return (strgs);
}
