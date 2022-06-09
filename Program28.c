//Accept no  from user and print factor
//Input: 10 
//Output: 1 2 5 10(not now)

//Input: 9
//Output: 1 3

//Input: 17
//Output: 1 

//Input: 20
//Output: 1 2 4 5 10

//Input: -20
//Output: 1 2 4 5 10

#include<stdio.h>
//operator
// % remainder,

void DisplayFactor(int iNo)
{
   int iCnt = 0;
   	
   	for( iCnt = 1; iCnt < iNo; iCnt++)
   	 {
   	 	 if((iNo % iCnt)   == 0)
   	 	 {
   	 	    printf("%d\n",iCnt);	
		 }	
	 }	
} 

//Time complexity: O(N)

int main()
{
	int iValue = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);//display address
	
	DisplayFactor(iValue);

	return 0;
}

//function name must be valid
//dont interaction with in function
//variable must be same
//dont use global variable
//local variable must initialize with there default value
//display always main
//prefix is must for better understand
//Function= (give,reuse)
//reuse (AC,Cooler)r and print Factor of that number
