//Accept 2 string from user and copy content of second tring at the end of first string	
#include<iostream>

using namespace std;

void strcatX(char *src, char *dest)  //str[],dest[]
{
	while(*dest != '\0')//while(*src != '\0')
	{
	  dest++;           
	}
	
   	while(*src != '\0')//(*dest != '\0')
   	{
   	  *dest = *src;    //*src = *dest;
		src++;         //  dest++;
		dest++; 	   //  src++;
	}
	*dest = '\0';//*src = '\0'//sarkan geli tr segmentation fault yenr
}

int main()
{
	char Arr[20]; //bharleli wahi
	char Brr[20]; //Kori wahi
	
	cout<<"Enter First string"<<endl;
	cin.getline(Arr,20);//(Kashat,kiti);

    cout<<"Enter Second string"<<endl;
	cin.getline(Brr,20);//(Kashat,kiti);
		
	strcatX(Arr,Brr);
	
	cout<<"String after Contatination :"<<Brr<<endl;
    
	return 0;
}
