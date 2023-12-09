#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    pid_t fter, pson;

    pson = fork(fter);
    if (pson == -1)
    {
        perror("Con proteccion");
        return (1);
    }
    return (0);
}