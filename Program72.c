/*
Accept N number and print Addition oF N numbers
*/

#include<stdio.h>
#include<stdlib.h>

int SumOfNum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	  {
	  	iSum = iSum + Arr[iCnt];
	  }
	  return iSum;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
               int iRet = 0;
               int iCnt = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*) malloc(sizeof(int)* iSize); //int cha array pahije
	
	printf("Enter the values\n");
	
	  for(iCnt = 0; iCnt < iSize; iCnt++)
	  {
	  	scanf("%d",&ptr[iCnt]);
	  }	
	  
	  iRet = SumOfNum(ptr,iSize);
	  
	  printf("Summation is: %d\n",iRet);
	  	
	  free(ptr);
	  
	return 0;
}