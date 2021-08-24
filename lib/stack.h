#ifndef STACK
#define STACK

typedef struct stack stack;
typedef struct stack_element stack_element;

stack* push(stack*, int);
stack* pop(stack*);
stack* free_stack(stack*);

struct stack
{
 stack_element *element;
 int size;

};

struct stack_element
{
 int value;
 stack_element *next;
};

#endif