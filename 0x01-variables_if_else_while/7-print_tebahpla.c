#include <stdio.h>
#include <string.h>
/**
*main - the main function
*Return: (0) success
*/
int main(void)
{
	char alpha;
	char beta;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
