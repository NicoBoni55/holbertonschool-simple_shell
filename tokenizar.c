#include "shell.h"
int main()
{
	char *s1 = "hola como estas hoy";
	char *dup;
	int i;
	char *buff;
	char *token;

	dup = strdup(s1);
	token = strtok(dup, " ");
	printf("llega\n");
	buff = malloc(sizeof(char *));
	while (token)
	{
		if (token)
			printf("%s\n", token);
		token = strtok(NULL, " ");
	}
}	
