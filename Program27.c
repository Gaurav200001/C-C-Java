/*
1 gm = 4k       case1 
2 gm = 8k       case2
5 gm = 20k     case3
10gm = 40k
your bill amount is:

not buy till 10 gm


*/
//switch case to if else
//if else to switch case (not all)
#include<stdio.h>

//1g  4k
//2g  8k
//5g  20k
//10g 40k


void JwelersPortal(int iWeight)
  {
  	switch(iWeight)
  	{
  	case 1:
  	   printf("Your bill amount is 4000\n");
  	   break;
  	  
	case 2:
  	   printf("Your bill amount is 8000\n");
  	   break;
		 
	case 5:
  	   printf("Your bill amount is 20000\n");
  	   break;
		 
	case 10:
  	   printf("Your bill amount is 40000\n");
  	   break;	 	 	 
  
                 default:
                 printf("Invalid weight");
  }
}


int main()
{
               int iValue = 0;
	
	printf("Enter the gold coin size that you want to purchase \n");
	scanf("%d",&iValue);
	
	JwelersPortal(iValue);
	
	
  return 0;	
}

//do coding 5 hrs daily
//problem on numbers
//
