#include<iostream>

using namespace std;

struct node //must in C++
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;//no use in this code

class SinglyCLL // class have 16 bytes
{
	private: // Characteristics,must private due to adddress of head,tail
		PNODE Head; //
		PNODE Tail; //

    public:  // Behaviour
    	
    	SinglyCCL()
    	{
    		Head = NULL;
    		Tail = NULL;
		}	
		
		void InsertFirst(int no)
		{
		}
		void InsertLast(int no)
		{
		}
		void DeleteFirst(int no)
		{
		}
		void DeleteLast(int no)
		{
		}
		void InsertAtPos(int no)
		{
		}
		void DeleteAtPos(int no)
		{
		}
		void Display()
		{
		}
		int Count()
		{
			return 0;
		}
		
		
};

int main()
{
	SinglyCLL obj;//obj create krtoy,memory create honr
//	obj = new SinglyCLL()
	return 0;
}
