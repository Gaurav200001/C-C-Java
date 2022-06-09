
/*
singly linear Linked list
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE *Head,int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE) malloc (sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	 
   	if(*Head == NULL)
   	{
   		*Head = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void InsertLast(PPNODE *Head,int iNo)
{
	PNODE newn = NULL;
	
	PNODE temp = *Head;
	
	newn = (PNODE) malloc (sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	 
   	if(*Head == NULL)
   	{
   		*Head = newn;
	}
	else   //LL contains atleast one node 
	{    
	    //travel till last node
	    // store address of new node in the next pointer of the last node
	    
	    temp = *Head; //initialize
	    
	    while(temp->next != NULL )
	    {
	    	temp = temp->next;
		}
		temp -> next = newn;
	    
	}
}

//call by value mechanism
void Display(PNODE Head)//not modify the link list
{
	printf("Elements from linked list are: \n");
	
	while(Head != NULL) //hatala gola lagat nhi to prynt(mal)
	{
		printf("|%d|->", Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

int Count(PNODE Head)//not modify the link list
{	
	int iCnt = 0;

	while(Head != NULL) //hatala gola lagat nhi to prynt(mal)
	{
	 	Head = Head->next;
        iCnt++;
	}

   return iCnt++;
}

void DeleteFirst(PPNODE Head)  //call by address
{
	//if Linked list is empty then return
	//if LL contains aleast one node then
	// store the address of second in the first pointer through head
    //And delete the first node
    
    	PNODE temp = NULL;
    
    if(*Head == NULL) //LL is empty
    {
    	return;
	}
	else
	{
		temp = *Head;
		
		*Head = temp  -> next;
		
		free(temp);
	}
}

void DeleteLast(PPNODE Head)  //call by address
{
	
	PNODE temp = NULL;
	//If LL is empty
	if(*Head == NULL)
	{
		return;
	}
	
	//If LL contains one node then delete that node and return
	else if(*Head->next == NULL)
	{
		free(*Head);
		*Head = NULL;// main statement
	}
	
	//If LL contains more than one node then travel till second
	//last node and delete last node
	else
	{
		temp = *Head;
		while(temp->next->next != NULL)
		{
			temp = temp-> next;
		}
		
		free(temp->next);
		temp->next = NULL; //main statement
	}
}

void InsertAtPos(PPNODE Head, int iNo, int Pos)//battery wali cycle
{
	//Consider no of nodes are 4
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	int size = 0,iCnt = 0;
	size = count(*Head);  //first node cha address
	
	//If position is invalid then return directly(1< OR >5)
	if((Pos < 1) || (Pos > (size+1)))//filter
	{
		printf("Position is invalid\n");
		return;
	}
	
	//If position is 1 then call InsertFirst
	if(Pos == 1)
	{
		InsertFirst(Head,iNo);
	}
	
	//If Positoin os N+1 Then call InsertLast(position is 5)
	else if(Pos == (size+1))
	{
		InsertFirst(Head, iNo);
	}
	
	else // At position
	{
	   PNODE temp = NULL;
	   newn = (PNODE) malloc (sizeof(NODE));
	
	   newn->data = iNo;
	   newn->next = NULL;
	   
	   	temp = *Head;
	   	
	   	for(iCnt = 1; iCnt < Pos-1 ; iCnt++)
	   	{
	   	   temp = temp -> next;	
		}
		newn-> next = temp->next;
		temp->next = newn;
	}
	
}

void DeleteAtPos(PPNODE Head, int Pos)
{
	//Consider no of nodes are 4
	PNODE temp = NULL;
	PNODE tempdelete = NULL;
	
	int size = 0,iCnt = 0;
	size = count(*Head);  //first node cha address
	
	//If position is invalid then return directly(1< OR > 4)
	if((Pos < 1) || (Pos > (size)))//filter
	{
		printf("Position is invalid\n");
		return;
	}
	
	//If position is 1 then call DeleteFirst
	if(Pos == 1)
	{
		DeleteFirst(Head);
	}
	
	//If Positoin is N then call DeleteLast(Position is 4)
	else if(Pos == (size))
	{
		DeleteLast(Head);
	}
	
	else // At position
	{
	   
	   	temp = *Head;
	   	
	   	for(iCnt = 1; iCnt < Pos-1 ; iCnt++)
	   	{
	   	   temp = temp -> next;	
		}
		tempdelete = temp->next;
		temp -> next = temp->next->next;
		
		free(tempdelete);
	}
}

int main()
{
	int iRet = 0;
	PNODE First = NULL;
	
	InsertFirst(&First, 101);// call by address
	InsertFirst(&First, 51);
	InsertFirst(&First, 12);
	InsertFirst(&First, 11);
	
	InsertAtPos(&First,75,3);
	
	DeleteAtPos(&First,3);
	
	Display(First);//cal by value
	
	iRet = Count(First);
	
	printf("Number of elements are: %d",iRet);
	
		InsertFirst(&First, 1);
		
		Display(First);//cal by value
	
	iRet = Count(First);// call by value
	
	printf("Number of nodes are: %d",iRet);
	
	InsertLast(&First,111);
	InsertLast(&First,121);
	
	Display(First);
	
	iRet = Count(First);
	
	printf("Number of nodes are %d",iRet);
	
	DeleteFirst(&First);
    DeleteFirst(&First);
 	
	Display(First);
	
	iRet = Count(First);
	
	printf("Number of nodes are %d",iRet);

    DeleteLast(&First);
 	
	Display(First);// call by value
	
	iRet = Count(First);
	
	printf("Number of nodes are %d",iRet);	
	return 0;
	
	
}





