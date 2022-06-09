////////////////////////////////////////////////////////////////
//Accept no from user check whether the no is even or not
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>// new header file

//#define TRUE 1
//#define FALSE 0
//typedef in BOOL

bool CheckEven(int iNo)
{
   if(iNo % 2 == 0)
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
    	printf("%d is Even number\n",iValue);
	}
	else
	{
		printf("%d Odd number\n",iValue);
	}
	
	return 0;
}

// why bool not int? 
//-> due to one bit

//premitive data type




