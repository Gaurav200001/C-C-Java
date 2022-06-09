/////////////////////////////////////////////////////////////////////////////////////////
Check no which is divisible by 3 and 5
/////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>// new header file

//#define TRUE 1
//#define FALSE 0
//typedef in BOOL

bool CheckEven(int iNo)
{
   if((iNo %3) == 0) && ((iNo % 5) == 0))// && logical and operator (both condition are true)
   {
   	 return true; // 1 also
   }	
   else
   {
   	 return false; // 0 aslo
   }
}



int main()
{
	int iValue = 0; // by default
	bool bRet = false; //dedfault
	
	printf("Enter No:");
	scanf("%d",&iValue);
	
    bRet = CheckEven(iValue);
    
    if(bRet == true)
    {
    	printf("%d is Divisible by 3 & 5",iValue);
	}
	else
	{
		printf("%d Not Divisible by 3 and 5\n",iValue);
	}
	
	return 0;
}
