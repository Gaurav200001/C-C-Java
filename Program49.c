//Accept no and count no of digits
#include<stdio.h>

int DisplayCount(int iNo)
{
               int Digit = 0;
	int iCnt = 0;
	while(iNo > 0)
	{
	Digit = iNo % 10;
                  		
	iCnt++;
	iNo = iNo / 10;
				
	} 
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter No:");
	scanf("%d",&iValue);
	
	iRet = DisplayCount(iValue);
	
	printf("Number of digits are: %d",iRet);
	
	return 0;
}