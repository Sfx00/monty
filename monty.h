#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue).
 * @n: integer.
 * @prev: points to the previous element of the stack (or queue).
 * @next: points to the next element of the stack (or queue).
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct payload - variables -args, file, line content.
 * @arg: value.
 * @file: pointer to monty file.
 * @content: line content.
 * @lifi: flag change stack <-> queue.
 * Description: carries values through the program.
 */
typedef struct payload
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  pay_data;
extern pay_data pusher;

/**
 * struct instruction_s - opcode and its function.
 * @opcode: the opcode.
 * @f: function to handle the opcode.
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

ssize_t agetline(char **lineptr, size_t *n, FILE *stream);
void apush(stack_t **head, unsigned int number);

void astack_p(stack_t **head, unsigned int line_counter);
void apinter(stack_t **head, unsigned int number);
int aaction(char *content, stack_t **head, unsigned int counter, FILE *file);
void afree_sll(stack_t *head);
void apopper(stack_t **head, unsigned int counter);
void aswapper(stack_t **head, unsigned int counter);
void aadd_top_2(stack_t **head, unsigned int counter);
void anope(stack_t **head, unsigned int counter);
void asubtract_top_2(stack_t **head, unsigned int counter);
void adivider(stack_t **head, unsigned int counter);
void amultiplier(stack_t **head, unsigned int counter);
void amodulator(stack_t **head, unsigned int counter);
void aprint_char(stack_t **head, unsigned int counter);
void aprint_str(stack_t **head, unsigned int counter);
void arotater(stack_t **head, unsigned int counter);
void as_rotator(stack_t **head, __attribute__((unused)) unsigned int counter);
void anode_creator(stack_t **head, int n);
void aqueue_creator(stack_t **head, int n);
void aqueues(stack_t **head, unsigned int counter);
void astack_printer(stack_t **head, unsigned int counter);

#endif
