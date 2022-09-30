#include <stdio.h>
#include <stdlib.h>
/**
* main - the main function
* @argc: the number of arguments passed
* @argv: an array of argc
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		mul = ((atoi(argv[1])) * (atoi(argv[2])));
		printf("%d\n", mul);
		break;
	}
	return (0);
}
