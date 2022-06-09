/*Accept the string from user and reverse it*/
//konkam ,limbu,steel class
#include<iostream>

using namespace std;

void strrevX(char *str)  //str[]
{
	char *start = str;
	char *end   = str;
	char temp = 0;
	
	while(*end != '\0')//template for go till end value
	 {
	 	end++;
	 }
	 end--;
	 
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	} 
	
	
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	strrevX(Arr);
	
	cout<<"Reverse String is:"<<Arr<<endl;
    return 0;
}


