#include "main.h"

/**
 * _strspn - function that getss length of a prefix substring
 * @s: initial segment strring
 * @accept: list of charecters
 *
 * Return: number of bytes inthe initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int f;
	int flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
