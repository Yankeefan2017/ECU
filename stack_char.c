#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "stack_char.h"

/* Initilyze Stack */
void init_stack(stack *s) {

	(*s) = NULL;

}

/* Full Stack */
boolean is_full(void) {

	stack temp;

	temp = (stack) malloc (sizeof(struct stacknode));

	if (temp == NULL)

		return TRUE;

	else {

		free (temp);

		return FALSE;

	}

}

/* Empty Stack */
boolean is_empty(stack s) {

	return (s == NULL);
}


/* Push Stack */
void push(stack *s, char x) {

	stack temp;

	temp = (stack)malloc(sizeof(struct stacknode));

	temp -> data = x;

	temp -> next = (*s);

	(*s) = temp;

}

/* Pop Stack */
char pop(stack *s) {

	stack temp;

	char data_popped;

	temp = (*s);

	data_popped = temp -> data;

	(*s) = temp -> next;

	free(temp);

	return data_popped;

}

/* Print Stack */
void print_stack(stack s) {

	if (!is_empty(s)) {

		printf("%c\n", s->data);

		print_stack(s->next);

	}
}
