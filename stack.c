#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void initialize(stack *s) {
  // implement initialize here
  s->head = NULL;
}

void push(int x, stack *s) {
  // implement push here
  node *p = malloc(sizeof(node));
  p->data = x;
  p->next = s->head;
  s->head = p;
  
}

int pop(stack *s) {
  // implement pop here
  node *p = s->head;
  int v = p->data;
  s->head = s->head->next;

  return v;
}

bool empty(stack *s) {
  // implement empty here
  return s->head == NULL;
}

bool full(stack *s) {
  // implement full here
  return false;
}
