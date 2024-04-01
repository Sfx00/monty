#include "monty.h"
pay_data pusher = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argc: arguments count
 * @argv: program name
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int line_counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	pusher.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		pusher.content = content;
		line_counter++;
		if (read_line > 0)
		{
			action(content, &stack, line_counter, file);
		}
		free(content);
	}
	free_sll(stack);
	fclose(file);
	return (0);
}
