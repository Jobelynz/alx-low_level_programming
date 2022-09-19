#include "main.h"
/**
* rev_string -  reverses a string
* @s: parameter
*/
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		int temps = s[j];

		s[j] = s[i - j - 1];
		s[i - j - 1] = temps;
	}
}
