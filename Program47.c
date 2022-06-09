//Accept no and count no of digits
#include<stdio.h>

int DisplayCount(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	while(iNo != 0)
	{
	   		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		
		iNo = iNo / 10;
		
		iCnt++;
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