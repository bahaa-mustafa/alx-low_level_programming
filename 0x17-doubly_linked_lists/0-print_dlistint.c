/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if(h == NULL)
	{
		return (0);
	}
	else if(h * next == NULL)
		return (1);
	else
	{
		for(i = 1; h * next != NULL; i++)
		{
			h * next = h->prev();
			if(next)
			{
				remove_element(h);
				insert_element_before(h, next);
			}
		}
		return (i);
	}

}
