#ifndef _MONTY_H
#define _MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern int errorHandling;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO ALX project
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
 * for stack, queues, LIFO, FIFO ALX project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int keyw_check(char *u_input, unsigned int l_num, stack_t **stk);
int Chk(const char *out, unsigned int l_n);
void push_func(stack_t **stack, unsigned int num);
void print_list(stack_t **head);
void pall_func(stack_t **stack, unsigned int num);
int add_node(stack_t **head, unsigned int num);
int find_op(char *tok_u_input, stack_t **stack, unsigned int l_num);
void pint_func(stack_t **stack, unsigned int num);
void swap_func(stack_t **stack, unsigned int num);
void add_func(stack_t **stack, unsigned int num);
void pop_func(stack_t **stack, unsigned int num);
void free_this(char *u_input, stack_t *head, FILE *fp);
int if_op_push(char *tok_u_input);
void free_stack(stack_t *head);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);

char  *clean_line(char *content);
void free_stack(stack_t *head);

int execute(char *content, stack_t **head, unsigned int counter, FILE *file);

void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);

void f_add(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);

void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);

void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);

void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);

#endif
