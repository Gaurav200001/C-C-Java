#include<stdio.h>
int main()
{
	while(sizeof(0)) //return the size of integer
	  {
                  printf("Loop ");
	      if(sizeof(0))
                        break;
	            else 
                           continue;	
	  }
	return 0;
}

// loop
/*The sizeof(0) will returns the size of integer
(2 bytes or 4 bytes) so condition is true and 
control is get into loop block. There is a printf
 statement which prints only once becuase the 
next if statement going to be true and break the loop*/