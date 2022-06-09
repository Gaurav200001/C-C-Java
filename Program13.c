
#include<stdio.h>

Denonstration of ITERATION

void Display()
{

  int iCnt = 0; // counter start from 0, here we set 0 by default

  /*printf("Hello\n");
  printf("Hello\n");
  printf("Hello\n");
  printf("Hello\n");
  printf("Hello\n");*/

   // 1 Initialization
   // 2 Condition
   // 3 Displacement
   // 4 Loop body
       //          1           2          3
     for(iCnt = 1 ;iCnt <= 5 ; iCnt++) //++iCnt
         {
           printf("Hello\n"); // 4  
         } 
// 1 
// 2  4  3
// 2  4  3
// 2  4  3
// 2  4  3
// 2  4  3
// 2   
}

int main()
{
    Display();     Function call

    return 0;
}
}