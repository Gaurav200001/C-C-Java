//Pattern printing problems

//INPUT : Row = 4 Column = 4

// OUTPUT :
/*
       * * * *
       * * * *
       * * * *
       * * * *
*/

// OUTPUT : 1 * 3 * 5 *

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int iCnt = 0;
	int jCnt = 0;
	//      1                2               3
	for(iCnt = 1; iCnt <= iRow; iCnt++) // outer
	 {	  //  4
                    //       1            2             3
	  for(jCnt = 1; jCnt <= iCol; jCnt++) // inner
	     {
	   	   printf(" * ");  // 4
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