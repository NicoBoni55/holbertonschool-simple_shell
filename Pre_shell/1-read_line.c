#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *buffer = NULL;
	size_t size = 0;
	int n;

	while (1)
	{
		write(1, "$ ", 2);
		n = getline(&buffer, &size, stdin);
		if (n == -1)
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}