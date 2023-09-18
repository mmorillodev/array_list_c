#include <stdlib.h>

typedef struct {
  int *arr;
  int len;
  int capacity;
} ArrayList;

void push(ArrayList *self, int value) {
  if (self->len == self->capacity) {
    int new_capacity = self->capacity << 1;
    self->capacity = new_capacity;

    self->arr = realloc(self->arr, sizeof(int[new_capacity]));
  }

  *(self->arr + self->len) = value;

  self->len++;
}

ArrayList new_array_list_with_capacity(int initial_capacity) {
  ArrayList arrayList;
  arrayList.len = 0;
  arrayList.capacity = initial_capacity;
  arrayList.arr = malloc(initial_capacity * sizeof (int));

  return arrayList;
}

ArrayList new_array_list() {
  return new_array_list_with_capacity(50);
}

void for_each(ArrayList self, void (*consumer_function)(int)) {
  for (int i = 0; i < self.len; i++) {
    int value = *(self.arr + i);
    (*consumer_function)(value);
  }
}

void destroy_array_list(ArrayList self) {
  free(self.arr);
}
