#include<stdio.h>
//Pineapple
//Input : 7856
//Output: 
//6
//5
//8
//7
void DisplayDigits(int iNo)
{
	int iDigit = 0;
	
	while(iNo != 0)// usacha rass
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter No:");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
	
	return 0;
}
