#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void ssprintf(char *input, int streams);
int ssputchar(char c);
void ssprompt(void);
char *userinput(void);
int execpath(char *arg[]);
char **_strngtok(char *str, char *dlm);
void freetoks(char **toks);
void print_toks(char **tok);

#endif
