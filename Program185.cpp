/*Accept the string from user and toggle the
case of that string*/

#include<iostream>

using namespace std;

void strToggle(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		  {
		     *str = *str + 32;	//not pointer -> No,
		  }
		  
		else if((*str >= 'a') && (*str <= 'z')) 
		   {
              *str = *str - 32;		   	
		   }
		    
        str++;//pointer arithmetic -> yes 100 la asel tr  101 la jato
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	strToggle(Arr);
	
	cout<<"String in Toggle :"<<Arr<<endl;
    return 0;
}

//Accept string from user 
