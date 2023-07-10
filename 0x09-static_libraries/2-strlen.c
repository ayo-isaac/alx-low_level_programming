#include "main.h"
/**
 * _strlen - returning the length of a paticular string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longf = 0;

	while (*s != '\0')
	{
		longf++;
		s++;
	}

	return (longf);
}

