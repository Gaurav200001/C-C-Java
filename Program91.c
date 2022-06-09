//Pattern printing problems

//INPUT : Row = 4 Column = 4

// OUTPUT :
/*
       1 1 1 1 
       2 2 2 2 
       3 3 3 3
       4 4 4 4 
*/


#include<stdio.h>

void Display(int iRow, int jCol)
{
	int iCnt = 0;
	int jCnt = 0;
	
	for(iCnt = 1; iCnt <=iRow; iCnt++)
	  {
	for(jCnt = 1; jCnt <= jCol; jCnt++)
	  {
	  	printf(" %d ",iCnt);
	  }
	  printf("\n");
      }
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter number of rows :\n");
	scanf("%d",&iValue1);
	
	printf("Please number of ccolumns :\n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	return 0;
}