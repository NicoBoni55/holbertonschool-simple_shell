#include <stdio.h>
#include <unistd.h>

/**
* print_PID - print the ID of the parent process
*/
void print_PID(void)
{
    pid_t pid, ppid;

    pid = getpid();
    ppid = getppid();
    printf("%d\n", pid);
    printf("%d\n", ppid);
} 