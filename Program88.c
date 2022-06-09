//Pattern printing problems

//INPUT : 6

// OUTPUT : 1 * 3 * 5 *

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
               for(iCnt = 1; iCnt <= iNo; iCnt++)
               {
                    if((iCnt % 2) == 0)
		 {
		 	printf(" * ");
		 }
                     else 
                              {
                                 printf(" %d ", iCnt);
                              }
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