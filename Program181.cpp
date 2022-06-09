//Accept string from user and  checlk the string contains 
//count of vowels 

//Accept string and count small characters
//ASCII

#include<iostream>

using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'e')||(*str == 'e')||(*str == 'e'))
		{
		   iCnt++;
        }
        str++;
	}
	return iCnt++;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	iRet = CountCapital(Arr);
	
	cout<<"NO of voewls:"<<iRet<<endl;

    return 0;
}

