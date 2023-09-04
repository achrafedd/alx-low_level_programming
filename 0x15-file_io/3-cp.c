#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - main function
 *
 * @ac: arguments count
 * @av: agouments
 *
 * Return: 0 Alaiws
 */

int main(int ac, char **av)
{
	FILE *fd1;
	int fd2, txt, cl2;
	char ch[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(98);
	}
	fd1 = fopen(av[1], "r");
	if (fd1 == NULL)
	{
		dprintf(2, "Error: Can't read from file %s", av[1]);
		exit(99);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	while (fgets(ch, BUFFER_SIZE, fd1))
	{
		txt = write(fd2, ch, strlen(ch));
		if (txt == -1)
		{
			dprintf(2, "Error: Can't write to %s", av[2]);
		}
	}
	cl2 = close(fd2);
	if (fclose(fd1) == EOF)
	{
		dprintf(2, "Error: Can't close fd %s", av[1]);
		exit(100);
	}
	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %s", av[2]);
		exit(100);
	}
	return (0);
}
