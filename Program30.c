#include<stdio.h>

void DisplayFactor(int iNo)
{
   int iCnt = 0;
      if(iNo < 0)
         {
               iNo= -iNo;
         } 
  	
   	for( iCnt = 1; iCnt <= (iNo/2); iCnt++)
   	 {
   	 	 if((iNo % iCnt) == 0)
   	 	 {
   	 	    printf("%d\n",iCnt);	
		 }	
	 }	
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);//display address
	
	DisplayFactor(iValue);

	return 0;
}

//Time complexity : O(N/2)