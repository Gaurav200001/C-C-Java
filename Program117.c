
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;          //4
	struct node *next; //8
};

typedef struct node NODE;//(NODE = apla dok),namm karan
typedef struct node * PNODE;
typedef struct node ** PPNODE;
//Juna naw           Nawin naw
//sturct node        NODE
//struct node *      PNODE
//struct node **     PPNODE

int main()
{
	//static memory allocation
	NODE obj;
	
	//Dynamic memory allocation
	PNODE ptr = (PNODE)malloc(sizeof(NODE));
	
	obj.data = 11;
	obj.next = NULL;
	
	ptr-> data = 11;
	ptr-> next = NULL;
	
	return 0;
}
