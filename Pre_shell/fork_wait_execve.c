#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int fork_ (int argc, char **argv)
{
    pid_t pson;

    pson = fork();
    if (pson == -1)
    {
        perror("Con proteccion");
        return (1);
    }
    printf("%d\n", pson);
    return (0);
}
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
int wait_()
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
int main()
{
	int i;


