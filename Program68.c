#include<stdio.h>//Call by address

void Display(int Arr[])
{
                             int iCnt = 0;
		printf(" Elements: of elements are: \n");
		
				for(iCnt = 0; iCnt < 5; iCnt++)
	                {
	                	printf("%d\n",Arr[iCnt]);
		            }
}

int main()
{
	auto int Brr[5];
	register int iCnt = 0;
	
	printf("Enter Elements:");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d\n",&Brr[iCnt]);
	}
	
	Display(Brr); //Display(100);
	
	return 0;
}

//Arr[2];
// *(Arr + 2)
// *(2 + Arr)
//
