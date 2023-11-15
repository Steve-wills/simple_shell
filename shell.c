#include "shell.h"

/**
 * main - a simple_shell program
 * Return: 0
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == -1)
		interactive();
	else
		non_interactive();
	return (0);
}
