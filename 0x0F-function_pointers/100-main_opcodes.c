/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	
	void printop(char *location, int bytes)
	{
		int t;

		for (t = 0; t < bytes; t++)
			printf("%02x", (unsigned char)location[t]);

		printf("\n");
	}

	printop((char *)main, bytes);

	return (0);
}
