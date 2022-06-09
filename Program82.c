//Input: 5

//Output: 1 2 3 4 5 

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
              //           1            2              3              
	for(iCnt = 1; iCnt <= iNo; iCnt++)// not an array so start with 1
	{                       //4
		printf(" %d ",iCnt); 
	}
}

int main()
{
	int iValue = 0;
	
	printf("Please Enter the Value: \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}