#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
		FILE *fp;
		char *line = NULL;
		size_t len = 0;
		ssize_t read;
		int product;
	/* the argument given must be 2*/
	if (argc != 2)
	{
		printf("You need 1 argument, the file containing the numbers\n");
		return (0);
	}
	/*to open and read file test*/
	fp = fopen(argv[1], "r");
	/* if the file is null*/
	if (fp == NULL)
	{
		printf("Couldn't open file `%s`\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*read and change to integer */
	while ((read = getline(&line, &len, fp)) != -1) 
	{
	product = atoi(line);
	}
	free(line);
	exit(EXIT_SUCCESS);
	return 0;
}
