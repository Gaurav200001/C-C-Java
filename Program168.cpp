#include<iostream>

using namespace std;

void Display(char str[])//str mhatla ki 100 milto,*str mhtla tr H ghto
{
	
	while(*str != '\0')
	{
		cout<<*str<<endl;
		str++;//101,102,103,104,105.
	}

}

int main()
{
	char Arr[] = "Hello";
	
	Display(Arr);
	
	return 0;
}
