#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
/**
 * pid_wait - wait for PID
 *
 * Return: Always 0.
 */
int pid_wait ()
{
    pid_t child_pid;

    if (fork() == 0)
        exit(0);
    else
    {
        child_pid = wait(NULL);
        printf("%d\n", getpid());
        printf("%d\n", child_pid);
    }
    return (0);
}
