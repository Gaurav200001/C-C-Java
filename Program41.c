// count the factor

#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	 {
	 	if(iNo % iCnt == 0 )
	 	{
	     	iFactCnt++;
		}
	   
	 }
	 return iFactCnt++;
}



int main()
{
	
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number:");
	scanf("%d",&iValue);
	
    iRet = CountFactor(iValue);
	
            
    printf("Numbers of factors is %d",iRet);
                  

	return 0;
}
