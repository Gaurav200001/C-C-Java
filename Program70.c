#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
   	int iCnt = 0;
   	
   	 for(iCnt = 0; iCnt < iLength; iCnt++)
   	   {
   	   	  if((Arr[iCnt] % 2) == 0)
   	   	   {
   	   	  printf("Even no is %d\n",Arr[iCnt]);
                     	    }
                   }
}


int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	
	printf("Enter number of elements");
	scanf("%d",&iSize);
	
	/*heap address*/ ptr = malloc(iSize* sizeof(int)); 
	 
	printf("Enter the values of array:\n");
	
	  for(iCnt = 0; iCnt < iSize; iCnt++)
	   {
	   	 scanf("%d",&ptr[iCnt]);
	   }
	 
	 DisplayEven(ptr, iSize);
	 
	return 0;
}