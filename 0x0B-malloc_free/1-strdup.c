#include "main.h"
#include <stdlib.h>

/**
 * _strdup - to returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 *
 * @str: the source string
 *
 * Return: NULL if str = NULL
 *
 */

char *_strdup(char *str)
{
	char *copy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	copy = (char *)malloc((sizeof(char) * j) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		copy[i] = str[i];
	copy[j] = '\0';

	return (copy);
}
