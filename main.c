#include "header.h"
#include <stdio.h>
/**
*
*
*
*
*
*/
FILE* filename;
int main(int argc, char *argv[])
{
	FILE* filename;
	if (argc != 2)
	printf("USAGE: monty file\n");
	return (EXIT_FAILURE);
	filename = fopen(argv[1], "r");
	if (!filename)
	{
		printf("Error: Can't open file <file>\n");
		return (EXIT_FAILURE);
	}
	
}