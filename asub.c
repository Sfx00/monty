#include "monty.h"
/**
  *asubtract_top_2- substracts value 1 fron 2 in stack.
  *@head: header to stack head.
  *@line_counter: line_number.
  *
 */
void asubtract_top_2(stack_t **head, unsigned int line_counter)
{
	stack_t *temp_heade;
	int resulte, nodese;

	temp_heade = *head;
	for (nodese = 0; temp_heade != NULL; nodese++)
		temp_heade = temp_heade->next;
	if (nodese < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_counter);
		fclose(pusher.file);
		free(pusher.content);
		free_sll(*head);
		exit(EXIT_FAILURE);
	}
	temp_heade = *head;
	resulte = temp_heade->next->n - temp_heade->n;
	temp_heade->next->n = resulte;
	*head = temp_heade->next;
	free(temp_heade);
}
