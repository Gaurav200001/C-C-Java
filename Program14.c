#include<stdio.h>

void Display(int iNo) // defination
{

  int iCnt = 0; // counter start from 0, here we set 0 by default

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