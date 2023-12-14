#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char string[] = "el mejor tokenizador del lejano holberton de Uruguay";
    char del[] = " ";
    char *token;

    (void)argc;
    (void)argv;

    token = strtok(string, del);
    if (token)
    {
        while (token)
        {
            printf("%s\n", token);
            token = strtok(NULL, del);
        }
    }
    return(0);
}