/*
Linked List
*/

/*
DATA STRUCTURES

way of storing and representing a data in a particular format

Linear data structure(only access linearly not store(store randomly))
*Link List(vanilla(No flavour))(freedom linked list)
// e.g: Movie ticket(flexibility)
// e.g: Movie ticket(hatta)
// e.g: misal

//Insert First 
//Insert Last
//Delete First
//Delete Last
//Insert at Position
//Delete at position

Structure(int,pointer)

* Stack
*Queue

Non linear data structure(randon storing)
*/

/*
Singly Linear LL
*/

//Amit->->->->
//SLL 1->2->3->4
//SCl 1->2->3->4->1
//BLL 1->2->3->4->4->3->2->1
//BCL 



#include<stdio.h>
#include<stdlib.h>

//structure Declaration
//SelfReferential structure
// store heterogenous data
struct node
{
	int data; //4 byte
	struct node *next;//type of stuct node * // 8byte
};

int main()
{
	// Static memory allocation
	struct node obj; //static object creation
	
	//Dynamic memory allocation
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	
	obj.data = 11;// Direct accesssing operator
	obj.next = NULL;
	
	ptr-> data = 11;// Indirect accessing operator
	ptr-> next = NULL;
	
	return 0;
}
