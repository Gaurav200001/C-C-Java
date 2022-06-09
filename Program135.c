#include<stdio.h>
// 4*3*2*1 = 4! = 24
// 1*2*3*4 = 4! = 24

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;
   
  for(iCnt=1 ; iCnt <= iNo; iCnt++)
  {
  	 iFact *= iCnt;//short hand assignment operator
  }	
  return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter mumber\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Factorial is: %d\n",iRet);
	
	return 0;
}
