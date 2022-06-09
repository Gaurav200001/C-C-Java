// check prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt = 0;

	 //      1            2           3     
	for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
	 {
	 	if(iNo % iCnt == 0 )// true means factor, factor find loop break = factor means not prime no
	 	{     //if factor is not find then loop terminate at (iNo/2 + 1)
	     	  break;//
		}   
	 }
	 
	 if(iCnt == (iNo/2) + 1)
	 {
	 	return true;
	 }
	 else
	 {
	 return false;
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

