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
	return 0;
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
