#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    (void)argc;
    int i = 0;

    while (argv[i])
        printf("%s\n", argv[i++]);
    return (0);
}