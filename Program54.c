//Check Pallindrome

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
    {
    	
	  int iDigit = 0;
	  int iRev = 0;// for storing reverse no
	  int iTemp = 0;//
	  
	  if(iNo < 0)
	  {
	  	iNo = -iNo;
	  }
	  
	  iTemp = iNo;//copy copying beacse our value will be zero
	
	while(iNo > 0)
      {
		iDigit = iNo % 10;
		iRev = iRev*10 + iDigit;
		iNo = iNo / 10;
	  }
	  if(iRev == iTemp)
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
    bool bRet;
	
	printf("Enter No:");
	scanf("%d",&iValue);
	
	bRet = CheckPallindrome(iValue); 
	if(bRet == true)
	{
		printf("%d is pallindrome \n",iValue);
	}
	else
	{
	    printf("%d is no pallindrome \n",iValue);
	}
	
	
	return 0;
}


