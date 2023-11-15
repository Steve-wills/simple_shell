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
int _cdir(char **arg);
int p_env(char **str);
int exit_env(char **str);
char **strgtokn(char *str, char *dlm);
void ssputs(char *str);
int _strlen(char *str);
char *_sub_str(char *hay, char *pin);

#endif
