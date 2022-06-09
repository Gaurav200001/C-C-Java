/*
Accept N numbers from user and accept another number and return the index of its number
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchFirstOccurance(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;	
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
     {
     	if(Arr[iCnt] == iNo)
     	 {
     	   break;	
		 }
	 }
	 if(iCnt == iLength)
	 {
	 	return -1;
	 }
	 else
	 {
	 	return iCnt;
	 }
}

int main()
{
	int iSize = 0;
	int iRet = 0; 
	int iValue = 0;
	int *ptr = NULL;
               int iCnt = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*) malloc(sizeof(int)* iSize); //int cha array pahije
	
	printf("Enter the values\n");
	
	  for(iCnt = 0; iCnt < iSize; iCnt++)
	  {
	  	scanf("%d",&ptr[iCnt]);
	  }	
	  
	  printf("Enter the elements to search\n");
	  scanf("%d",&iValue);
	  
	  iRet = SearchFirstOccurance(ptr,iSize,iValue);
	     if(iRet == -1)
	       {
	       	printf("There is no such element in array %d\n");
		   }
	     else
	       {
	       	 printf("Element first occurance at %d\n",iRet);
		   }
	 	  	
	  free(ptr);//karan return value pointer madhe gheto mhnun
	  
	return 0;
}