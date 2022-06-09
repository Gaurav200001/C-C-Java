//Singly Linear Linked List
// only one pointer
/*
 InsertFirst
 InsertLast
 InsertAtPosition

 DeleteFirst
 DeleteLast
 DeleteAtPosition

 Display
 Count
*/
#include<stdio.h>
#include<stdlib.h>// malloc & free

struct node
{
	int data;  //replace with anything
	struct node *next; //self refrential structure -> tpoint to obj of another structure
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*
  1.Allocate memory for node
  2.Initialize the node
  3.check whethr LL is empty or not
  4.If LL is empty the new node is the first node
  5.If LL contains atleast one node in it then store the address 
    of previous first node in the next pointer of new node
*/



                     //mastar
void InsertFirst(PPNODE Head, int iNo) // 2 * madhe ghenr
{
	PNODE newn = NULL; //new node 
	
	//Memory allocation
	newn = (PNODE) malloc (sizeof(NODE));//12 bytes
	
	//Initialization
	newn->data = iNo;
	newn->next = NULL;
	
	if(*Head == NULL) // If LL is empty ,dokyt khi nhi shikshat chy
	{
		*Head = newn;// ekdach janar
	}
	else // If LL contains atleast one node
	{
		newn->next = *Head; //navin mulga
	   *Head = newn; // 
	}	
}

int main()
{
	// gharachi chabi
	PNODE First = NULL;//struct node *First = NULL;//hold the address of first (first pointer),
	// pointer cha address pathvycha ahe
	//Engine // 8 bytes
	//internally takes struct node*
	// structurre la point krnara pointer
	// 
	// int cha address -> int*
	//int pointer cha address -> int**
	
	InsertFirst(&First,101); //1 *Insert(60,101); //function call krnanra & call krtoy
	InsertFirst(&First,51);
    InsertFirst(&First,21);	
	InsertFirst(&First,11);
	
	Display(First);
	
	return 0;
}

/*Rules
1.Use only Dynamic memory allocation
2.Dont write any technical syntax in main
3.Dont use any global vaiables 
4. Be careful while manupulating the First Pointer
2:58:30 5.Pass the first pointer directly if the function is 
 not going to modify the LL(Display, Count)
6.Pass the address of First Pointer if the function is
 going to modify LL(InsertFirst, InsertLast, InsertAtPos, DeleteFirst, DeleteLast, DeleteAtPos)


*/


