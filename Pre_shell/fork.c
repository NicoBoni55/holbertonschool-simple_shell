#include <stdio.h>
#include <unistd.h>
/**
 * child_pid - PID
 *
 * Return: Always 0.
 */
int child_pid()
{
    pid_t child_pid;

    child_pid = fork();

    if (child_pid == -1)
    {
        perror("Fork failed");
        return (1);
    }

    if (child_pid == 0)
    {
        printf("%d\n", getpid());
    }
    else
    {
        printf("%d, %d\n", getpid(), child_pid);
    }

    printf("%d\n", getpid());

    return (0);
}
