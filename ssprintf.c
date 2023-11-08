#include "shell.h"

/**
 *ssprintf - a function that prints a formatted string to the standard output
 *@input : sring to print
 *@streams : output
 *Return : void
 */

void ssprintf(char *input, int streams)
{
	while (*input != '\0')
	{
	write(streams, input, 1);
	input++;
	}
}
