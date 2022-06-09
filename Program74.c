/*
Accept N number and print Minimum oF N numbers
*/

#include<stdio.h>
#include<stdlib.h>
//Positive & Negative
int Minimum(int Arr[],int iLength)
{
	int iCnt = Arr[0];// -11
	int iMax = 0;
//        1          2             3	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	  {
	  	 if(iMax > Arr[iCnt])  // 4
	  	    {
	  	      iMax = Arr[iCnt];	
			}
	  }
	  return iMax;
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
	  
	  iRet = Minimum(ptr,iSize);
	  
	  printf("Minimum is: %d\n",iRet);
	  	
	  free(ptr);//karan return value pointer madhe gheto mhnun
	  
	return 0;
}