#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (0);
}
