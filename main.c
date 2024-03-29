#include "monty.h"
#include "tools.h"

/**
 * main - main entry of the program.
 *
 * @am: argument count
 * @an: argument vector
 *
 * Return: zero on success or non zero in failure
 *
 */

int main(int am, char **an)
{
	int afd = 0, aread_bytes = 0, alen = 0, avalid = 0;
	unsigned int aline = 0;
	char *abuffer = NULL;
	stack_t *ahead = NULL;

	if (am != 2)
	{
		_puts("USAGE: monty file\n", 2);
		exit(EXIT_FAILURE);
	}
	afd = open(an[1], O_RDONLY);
	if (afd == -1)
	{
		_puts("Error: Can't open file ", 2);
		_puts(an[1], 2);
		_putchar('\n', 2);
		exit(EXIT_FAILURE);
	}
	while ((aread_bytes = _getline(&abuffer, &alen, afd, &aline)) != -1)
	{
		avalid = is_buffer_valid(abuffer);
		if (avalid == -1)
			continue;
		check_cmd(abuffer, aline, &ahead);
	}
	if (abuffer)
		free(abuffer);
	free_stack(ahead);
	close(afd);
	return (0);
}
