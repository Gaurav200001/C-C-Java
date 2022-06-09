#include "Header.h"

  DoublyCLL :: DoublyCLL() // initialize the characteristics
  {
  	Head = NULL;
  	Tail = NULL;
    CountNode = 0;// no of node already mahitiahet
  } 
   
void  DoublyCLL :: InsertFirst(int iNo)
  { 
  	PNODE newn = NULL;
    newn = new NODE;
    
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(CountNode == 0)//if(Head == NULL) && (Tail == NULL)
    {
    	Head = newn; //100
    	Tail = newn; //100
    }
		
	  	else
	  {
		newn->next = Head;
		Head->prev = newn;
		Head = newn;
		
 	  }
 	  Head->prev = Tail;
	  Tail->next = Head;
	
	CountNode++;
  }
  
void  DoublyCLL :: InsertLast(int iNo)
  { 
  	PNODE newn = NULL;
    newn = new NODE;
    
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(CountNode == 0)//if(Head == NULL) && (Tail == NULL)
    {
    	Tail = newn; //100
    	Head = newn; //100
    }
		
	else
	{
		Tail->next = newn;
		newn->prev = Tail;
		Tail = newn;
		
	}
	  Tail->next = Head;
	  Head->prev = Tail;
	
	CountNode++;
  }
  
void  DoublyCLL :: InsertAtPos(int iNo, int Pos)
  {
  	   if((Pos < 1)|| (Pos > CountNode+1))
  	    {
  	    	cout<<"Invalid Position\n";
  	    	return;
		}
		
		if(Pos == 1)
		{
			InsertFirst(iNo);
		}
		
		else if(Pos == CountNode+1)
		{
			InsertLast(iNo);
		}
		
		else
		{
			PNODE newn = NULL;
            newn = new NODE;
    
            newn->data = iNo;
            newn->next = NULL;
            newn->prev = NULL;
            
            PNODE temp = Head;
            
            for(int i = 1; i < Pos-1; i++)
              {
              	temp = temp->next;
			  }
			  
			 newn->next = temp->next;
			 temp->next->prev = newn;
			
		}
		temp->next = newn;
		newn->prev = temp;
		
		CountNode++;
  }
  
void DoublyCLL :: DeleteFirst()
  {
  	if(CountNode == 0)
  	{
  	  	return;
	}
	
	else if(CountNode == 1)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	
	else
	{
		Head->next = Head;//First point to next address and stored in Head
		delete Tail->next;//delete Head->prev;
		
		Tail->next = Head;
		Head-> prev = Tail;	
		
		CountNode--;	
	}
  }  
  
void DoublyCLL :: DeleteLast()
   {
  	if(CountNode == 0)
  	{
  	  	return;
	}
	
	else if(CountNode == 1)
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
	}
	
	else
	{
		Tail->prev = Tail;
	    delete Tail->next;// delete Head->prev
	    
	}
	Tail->next = Head;
	Head->next = Tail;
	
	CountNode--;
  }  
 
void DoublyCLL :: DeleteAtPos(int Pos)
  {
  	   if((Pos < 1)|| (iPos > CountNode+1))
  	    {
  	    	cout<<"Invalid Position\n";
  	    	return;
		}
		
		if(Pos == 1)
		{
			DeleteFirst();
		}
		
		else if(Pos == CountNode)
		{
			DeleteLast();
		}
		
		else
		{
			PNODE newn = NULL;
            newn = new NODE;
    
            newn->data = iNo;
            newn->next = NULL;
            newn->prev = NULL;
            
            PNODE temp = Head;
            
            for(int i = 1; i < Pos-1; i++)
              {
              	temp = temp->next;
			  }
			  
			  temp->next = temp->next->next;
			  
			  delete temp->next;
			  
			  temp->next->prev = temp;
			  
			  CountNode--;
			
		}
  }  
  
void DoublyCLL :: Display()
  { //required temperory variable
  	 int i = 0;
  	 PNODE temp = Head;
  	  
  	  for(i=1; i<= CountNode;i++)
  	    {
  	    	cout<<"|" <<Head->data<<"|->";
  	    	temp = temp->next;
		}
		cout<<"\n";
  	 
  } 
  
int DoublyCLL :: Count()
  {
  	 return CountNode;
  }   


