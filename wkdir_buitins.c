#include "shell.h"
/**
 * _cdir - a function that changes the working directory
 * @argv : arguments
 *
 * Return: 1 on success, 0 on failure
 */
int _cdir(char **argv)
{
	char *nw_path = argv[1];
	char *cr_path;

	if (nw_path == NULL)
		nw_path = getenv("HOME");
	else
	{
		switch (nw_path[0])
		{
			case '~':
				nw_path = getenv("HOME");
				break;
			case '_':
				nw_path = getenv("PRPWD");
				break;
			default:
				break;
		}
	}
		if (chdir(nw_path) != 0)
		{
			perror("failed");
				return (1);
		}
			cr_path = getcwd(NULL, 0);
			setenv("CWD", cr_path, 1);
			free(cr_path);

			return (0);
}
