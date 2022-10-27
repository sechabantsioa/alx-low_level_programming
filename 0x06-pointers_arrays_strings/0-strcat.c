#include "main.h"

/**
 * _strcat - function that concatenates two strings by @src
 * @dest: A pointer to the string to be concatenated upon
 * @src : The sorce string to be appended to @dest
 *
 * Return: A pointer to the destnation string @dest
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
