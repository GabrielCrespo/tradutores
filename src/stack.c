#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/stack.h"
/*
 * This function will add a new element into the stack
 * If it is empty, the function will create a new one
 * Return the stack with the new element added
 */
stack *push(stack *s, int value)
{
 if (s == NULL)
 {
  s = (stack *)malloc(sizeof(stack));
  s->element = NULL;
  s->size = 0;
 }
 stack_element *new_element = (stack_element *)malloc(sizeof(stack_element));
 new_element->value = value;
 new_element->next = s->element;
 s->element = new_element;
 s->size = s->size + 1;

 return s;
}

/*
 * This function will remove the last element of the stack
 * If it is empty, returns the own stack
 * Decrease the stack's size
 */
stack *pop(stack *s)
{
 if (s->element == NULL)
  return s;

 stack_element *a = s->element;
 s->element = s->element->next;
 s->size = s->size - 1;

 free(a);

 return s;
}

/*
 * This function will just free the memory allocated to the stack
 * Return the empty stack
 */
stack *free_stack(stack *s)
{
 if (s == NULL)
 {
  return s;
 }
 while (s->size != 0)
 {
  s = pop(s);
 }
 return s;
}