#include "monty.h"
/**
  *subtract_top_2- substracts value 1 fron 2 in stack
  *@head: header to stack head
  *@line_counter: line_number
  *
 */
void subtract_top_2(stack_t **head, unsigned int line_counter)
{
	stack_t *temp_head;
	int result, nodes;

	temp_head = *head;
	for (nodes = 0; temp_head != NULL; nodes++)
		temp_head = temp_head->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	temp_head = *head;
	result = temp_head->next->n - temp_head->n;
	temp_head->next->n = result;
	*head = temp_head->next;
	free(temp_head);
}
