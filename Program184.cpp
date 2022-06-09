//Accept string from user and convert it into Uppercase 

#include<iostream>

using namespace std;

void strupX(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a' && *str <= 'z'))
		  {
		     *str = *str - 32;	
		  }
        str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	strupX(Arr);
	
	cout<<"String in Uppercase Case :"<<Arr<<endl;
	
    return 0;
}

