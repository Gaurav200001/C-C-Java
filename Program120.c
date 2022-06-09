#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
}

typedef struct node     NODE;
typedef struct node*    PNODE;
typedef struct node**   PPNODE;

void InsertFirst(PPNODE *Head, int iNo)//shirta wrcha no
{
	// Allocate memory for node
    //Initialize that node

	// Check white LL is empty or not
	//If LL is empty then new node is the first node,

	//so update its address in first pointer through head
	//update the first pointer through head	

    //embedded//there is a computer program but there is no computer

   //segmentation fault
//-------------------------------------------------------------------------------   
    PNODE newn = NULL; 

    newn = (PNODE) malloc(sizeof(NODE));// newn = (struct node*)malloc(12 byte);
//-------------------------------------------------------------------------------
    newn -> data = iNo; //porachya shirtawr no lihila
    newn -> next = NULL; 
//-------------------------------------------------------------------------------
   if(*head == NULL)// jaun chaeck krnr NULL ahe ki nhi,LL is empty
     {
     	*head = newn;//*head madhe newn chi value ghalychi ahe
	 }
	 else // LL contains atleast one node
	 {
	 	newn -> next = *head;
	 	*head = newn;
	 }

void InsertLast(PPNODE *Head,int iNo)
{
	
	// Allocate memory for node
    //Initialize that node

	// Check white LL is empty or not
	//If LL is empty then new node is the first node,

	//If LL is not empty then
	//travel till last node of LL
	//store address of new node in the next pointer of last node

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


}
int main()
{
	PNODE First = NULL;// teacher chya dokytli value
	
	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);
	
	return 0;
}
