#include "shell.h"

/**
 * _strlen - Retur the length of a srting.
 * @s: A pointer to the character string.
 *
 * Return: the lenght of the charcter dtring.
 */

int _strlen(const char *s)
{
	int lenght = 0;

	if (!s)
		return (lenght);
	for (lenght = 0; s[lenght]; lenght++)
		;
	return (lenght);
}

/**
 * _strcpy - Copies the string pointed to bt src, including the
 * terminating NULL byte, to the buffer pointed by dest.
 * @dest: Pointer to the destination of pointed string.
 * @src: pointer to the src of the source string.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - Concatenates two sring/
 * @dest: pionter to destination string.
 * @src: Pointer to source string.
 *
 * Return: ponter to destination string.
 */

char *_strcat(char *dest, const char *src)
{
	char *destTemp;
	const char *srcTemp;

	destTemp = dest;
	srcTemp = src;

	while (*destTemp != '\0')
		destTemp++;

	while (*srcTemp != '\0')
		*destTemp++ = *srcTemp++;
	*destTemp = '\0';
	return (dest);
}

/**
 * _strncat - Concatenates two string where n number.
 * or bytes are copy from surce.
 * @dest: pointer to destination string.
 * @src: pointer to surce string
 * @n: n bytes to copy from src.
 *
 * Return: Pointer to to destination string.
 */

char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
