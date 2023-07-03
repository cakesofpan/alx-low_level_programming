#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int t, bytes;
	unsigned char *ptr_main;
	unsigned char *main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	ptr_main = main;

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (t = 0; t < bytes; t++)
		printf("%02x", ptr_main[t]);

	printf("\n");
	return (0);
}
