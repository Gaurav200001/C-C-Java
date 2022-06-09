

// Traingle // Optimization
// TimeComplxity : O(N/2) 
//INPUT : Row 4 Col 4

/*

 * * * $
 * * $ *
 * $ * *
 $ * * * 
 
*/

/*
for(expression; expression; expression)
{
 expression;
}

all expression are optional and can be multiple


while(1)
{
}

*/

//topics for DS

/*
Pointers
malloc
free
structure
self refrential structure
#define
typedef
call by value
call by reference
pointer to pointer
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = iCol; j >= 1; j--)
		{
			if( i == j)
			{
				printf("  $  ");
			}
			else
			{
				printf("  *  ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter no of rows and no of columns:");
	scanf("%d %d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}






