#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE *Head, int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE) malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	
	if(*Head == NULL)
	{
	    newn = *Head;	
	}	
	
	else
	{
		newn-> next = *Head;
		*Head->prev = newn;
		newn = *Head;
	}
}


void InsertLast(PPNODE *Head, int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE) malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	
	if(*Head == NULL)
	{
	    newn = *Head;	
	}	
	
	else
	{
		temp = *Head;
		
		while(temp!= NULL)
		{
			temp = temp->next;
		}
		temp-> next = newn;
		newn->prev = temp;
		     
	}
}

int main()
{
    PNODE First = NULL;
	
	InsertFirst(&First,101);	
}
