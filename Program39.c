// check prime or not

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
	int iCnt = 0;
	//int iFactCnt = 0;
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	 {
	 	if(iNo % iCnt == 0 )
	 	{
	     	  break;
		}   
	 }
}


int main()
{
	
	int iValue = 0;
	bool bRet = false;

	printf("Enter Number:");
	scanf("%d",&iValue);
	
        	bRet = CheckPrime(iValue);
	
               if(bRet == true)
                  {
                         printf("%d is a prime no",iValue);
                  }
               else
                  {
                         printf("%d is not a prime no",iValue);
                  }

	return 0;
}



