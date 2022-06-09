//Pattern printing problems

//INPUT : 5

// OUTPUT : -4 -3 -2 -1  0  1  2  3  4 

// Time complexity: O(2N)

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = -4;
	//            1
               for(iCnt = -iNo; iCnt <= iNo; iCnt++)// iCnt = -iNo
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