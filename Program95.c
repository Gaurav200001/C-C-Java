//Pattern printing problems

//INPUT : Row = 4 Column = 4

// OUTPUT :
/*
       $  *  *   *  
       #  $  *  *   
       #  #  $  *
       #  #  #  $       
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
		else if(iCnt < jCnt)
		{
	  	printf(" * ",jCnt);
	  	}
                             else if(iCnt > jCnt)  // else
                             {
                                printf(" # ", jCnt);
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

//Time Complexity: O(N^2)