#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates string
 * @c: character
 * @s: string
 *
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		s = *s++;
		if (a == c)
		{

			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
