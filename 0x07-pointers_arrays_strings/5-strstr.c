#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * _strstr - string function
 * @haystack: pointer to string to search
 * @needle: pointer to string to search for
 *
 * returns pointer to first occurence
 * of the whole sequence in needle
 * in the string haystack
 *
 * Return: pointer to occurence
*/

char *_strstr(char *haystack, char *needle)
{
	char *base = haystack, *baseAccept = needle, *firstOccurence;
	bool isDifferent = false;

	if (*baseAccept == '\0')
		return (base);

	while (*base != '\0')
	{
		isDifferent = *base != *baseAccept;
		if (!isDifferent)
		{
			firstOccurence = base;
			while (*baseAccept != '\0')
			{
				isDifferent = *base != *baseAccept;
				if (isDifferent)
					break;
				baseAccept++;
				base++;
			}
			if (!isDifferent)
				return (firstOccurence);
			baseAccept = needle;
		} else
		{
			base++;
		}
	}
	return (NULL);
}
