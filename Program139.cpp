#include<iostream>

using namespace std;


class Number
{

 private:
 	int iNo; //class characteristics //Abstraction
 	
 public:// baherun milnar ahe(access specifier)
 	
 	//Behaviours
 	void Accept() //setter,for set the value
 	{
 	  cout<<"Enter the value:" <<endl;	
 	  cin>>this->iNo;
	}
	
	void Display() //getter, for set the value
	{
		cout<<"Value is:" <<this->iNo<<endl;
	}
	
    int Factorial()
    {
     int iCnt = 0;
     int iFact = 1;
   
    for(iCnt=1 ; iCnt <= iNo; iCnt++)
     {
  	  iFact = iFact * iCnt;
     }	
      return iFact;
}
};

int main()
{
	Number nobj1;
    Number nobj2;
	
	int iRet = 0;
		
	nobj1.Accept();
	nobj1.Display();
	iRet = nobj1.Factorial();
	cout<<"Factorial is:"<<iRet<<endl;
	
	nobj2.Accept();
	nobj2.Display();
	iRet = nobj2.Factorial();
	cout<<"Factorial is:"<<iRet<<endl;
	
	return 0;
}
