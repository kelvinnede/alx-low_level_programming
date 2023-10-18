#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = {'O', 'L', '?', '?', 'U', 'E', 'A', '?', '?', 'T'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == 'a' + j || str[i] == 'A' + j)
			{
				str[i] = leet[j];
				break;
			}
		}
	}

	return (str);
}
