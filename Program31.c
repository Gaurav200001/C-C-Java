#include<stdio.h>

void DisplayNonFactor(int iNo)
{
   int iCnt = 0;
      if(iNo < 0)
         {
               iNo= -iNo;
         } 
  	
   	for( iCnt = 1; iCnt < iNo; iCnt++)
   	 {
   	 	 if((iNo % iCnt) != 0)//no Factor
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
	
	DisplayNonFactor(iValue);

	return 0;
}

//Time complexity : 
//
