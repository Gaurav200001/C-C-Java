//
#include<iostream>

using namespace std;

void Display(char str[])//str mhatla ki 100 milto,*str mhtla tr H ghto
{
	
	while(*str != '\0')
	{
		cout<<*str<<endl;
		str++;
	}

}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	scanf("%s",Arr);
	
	Display(Arr);
	
	return 0;
}
