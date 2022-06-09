#include<stdio.h>//Call by address

void Display(int *ptr)
{
                             int iCnt = 0;
		printf(" Elements: of elements are: \n");
		
				for(iCnt = 0; iCnt < 5; iCnt++)
	                {
	                	printf("%d\n",*ptr);
	                	ptr++;// pointer arithmetic
		            }
}

int main()
{
	auto int Arr[5];
	register int iCnt = 0;
	
	printf("Enter Elements:");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d\n",&Arr[iCnt]);
	}
	
	Display(Arr); //Display(100);
	
	return 0;
}