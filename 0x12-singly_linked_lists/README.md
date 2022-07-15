LEARNING OBJECTIVES:
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
-When and why using linked lists vs arrays
-How to build and use linked lists

DATA STRUCTURE TO BE USED FOR THE PROJECT:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

TASKS:
0. Write a function that prints all elements of a list_t list
1. Write a function that returns the number of elements in a linked list_t list
2. Write a function that adds a new node at the beginning of a list_t list
3. Write a function that adds a new node at the end of a list_t list
4. Write a function that frees a list_t list
