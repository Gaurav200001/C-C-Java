#include<stdio.h>
#include<stdlib.h>

//->Functions

struct node
{
	int data;
	struct node *next;
	struct node *prev;  //*
};

typedef struct NODE;
typedef struct * PNODE;
typedef struct ** PPNODE;

void Display(PNODEHead)
{
	
}

int Count(PNODE Head)
{
	
}

void InsertFirst(PPNODE *Head, int iNo)
{
	
}

void InsertLast(PPNODE *Head, int iNo)
{
	
}

void DeleteFirst(PPNODE *Head, int iNo)
{#include<stdio.h>
#include<stdlib.h>

//->Functions

struct node
{
	int data;
	struct node *next;
	struct node *prev;  //*
};

typedef struct NODE;
typedef struct * PNODE;
typedef struct ** PPNODE;

void Display(PNODEHead)
{
	printf("Data from linked list is: \n");
	
	while(Head != NULL)
	{
		printf("|%d|<=>",Head->data);
		Head = Head -> next;
	}
	printf("NULL");
}

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	printf("NULL");
	return iCnt;
}

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE) malloc (sizeof(NODE));
	
	newn-> data = iNo;
	newn-> next = NULL;
	newn-> perv = NULL;   //*
	
	if(*Head == NULL)
	{
		newn -> next = *Head;
		(*Head) -> prev = newn; //shikshakachya dokyt nav takycha ahe
	}
	*Head = newn;
}

void InsertLast(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE) malloc (sizeof(NODE));
	
	newn-> data = iNo;
	newn-> next = NULL;
	newn-> perv = NULL;   //*
	
	if(*Head == NULL)
	{
		newn = *Head; //shikshakachya dokyt nav takycha ahe
	}
	
	else // LL contains atleast one node
	{
		temp = *Head; 
		
		while(temp->next != NULL)//last prynt yeun thambto
		{
		    temp = temp -> next;	
		}
		
		temp->next = newn;
		newn->prev = temp;   //* temp->next->prev = temp;
	}
}

void DeleteFirst(PPNODE Head, int iNo)
{
	
}

void DeleteLast(PPNODE Head, int iNo)
{
	
}

void InsertAtPos(PPNODE Head, int iNo, int Pos)
{
	
}

int main()
{
	return 0;
}
	
}

void DeleteLast(PPNODE *Head, int iNo)
{
	
}

void InsertAtPos(PPNODE Head, int iNo, int Pos)
{
	
}

void DeleteLast(PPNODE Head, int iNo, int Pos)
{
	
}

int main()
{
	PNODE First = NULL;
	newn = 
	
	return 0;
}
