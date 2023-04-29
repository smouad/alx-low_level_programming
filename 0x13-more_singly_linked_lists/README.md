
<h1  align='center'>0x13. C - More singly linked lists</h1>

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General

When and why using linked lists vs arrays

How to build and use linked lists

 ## More Info

Please use this data structure for this project:
```
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
```

#  Tasks

<details>
<summary>0. Print list</summary><br>

Write a function that prints all the elements of a `listint_t` list.

-   Prototype: `size_t print_listint(const listint_t *h);`
-   Return: the number of nodes
-   Format: see example
-   You are allowed to use `printf`

>Main:
>```c
>#include <stdlib.h>
>#include <string.h>
>#include <stdio.h>
>#include "lists.h"
>
>/**
> * main - check the code
 >* 
 >* Return: Always 0.
 >*/
>int main(void)
>{
>    listint_t *head;
>    listint_t *new;
>   listint_t hello = {8, NULL};
>    size_t n;
>
>    head = &hello;
>    new = malloc(sizeof(listint_t));
>    if (new == NULL)
>    {
>        printf("Error\n");
>        return (1);
>    }
>    new->n = 9;
>    new->next = head;
>    head = new;
>    n = print_listint(head);
>    printf("-> %lu elements\n", n);
>    free(new);
>    return (0);
>}

>Compile this way:
>```
>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
>```

>Output
>```shell
>9
>8
>-> 2 elements
>```
</details>

---

<details>
<summary>1. List length</summary><br>
Write a function that returns the number of elements in a linked `listint_t` list.

-   Prototype: `size_t listint_len(const listint_t *h);`

>Main:
>```c
>#include <stdlib.h>
>#include <string.h>
>#include <stdio.h>
>#include "lists.h"
>
>/**
> * main - check the code
> *
> * Return: Always 0.
> */
>int main(void)
>{
>    listint_t *head;
>    listint_t *new;
>    listint_t hello = {8, NULL};
>    size_t n;
>
>    head = &hello;
>    new = malloc(sizeof(listint_t));
>    if (new == NULL)
>    {
>        printf("Error\n");
>        return (1);
>    }
>    new->n = 9;
>    new->next = head;
>    head = new;
>    n = listint_len(head);
>    printf("-> %lu elements\n", n);
>    free(new);
>    return (0);
>}
>```

>Compile this way
>```
>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
>```

>Output
>```
>-> 2 elements
>```

</details>

---

<details><summary>2. Add node</summary><br>

Write a function that adds a new node at the beginning of a `listint_t` list.

-   Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
-   Return: the address of the new element, or `NULL` if it failed

>Main:
>```c
>#include <stdlib.h>
>#include <stdio.h>
>#include <string.h>
>#include "lists.h"
>
>/**
> * main - check the code
> *
> * Return: Always 0.
> */
>int main(void)
>{
>    listint_t *head;
>
>    head = NULL;
>    add_nodeint(&head, 0);
>    add_nodeint(&head, 1);
>    add_nodeint(&head, 2);
>    add_nodeint(&head, 3);
>    add_nodeint(&head, 4);
>    add_nodeint(&head, 98);
>    add_nodeint(&head, 402);
>    add_nodeint(&head, 1024);
>    print_listint(head);
>    return (0);
>}
>```

>Compile this way:
>```
>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
>```

>Output:
>```shell
>1024
>402
>98
>4
>3
>2
>1
>0
>```

</details>

---

<details><summary>3. Add node at the end</summary><br>
Write a function that adds a new node at the end of a `listint_t` list.

-   Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
-   Return: the address of the new element, or `NULL` if it failed

>Main:
>```c
>#include <stdlib.h>
>#include <string.h>
>#include <stdio.h>
>#include "lists.h"
>
>/**
> * main - check the code
> *
> * Return: Always 0.
> */
>int main(void)
>{
>    listint_t *head;
>
>    head = NULL;
>    add_nodeint_end(&head, 0);
>    add_nodeint_end(&head, 1);
>    add_nodeint_end(&head, 2);
>    add_nodeint_end(&head, 3);
>    add_nodeint_end(&head, 4);
>    add_nodeint_end(&head, 98);
>    add_nodeint_end(&head, 402);
>    add_nodeint_end(&head, 1024);
>    print_listint(head);
>    return (0);
>}

>Compile this way:
>```
>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
>```

>Output
>```shell
>0
>1
>2
>3
>4
>98
>402
>1024
>```

</details>

---

<details><summary>4. Free list</summary><br>

Write a function that frees a `listint_t` list.

-   Prototype: `void free_listint(listint_t *head);`

>Main:
>```c
>#include <stdlib.h>
>#include <string.h>
>#include <stdio.h>
>#include "lists.h"
>
>/**
> * main - check the code
> *
> * Return: Always 0.
> */
>int main(void)
>{
>    listint_t *head;
>
>    head = NULL;
>    add_nodeint_end(&head, 0);
>    add_nodeint_end(&head, 1);
>    add_nodeint_end(&head, 2);
>    add_nodeint_end(&head, 3);
>    add_nodeint_end(&head, 4);
>    add_nodeint_end(&head, 98);
>    add_nodeint_end(&head, 402);
>    add_nodeint_end(&head, 1024);
>    print_listint(head);
>    free_listint(head);
>    head = NULL;
>    return (0);
>}
>```

>Compile this way:
>```
>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
>```

>Use valgrind:
>```
>valgrind ./e
>```

>Output:
>```
>==3643== Memcheck, a memory error detector
>==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
>==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
>==3643== Command: ./e
>==3643== 
>0
>1
>2
>3
>4
>98
>402
>1024
>==3643== 
>==3643== HEAP SUMMARY:
>==3643==     in use at exit: 0 bytes in 0 blocks
>==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
>==3643== 
>==3643== All heap blocks were freed -- no leaks are possible
>==3643== 
>==3643== For counts of detected and suppressed errors, rerun with: -v
>==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
>```

</details>

---

<details><summary></summary>

Write a function that frees a `listint_t` list.

-   Prototype: `void free_listint2(listint_t **head);`
-   The function sets the `head` to `NULL`

>Main:
>```c
>#include <stdlib.h>
>#include <string.h>
>#include <stdio.h>
>#include "lists.h"
>
>/**
> * main - check the code
> *
> * Return: Always 0.
> */
>int main(void)
>{
>    listint_t *head;
>
>    head = NULL;
>    add_nodeint_end(&head, 0);
>    add_nodeint_end(&head, 1);
>    add_nodeint_end(&head, 2);
>    add_nodeint_end(&head, 3);
>    add_nodeint_end(&head, 4);
>    add_nodeint_end(&head, 98);
>    add_nodeint_end(&head, 402);
>    add_nodeint_end(&head, 1024);
>    print_listint(head);
>    free_listint2(&head);
>    printf("%p\n", (void *)head);
>    return (0);
>}
>```

>Compile this way:
>```
>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
>```

>Use valgrind:
>```
>valgrind ./f
>```

>Output:
>```
>==3843== Memcheck, a memory error detector
>==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
>==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
>==3843== Command: ./f
>==3843== 
>0
>1
>2
>3
>4
>98
>402
>1024
>(nil)
>==3843== 
>==3843== HEAP SUMMARY:
>==3843==     in use at exit: 0 bytes in 0 blocks
>==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
>==3843== 
>==3843== All heap blocks were freed -- no leaks are possible
>==3843== 
>==3843== For counts of detected and suppressed errors, rerun with: -v
>==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
>```

</details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

---

<details><summary></summary></details>

