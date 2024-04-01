#include "monty.h"
pay_data pusher = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter.
 * @argc: arguments count.
 * @argv: program name.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *contente;
	FILE *filee;
	size_t sizee = 0;
	ssize_t read_linee = 1;
	stack_t *stacke = NULL;
	unsigned int line_countere = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filee = fopen(argv[1], "r");
	pusher.file = filee;
	if (!filee)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_linee > 0)
	{
		contente = NULL;
		read_linee = getline(&contente, &sizee, filee);
		pusher.content = contente;
		line_countere++;
		if (read_linee > 0)
		{
			action(contente, &stacke, line_countere, filee);
		}
		free(contente);
	}
	free_sll(stacke);
	fclose(filee);
	return (0);
}
