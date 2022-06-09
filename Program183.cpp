//Accept string from user and convert it into lowercase 

#include<iostream>

using namespace std;

void strwrX(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A' && *str <= 'Z'))
		  {
		     *str = *str + 32;	
		  }
        str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	strwrX(Arr);
	
	cout<<"String in lower Case :"<<Arr<<endl;
	
    return 0;
}

