#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	/*find string length without null char*/
	while (s[index++])
		len++;

	/*swap the string by looping to half the string*/
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
