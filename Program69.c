#include<stdio.h>//Call by address
#include<stdio.h>

void Display(int Arr[],int iLength)
{
        int iCnt = 0;
		printf(" Elements: of elements are: \n");
		
			for(iCnt = 0; iCnt < iLength; iCnt++)
	            {
	                printf("%d\n",Arr[iCnt]);
		        }
}

int main()
{
	int *ptr = NULL;
	register int iCnt = 0;
	int iSize = 0;
	
	printf("Enter the no of Elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize * sizeof(int));// typecasting
	
	printf("Enter elements:\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d\n",&ptr[iCnt]);
	}
	
	Display(ptr,iSize); //Display(100);
	
	return 0;
}
