#include "listlib.h"

#include <stdio.h>
#include <stdlib.h> 




void listAddLast(node** head, listData data)
{
	node* temp;
	if(*head == NULL)
	{
		*head = (node*) malloc(sizeof(node));
		(*head)->data = data;
		(*head)->next = NULL;
	}
	else
	{
		temp = *head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = (node*) malloc(sizeof(node));
		temp->next->data = data;
		temp->next->next = NULL;

	}

}

void listAddFirst(node** head, listData data)
{
	node* temp;
	if(*head == NULL)
	{
		*head = (node*) malloc(sizeof(node));
		(*head)->data = data;
		(*head)->next = NULL;
	}
	else
	{	
		temp = (node*) malloc(sizeof(node));
		temp->data = data;
		temp->next = *head;
		*head = temp;
	}

}

void listFree(node** head)
{
		node* next;
		
		do
		{
			
			if (*head == NULL)
			{
				return;
			}
			else
			{
				next = (*head)->next;
				free(*head);
			}
			*head = next;
		}while(*head != NULL);
	
}

int listGetSize(node** head)
{
		node* temp;
		long size;

		size = 0;
		temp = *head;

		while(temp != NULL)
		{
			size++;
			temp = temp->next;
		}
		
	return size;
}

void iterateToNext(node** iterator)
{

	if ((*iterator)->next != NULL)
	{
		*iterator = (*iterator)->next;
	}

}

void iterateToLast(node** iterator)
{

	while ((*iterator)->next != NULL)
	{
		*iterator = (*iterator)->next;
	}

}

void insertAtIterator(node** iterator, listData data)
{
	node* temp;
	if (*iterator != NULL)
	{
		temp = (*iterator)->next;
		(*iterator)->next = (node*) malloc(sizeof(node));
		(*iterator)->next->data = data;
		(*iterator)->next->next = temp;
	}

}

node* listAt(node* head, int index)
{
	int i = 0;

	while(1)
	{

		if (i == index)
		{
			return head;
		}

		if (head == NULL)
		{
			return head;
		}

		head = head->next;
		i++;

	}

}

void reverseElementOrder(node** head)
{
	node* last;
	node* next;
	last = NULL;

	while(1)
	{
		next = (*head)->next;

		(*head)->next = last; 
		last = *head;
		
		if (next == NULL)
		{
			return;
		}

		(*head) = next;
	}

}
