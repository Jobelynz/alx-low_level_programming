#include <stdio.h>
#include <stdlib.h>
/**
* main - the main function
* @argc: the number of arguments passed
* @argv: an array of argc
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int a = 0;

		if (argc == 1)
			printf("%d\n", a);
		else
			printf("%d\n", (argc - 1));
	return (0);
}
