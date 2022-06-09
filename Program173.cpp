//count no of space from string

#include<iostream>

using namespace std;

int strlenX(char str[])//str mhatla ki 100 milto,*str mhtla tr H ghto
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
   return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	iRet = strlenX(Arr);
	
	cout<<"String length is:"<<iRet<<endl;
	
	return 0;
}

