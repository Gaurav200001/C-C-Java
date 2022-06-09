//Compare two string
//length same
//data same
//case same

#include<iostream>

using namespace std;

bool strcmpX(char *str1,char *str2)
{

  while((*str1 != '\0') && (*str2 != '\0'))//for length
    {
        if(*str1 != *str2)
   	  {
		 break;
 	  }  
 	  str1++;
 	  str2++;
    }
	 
	 if(*str1 == '\0' && *str2 == '\0')
	 {
	 	return true;
	 }
	 else
	 {
	 	return false;
	 }
}

int main()
{
	char Arr[20];
	char Brr[20];
	bool bRet = false;
	
	cout<<"Enter First String"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	cout<<"Enter Second String"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	strcmpX(Arr,Brr);
	
	if(bRet == true)
	{
		cout<<"String are equal"<<endl;
	}
	else
	{
		cout<<"String are not equal"<<endl;
	}
	
    return 0;
}

//problems on Bitwise operator
/*
->numbering system
->decimal to binary conversion
->binary to decimal conversion
->Hexadecimal numbering system
->binary to hexadecimal conversion
->Hexadecimal to binary conversion
->Bitwise operators(&,|,^,!)
->Bitwise Shift operators(<<,>>)
*/
