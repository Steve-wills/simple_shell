#include "shell.h"
/**
 * ssputs - prints a string to stdout
 * @str: pointer to the string
 */
void ssputs(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		ssputchar(str[i]);
	}
	ssputchar('\n');
}

/**
 * _strlen - returns length of a string
 * @str: string to check
 * Return: the length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _sub_str - function that locates a substring
 * @hay: string to search in
 * @pin: the substring to look for
 * Return: pointer to the substring or NULL if not found
 */
char *_sub_str(char *hay, char *pin)
{
	int m, n;

	for (m = 0; hay[m] != '\0'; m++)
	{
		for (n = 0; pin[n] != '\0'; n++)
		{
			if (hay[m + n] != pin[n])
				break;
		}
		if (!pin[n])
			return (&(hay[m + _strlen(pin) + 1]));
	}
	return (NULL);
}
