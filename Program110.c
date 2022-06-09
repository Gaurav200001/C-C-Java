// Traingle // Optimization
// TimeComplxity : O(N/2) 
//INPUT : Row 4 Col 4

/*

 * * * * 
 * * *
 * *
 *
 *
 * * 
 * * * 
 * * * *
 
 
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

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	char ch = '\0';
	
	if(iRow != iCol)
	{
		printf("Invalid Input");
		return;
	}

	for(i = iRow; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
		 {
		     	printf("*\t");
		 
		 }
		 printf("\n");
	}

    	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j<= i; j++)
		 {
		     	printf("*\t");
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
