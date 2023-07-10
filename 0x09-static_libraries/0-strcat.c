#include "main.h"
/**
 * _strcat - concatenation of two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int u;
	int m;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[u] = src[m];
		u++;
		m++;
	}

	dest[u] = '\0';
	return (dest);
}

