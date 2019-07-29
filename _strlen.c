#include "holberton.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: pointer char
 * Return: nothing
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != 0)
	{
		len++;
		s++;
	}
	return(len);
}
