#include <stdlib.h>
#include <stdio.h>
#include "listlib.h"

int main()
{

	node* head = NULL;
	node* iterator;
	long i;


	for( i = 0; i < 1000; i++)
	{
		listAddLast(&head, 3);
	}

	printf("Size after, for( i = 0; i < 1000; i++)listAddLast(&head, 3); : %d \n", listGetSize(&head));

	for( i = 0; i < 1000; i++)
	{
		listAddLast(&head, 4);
	}

	printf("Size after, for( i = 0; i < 1000; i++)listAddLast(&head, 4); : %d \n", listGetSize(&head));

	for( i = 0; i < 1000; i++)
	{
		listAddLast(&head, 5);
	}

	printf("Size after, for( i = 0; i < 1000; i++)listAddLast(&head, 5); : %d \n", listGetSize(&head));

	
	listAddFirst(&head, 100);
	printf("Size after, listAddFirst(&head, 100); : %d \n", listGetSize(&head));
	listAddLast(&head, 50);
	printf("Size after, listAddLast(&head, 50);   : %d \n", listGetSize(&head));

	printf("500  th element: %d \n", listAt(head, 500)->data);
	printf("1500 th element: %d \n", listAt(head, 1500)->data);
	printf("2500 th element: %d \n", listAt(head, 2500)->data);

	printf("1st element: %d \n", listAt(head, 0)->data);

	iterator = head;
	iterateToLast(&iterator);

	printf("last element: %d \n", iterator->data);


	printf("\n\nCalling, reverseElementOrder(&head); \n");
	reverseElementOrder(&head);

	printf("500  th element: %d \n", listAt(head, 500)->data);
	printf("1500 th element: %d \n", listAt(head, 1500)->data);
	printf("2500 th element: %d \n", listAt(head, 2500)->data);

	printf("1st element: %d \n", listAt(head, 0)->data);

	iterator = head;
	iterateToLast(&iterator);

	printf("last element: %d \n", iterator->data);



	listFree(&head);
	printf("Size after listFree(&head): %d \n", listGetSize(&head));

	//getchar();

return 0;
}
