/*
Accept N numbers from user and accept another number and count the occurrance of that no
*/

//shop counter 

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Search(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	bool bFlag = false;
	
	  for(iCnt = 0; iCnt <iNo; iCnt++)
	     {
	     	if(iNo == Arr[iCnt])
	     	 {
	     	 	bFlag = true;//zhenda phadkarvnr jr ka no milalar
	     	 	break;
			 }
		
		 }
		 return bFlag;
		 
}

int main()
{
	int iSize = 0,iValue = 0;
	int *ptr = NULL;
               bool bRet;
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
	  
	  bRet = Search(ptr,iSize,iValue);
	  if(bRet == true)
	  {
	  	printf("%d is present",iValue);
	  }
	  else
	  {
	  	 printf("%d not present",iValue);
	  }
	  	
	  free(ptr);//karan return value pointer madhe gheto mhnun
	  
	return 0;
}