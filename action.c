#include "monty.h"

/**
 * action - handles the opcode
 * @content: line content
 * @stack: head linked list
 * @line_counter: line counter
 * @file: pointer to monty file
 * Return: 0 on success, 1 if opcode is unknown
 */
int action(char *content, stack_t **stack, unsigned int line_counter,
FILE *file)
{
	instruction_t command_list[] = {
		{"push", push}, {"mod", modulator}, {"pchar", print_char},
		{"pstr", print_str}, {"rotl", rotater}, {"rotr", s_rotator},
		{"queue", queues}, {"stack", stack_p},
		{"pall", stack_printer}, {"pint", pinter}, {"pop", popper},
		{"swap", swapper}, {"add", add_top_2}, {"nop", nope},
		{"sub", subtract_top_2}, {"div", divider}, {"mul", multiplier},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *data;

	data = strtok(content, " \n\t");
	if (data && data[0] == '#')
		return (0);
	pusher.arg = strtok(NULL, " \n\t");
	while (command_list[i].opcode && data)
	{
		if (strcmp(data, command_list[i].opcode) == 0)
		{
			command_list[i].f(stack, line_counter);
			return (0);
		}
		i++;
	}
	if (data && command_list[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_counter, data);
		fclose(file);
		free(content);
		free_sll(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
