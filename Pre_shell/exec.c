#include <stdio.h>
#include <unistd.h>
/**
 * exec_ - allows a process to execute another program
 *
 * Return: if execve = -1 return 1, if not return 0.
 */
int exec_()
{
    char *args[] = {"/bin/ls", "-l", "/tmp", NULL};

    if (execve("/bin/ls", args, NULL) == -1)
    {
        perror("execve failed");
        return (1);
    }

    printf("This line will not be reached\n");

    return (0);
}
