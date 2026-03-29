#include "lists.h"

size_t print_list(const list_t *h)
{

	int i; 
	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if(h->str == NULL)
			{
				printf("(nil)\n");
			}
		else
		{
			printf("%s\n", h->str);

		}
		h = h->next;
		i += 1;
	}
	return(i);
}
