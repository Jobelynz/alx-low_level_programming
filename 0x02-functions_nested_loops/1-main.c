#include "main.h"
/**
*print_alphabet - This function print the 26 alphabets
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
