#include "shell.h"

/**
 * ssputchar - writes a single character
 * @c: character to be printed
 * Return: 1 on success, -1 on error
 */

int ssputchar(char c)
{
	return (write(1, &c, 1));
}
