
/*
0 to 35   Fail
35 to 50  Pass class
50 to 60  Second class
60 to 70  First Class
70 to 100 First class with distinction

*/


#include<stdio.h>

void DisplayClass(float fMarks)
{
	if((fMarks > 0) && (fMarks < 35))
      {
	   printf("you are Fail");
      }
      else if((fMarks >= 35) && (fMarks < 50))
       {
       	printf("Pass class\n");
	   }
	   else if((fMarks >= 50 && fMarks < 60))
	    {
	     printf("Second Class\n");
	    }
	    else if((fMarks >= 60 && fMarks <  70))
	    {
	    	printf("First Class\n");
		}
		else if((fMarks >= 70 && fMarks <= 100))
		  {
		  	 printf("First Class with Distincton");
		  }
                       else
                            {
                                 printf("Invalid Marks");
                            }
}


int main()
{
  float fValue = 0.0;
  
  printf("Enter Percentage:\n");
  scanf("%f",&fValue);
 
  DisplayClass(fValue);

 return 0;
}

// switch cannot  be work on range
