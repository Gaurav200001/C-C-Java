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

struct node
{
	int data; 
	struct node *next;
};

typedef struct node NODE;//(NODE = apla dok),namm karan

int main()
{
	//static memory allocation
	NODE obj;
	
	//Dynamic memory allocation
	NODE *ptr = (NODE *)malloc(sizeof(NODE)); //12 byte//void * to NODE*
	
	obj.data = 11;//objet madhly data madhe 11 initialize kra
	obj.next = NULL;
	
	ptr-> data = 11;
	ptr-> next = NULL;
	
	return 0;
}

