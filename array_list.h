#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct {
  int *arr;
  int len;
  int capacity;
} ArrayList;

void push(ArrayList *self, int value);

ArrayList new_array_list_with_capacity(int initial_capacity);

ArrayList new_array_list();

void destroy_array_list(ArrayList self);

void for_each(ArrayList self, void (*consumer_function)(int));

#endif 
