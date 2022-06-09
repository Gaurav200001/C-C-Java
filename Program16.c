
#include<stdio.h>

void Display(int iNo) 
 { 
        int iCnt = 0;
            if(iNo < 0)
                 {
                         printf("Please Enter positive number\n");
                         return;
                 }

 for(iCnt = 1 ;iCnt < iNo ; iCnt++) //++iCnt
         {
           printf("Hello\n"); // 4  
         } 
}


int main()
{

  int iValue = 0;

  printf("Enter the number\n");
  scanf("%d", &iValue);

  Display(iValue);      //Function call

  return 0;
}
