#include "shell.h"
int main(char *str, const char *str2)
{
	char s1[] = "hola como estas hoy";
	int i;
	char *token;

	token = strtok(s1, " ");

	for (i = 0; i < strlen(s1); i++)
	{
		printf("%s\n", token);
	}
}	
