#include "main.h"
#include <stdio.h>

int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	for (int i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}

	return (0);
}

