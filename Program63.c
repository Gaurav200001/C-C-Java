
#include<stdio.h>

int main()
{
    auto int Arr[5]; // arr is one dimensional array consist of 5 elements
	// and each element is of type (int)
	// 100 imajinary address

	register int iCnt = 0;//register due to fast accessing variable
	
	printf("Enter Elements:\n");
	
	for(iCnt = 0; iCnt <  5; iCnt++)
	  {
	  	scanf("%d", &Arr[iCnt]);
	  }
	
	printf("Elements of array are:\n");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	     {
	 	printf("%d\n",Arr[iCnt]);
	      }
	return 0;
}