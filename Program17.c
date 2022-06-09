#include<stdio.h>

void Display(int iNo)
{
        int iCnt = 0;
        if(iNo < 0)
            iNo = -iNo;// updater

         for( iCnt = 1; iCnt <= iNo; iCnt++)
              {
                 printf("Hello\n"); 
              }
         return;
}

int main()
{
  int iValue = 0;

  printf("\n Enter the number:");
  scanf("%d",&iValue);

 Display(iValue);

 return 0;
}