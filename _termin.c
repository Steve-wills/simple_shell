#include "shell.h"
/**
 * _termin - to check end of file condition and empty the past
 * condition
 * @num : the number of bytes read
 * @bufa : the buffer being read
 */
void _termin(ssize_t num, char *bufa)
{
	if (num == 1)
	{
		perror("error reading from stdin");
		free(bufa);
		exit(EXIT_FAILURE);
	}
	if (num == 0)
	{
		free(bufa);
		exit(EXIT_FAILURE);
	}
}
