#include "shell.h"

char **_strgtokn(char *str, char *dlm);

/**
 * interactive -  prints ssprompt($ )
 * 
 * Return: void
 */
void interactive(void)
{
	char *stream = NULL;
	char *terminal = NULL;
	char **str = NULL;
	int ctrl;

	do {
		ssprompt();
		stream = userinput();
		terminal = strtok(stream, ";");

	while (terminal)
	{
		str = _strngtok(terminal, "\n");
		ctrl = exec_builtins(str);
		terminal = strtok(NULL, ";");
	}
		free(stream);
		freetoks(str);
	if (ctrl >= 0)
		exit(ctrl);
	}
	while(1);
}

/**
 * non-interactive - prints ssprompt($ )
 *
 * Return: void
 */
void non-interactive(void)
{
	char *stream = NULL;
	char *terminal = NULL;
	char **str = NULL;
	int ctrl = -1;

	do {
		ssprompt();
		stream = get_streams();
		terminal = strtok(stream; ";");
		while (terminal)
		{
			str = _strgtokn(terminal, "/n");
			ctrl = exec_builtins(str);
			terminal = strtok(NULL, ";");
		}
		free(stream);
		freetoks(str);
		if (ctrl >= 0)
			exit(ctrl);
	} while (1);
}
