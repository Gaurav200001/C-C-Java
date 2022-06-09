#include<stdio.h>

int DisplayAddOfFactor(int iNo)
 {
 	int iCnt = 0;// for iterate a looop
 	int iSum = 0;
 	
               if(iNo < 0)
                {
                      iNo = -iNo;
                }

 	for(iCnt = 1; iCnt < (iNo/2); iCnt++)
 	{
                      if(iNo % iCnt == 0)// if counter is factor then we will add that factor in sum
		{
		    iSum = iSum + iCnt;
		} 	
	}
	return iSum;
 }

int main()
{
	int iValue = 0;
              int iRet = 0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	iRet = DisplayAddOfFactor(iValue);
 
               printf("Sum of factor is %d",iRet);
		
	return 0;
}