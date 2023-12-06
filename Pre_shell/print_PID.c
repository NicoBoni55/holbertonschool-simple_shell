#include "pre_shell.h"
/**
* print_PID - print the ID of the parent process
*/
void print_PID(void)
{
    pid_t pid;

    pid = getpid();
    printf("%d", pid);
} 