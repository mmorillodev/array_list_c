#include <stdlib.h>
#include <stdio.h>
#include "array_list.h"

void print_elements(int el) {
  printf("%d\n", el);
}

int main() {
  ArrayList array_list = new_array_list_with_capacity(2);
  push(&array_list, 5);
  push(&array_list, 6);
  push(&array_list, 7);

  for_each(array_list, &print_elements);

  destroy_array_list(array_list); 
  
  return 0;
}
