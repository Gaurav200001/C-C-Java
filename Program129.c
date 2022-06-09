//Crtl + F = Find text

#include<stdio.h>
#include<stdlib.h>

//->Functions

struct node
{
	int data;
	struct node *next;
	struct node *prev;  //*
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE Head)
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
	newn-> prev = NULL;   //*
	
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
	newn-> prev = NULL;   //*
	
	if(*Head == NULL)
	{
		newn = *Head; //shikshakachya dokyt nav takycha ahe
	}
	
	else // LL contains atleast one node
	{
		PNODE temp = NULL;
		temp = *Head; 
		
		while(temp->next != NULL)//last prynt yeun thambto
		{
		    temp = temp -> next;	
		}
		
		temp->next = newn;
		newn->prev = temp;   //* temp->next->prev = temp;
	}
}

void DeleteFirst(PPNODE Head)
{
	if(*Head == NULL) // if LL is Empty
	{
		return;
	}
	if(*Head->next == NULL) //single node
	{
		free(*Head);
		*Head = NULL;
	}  
	else // More than one node
	{
		*Head = (*Head) -> next; //*
	    free(*Head-> prev);      //*
		*Head -> prev = NULL;    //*
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = NULL;
	
	if(*Head == NULL) // if LL is Empty
	{
		return;
	}
	if(*Head-> next == NULL) //single node
	{
		free(*Head);
		*Head = NULL;
	}  
	else // More than one node
	{
		temp = *Head;
		
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE Head, int iNo, int Pos)
{
	PNODE newn = NULL:
	PNODE temp = NULL;
	int size = 0;
	size = Count(*Head);
	
	if((Pos < 1)||(Pos > (size+1)))
	{
		printf("Invalid Position\n");
	}
	
	if(Pos == 1)
	{
		InsertFirst(Head,no);
	}
	
	else if(Pos == size+1)
	{
		InsertLast(Head,no);
	}
	
	else
	{
	  temp = *Head;
	  newn = (PNODE) malloc (sizeof(NODE));
	
   	  newn-> data = iNo;
	  newn-> next = NULL;
	  newn-> prev = NULL; 
	
	   for(iCnt = 1; iCnt <(Pos-1); iCnt++)
  	    {
		 temp = temp-> next;
	    }
	      newn-> next = temp->next;//500 -> next = 400;
	      temp->next-> prev = newn;//400 -> prev = 500;
	      temp-> next = newn;      //300->next = 500;          
	      newn-> prev = temp;      //500 -> prev = 300;
    }
}

void DeleteAtPos(PPNODE HEAD, int Pos)
{
	PNODE temp = NULL;
	int size = 0;
	size = Count(*Head);
	
	if((Pos < 1)||(Pos > size))
	{
		printf("Invalid Position\n");
	}
	
	if(Pos == 1)
	{
		DeleteFirst(Head);
	}
	
	else if(Pos == size)
	{
		DeleteLast(Head);
	}
	
	else
	{
	  temp = *Head;
	
   	  newn-> data = iNo;
	  newn-> next = NULL;
	  newn-> prev = NULL; 
	
	   for(iCnt = 1; iCnt <(Pos-1); iCnt++)
  	    {
		 temp = temp-> next;
	    }
	    temp->next = temp->next->next;   //200-> next = 400;
	                                 
		free(temp->next->prev);			 //free(300);//*
	                                 
	    temp->next->prev = temp;         //400->prev = 200; //*
			                        
    }	

}

int main()
{
	PNODE First = NULL;
	int ret = 0;
	
	InsertFirst(&First, 21);
	InsertFirst(&First, 11); 
	
	InsertLast(&First, 51);
	InsertLast(&First,101);
	
	Display(First);
	ret = Count(First);
	
	printf("Number of nodes are: %d\n",ret);
	
	InsertAtPost(&First,75,3);
	Display(First);
	
	DeleteAtPos(&First,3);
	Display(First);
	
	DeleteFirst(&First);
	DeleteLast(&First);
	
	Display(First);
	ret = Count(First);  
	
	printf("Number of nodes are:\n",ret);
	
	return 0;
}
