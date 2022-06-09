//Accept no and count no of digits
#include<stdio.h>

int SumOfDigits(int iNo)
{
	int iDigit = 0;
               int iSum = 0;
                if(iNo < 0)
                 {
                       iNo = -iNo;
                 }
	while(iNo != 0)
	{
	   	iDigit = iNo % 10;
		printf("%d\n",iDigit);
		
                              iSum = iSum + iDigit;
		
                              iNo = iNo / 10;
	               
	} 
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter No:");
	scanf("%d",&iValue);
	
	iRet = SumOfDigits(iValue);
	
	printf("Number of digits are: %d",iRet);
	
	return 0;
}