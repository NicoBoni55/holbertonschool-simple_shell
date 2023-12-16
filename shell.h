#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
void execc(char *inp);
extern char **environ;
void env_(void);
void internal_command(char *command);
int main(void);

#endif
