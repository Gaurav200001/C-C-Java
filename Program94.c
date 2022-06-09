//Pattern printing problems

//INPUT : Row = 4 Column = 4

// OUTPUT :
/*
       $ 2 3 4 
       1 $ 3 4 
       1 2 $ 4
       1 2 3 $       
*/


#include<stdio.h>

void Display(int iRow, int jCol)
{
	int iCnt = 0;
	int jCnt = 0;
       
              if(iRow != jCol)
                {
                  printf("Invalid input\n");
                   return; // nhi dela tr khali janr
                }
	
	for(iCnt = 1; iCnt <= iRow; iCnt++)
	  {
	for(jCnt = 1; jCnt <= jCol; jCnt++)
	  {
	  	if(iCnt == jCnt)
	  	{
	  	   printf(" $ ");	
		}
		else
		{
	  	printf(" %d ",jCnt);
	  	}
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