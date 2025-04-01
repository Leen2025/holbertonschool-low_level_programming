#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
* struct list_s - Singly linked list data structure
* @str: String (allocated with malloc)
* @len: Number of characters in str
* @next: Pointer to the next node in the list
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif /* LISTS_H */
