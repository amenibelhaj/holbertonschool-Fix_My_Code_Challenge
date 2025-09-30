#include "lists.h"
#include <stdio.h>

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    printf("Original list:\n");
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 5); /* delete 98 */
    printf("After deleting index 5:\n");
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0); /* delete head (0) */
    printf("After deleting index 0:\n");
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 2); /* delete 3 (after deletion) */
    printf("After deleting index 2:\n");
    print_dlistint(head);
    printf("-----------------\n");

    free_dlistint(head);
    return 0;
}
