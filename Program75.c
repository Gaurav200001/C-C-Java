/*
Accept N numbers from user and accept another number and count the occurrance of that no
*/

//shop counter 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	  for(iCnt = 0; iCnt < iFrequency; iCnt++)
	     {
	     	if(iNo == Arr[iCnt])
	     	 {
	     	 	 iFrequency++;
			 }
		 }
		 return iFrequency;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
               int iRet = 0;
               int iCnt = 0;
               int iValue = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*) malloc(sizeof(int)* iSize); //int cha array pahije
	
	printf("Enter the values\n");
	
	  for(iCnt = 0; iCnt < iSize; iCnt++)
	  {
	  	scanf("%d",&ptr[iCnt]);
	  }	
	  
	  printf("Enter the elements to calculate the frequency\n");
	  scanf("%d",&iValue);
	  
	  iRet = Frequency(ptr,iSize,iValue);
	  
	  printf("Frequency is %d\n",iRet);
	  	
	  free(ptr);//karan return value pointer madhe gheto mhnun
	  
	return 0;
}