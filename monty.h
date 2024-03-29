#ifndef MONTY_H
#define MONTY_H


#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "tools.h"
#include <stdio.h>
extern char *value;


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void aprint(stack_t **stack, unsigned int line_number);
void apush(stack_t **stack, unsigned int line_number);
void afree_stack(stack_t *head);
void aprint_top(stack_t **stack, unsigned int line_number);
void apop(stack_t **stack, unsigned int line_number);
void aswap(stack_t **stack, unsigned int line_number);
void aadd(stack_t **stack, unsigned int line_number);
void asub(stack_t **stack, unsigned int line_number);
void a_div(stack_t **stack, unsigned int line_number);
void a_mul(stack_t **stack, unsigned int line_number);
void amod(stack_t **stack, unsigned int line_number);
void apchara(stack_t **stack, unsigned int line_number);
void apstr(stack_t **stack, unsigned int line_number);
void arotl(stack_t **stack, unsigned int line_number);
void arotr(stack_t **stack, unsigned int line_number);
int a_strlen_nodes(stack_t *head);
int acheck_cmd(char *buffer, unsigned int line, stack_t **head);

#endif
