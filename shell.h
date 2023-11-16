#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
void ssprintf(char *input, int streams);
int ssputchar(char c);
void ssprompt(void);
char *userinput(void);
int execpath(char *arg[]);
char **_strngtok(char *str, char *dlm);
void freetoks(char **toks);
void print_toks(char **tok);
int ssatoi(char *str);
int _cdir(char **argv);
int p_env(char **str);
int exit_env(char **str);
char **strgtokn(char *str, char *dlm);
void ssputs(char *str);
int _strlen(char *str);
char *_sub_str(char *hay, char *pin);
void _termin(ssize_t num, char *bufa);
int exec_builtins(char **str);
char *get_streams(void);
void interactive(void);
void non_interactive(void);
int main(void);

/**
 * struct builtInCommands - Structure to hold information
 * @ID: The name of the built-in command
 * @functn: A function pointer to the corresponding built-in function
 */

typedef struct builtInCommands
{
	const char *ID;
	int (*functn)(char **);
} cmd;

#endif
