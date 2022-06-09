//Accept no and Sum of Even of its digits

#include<stdio.h>

int SumEven(int iNo)
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
		 
                             if(iDigit % 2 == 0)
                                    {
                                         iSum = iSum + iDigit;
                                    }
                                    
		
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
	
	iRet = SumEven(iValue);

               printf("%d is sum ",iRet);
	
	return 0;
}