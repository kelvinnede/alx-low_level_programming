#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to a new string containing all the arguments,
 *         or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* for the newline character */
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}

