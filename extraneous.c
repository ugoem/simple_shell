#include "shell.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Difference of first nonmatching character
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/**
 * prompt - prints $ for prompt
 * Return: void
 */
void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(1, "$ ", 2);
	}
}
/**
 * _strstr - locates sub string
 * @haystack: input one
 * @needle: input two
 * Return: sub string
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
