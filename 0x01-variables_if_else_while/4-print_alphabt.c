#include <stdio.h>
/**
*main - The start of the program
*Return: (0) success
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			return (0);
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
