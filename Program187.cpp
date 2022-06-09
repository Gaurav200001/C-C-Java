//ek wahi bharli pahije ani dusri wahi khali pahile 
//Accept string form user copy one string into another

//Accept one string and copy to another

#include<iostream>

using namespace std;

void strcpyX(char *str, char *dest)  //str[],dest[]
{
   	while(*str != '\0')
   	{
   	  *dest = *src;
		src++;
		dest++; 	
	}
	*dest = '\0';//sarkan geli tr segmentation fault yenr
}

int main()
{
	char Arr[20]; //bharleli wahi
	char Brr[20]; //Kori wahi
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);
	
	strcpyX(Arr,Brr);
	
	cout<<"String after copy :"<<Arr<<endl;
    return 0;
}


