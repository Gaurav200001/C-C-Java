//Pattern printing problems

//INPUT : 5

// OUTPUT : 4 3 2 1 1 2 3 4 

//Time Complexity: O(2N)

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
               for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		printf(" %d ",iCnt);
	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
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