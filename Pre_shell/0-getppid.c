#include <stdio.h>
#include <unistd.h>

/**
* print_PID - print the ID of the parent process
*/
void main(void)
{
    pid_t pid, ppid;

    pid = getpid();
    ppid = getppid();
    printf("%d\n", pid);
    printf("%d\n", ppid);
} 
