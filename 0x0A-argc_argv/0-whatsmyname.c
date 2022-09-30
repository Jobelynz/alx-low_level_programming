#include <stdio.h>
#include <stdlib.h>
/**
* main - the main function
* @argc: number of command line args passed
* @argv: an array of argc
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
